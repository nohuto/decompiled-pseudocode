/*
 * XREFs of EtwpRealtimeSaveBuffer @ 0x1406EB254
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x140633C78 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406AA07C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140787F3C (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408F7334 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x1408F73F4 (EtwpEventWriteTemplateBackingFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, __int64 Buffer)
{
  LARGE_INTEGER v2; // r8
  LONGLONG v3; // rbx
  __int64 QuadPart; // r9
  signed __int64 v7; // rax
  NTSTATUS v8; // ebp
  LONGLONG v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(LARGE_INTEGER *)(a1 + 400);
  v3 = *(_QWORD *)(a1 + 416);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  QuadPart = v2.QuadPart;
  v7 = *(_QWORD *)(a1 + 408);
  ByteOffset = v2;
  if ( v2.QuadPart >= v7 && v2.QuadPart + *(unsigned int *)(Buffer + 48) > *(_QWORD *)(a1 + 432) )
  {
    QuadPart = 72LL;
    v3 = v2.QuadPart;
    ByteOffset.QuadPart = 72LL;
  }
  if ( QuadPart >= v7 || QuadPart + *(unsigned int *)(Buffer + 48) < v7 )
  {
    v8 = ZwWriteFile(
           *(HANDLE *)(a1 + 376),
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           (PVOID)Buffer,
           *(_DWORD *)(Buffer + 48),
           &ByteOffset,
           0LL);
    if ( v8 < 0 )
    {
      ++*(_DWORD *)(a1 + 276);
      *(_DWORD *)(a1 + 464) = 2;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
        EtwpEventWriteTemplateAdmin(
          a1 + 384,
          (unsigned int)&ETW_EVENT_WRITE_FAILED,
          v19,
          a1 + 152,
          a1 + 384,
          v8,
          *(_DWORD *)(a1 + 12));
    }
    else
    {
      v9 = ByteOffset.QuadPart + *(unsigned int *)(Buffer + 48);
      v10 = *(_QWORD *)(a1 + 432);
      *(_QWORD *)(a1 + 400) = v9;
      if ( v3 <= v9 )
        v3 = v9;
      *(_QWORD *)(a1 + 416) = v3;
      *(_QWORD *)(a1 + 424) += *(unsigned int *)(Buffer + 48);
      v11 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252));
      ++*(_DWORD *)(a1 + 440);
      if ( v10 - *(_QWORD *)(a1 + 424) <= v11 && *(int *)(a1 + 16) >= 0 )
      {
        *(_DWORD *)(a1 + 16) = -1073741432;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(v17, v16, v18, a1 + 152);
      }
    }
    if ( !v8 )
    {
      if ( *(_WORD *)(Buffer + 54) == 6 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x10000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 832), 0xEFFFFFFF);
    }
    return (unsigned int)v8;
  }
  else
  {
    ++*(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 464) = 2;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
      EtwpEventWriteTemplateBackingFile(v14, v13, v15, a1 + 152);
    return 3221225864LL;
  }
}
