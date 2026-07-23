/*
 * XREFs of EtwpRealtimeSaveBuffer @ 0x1406DBD78
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x1405C2C70 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14076066C (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408BC0F0 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x1408BC1B0 (EtwpEventWriteTemplateBackingFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, ULONG *Buffer)
{
  signed __int64 v2; // rax
  LARGE_INTEGER v4; // rcx
  __int64 QuadPart; // r9
  LONGLONG v7; // rbx
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

  v2 = *(_QWORD *)(a1 + 408);
  v4 = *(LARGE_INTEGER *)(a1 + 400);
  ByteOffset = v4;
  QuadPart = v4.QuadPart;
  v7 = *(_QWORD *)(a1 + 416);
  if ( v4.QuadPart >= v2 && v4.QuadPart + Buffer[12] > *(_QWORD *)(a1 + 432) )
  {
    QuadPart = 72LL;
    v7 = v4.QuadPart;
    ByteOffset.QuadPart = 72LL;
  }
  if ( QuadPart >= v2 || QuadPart + Buffer[12] < v2 )
  {
    v8 = ZwWriteFile(*(HANDLE *)(a1 + 376), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Buffer[12], &ByteOffset, 0LL);
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
      v9 = ByteOffset.QuadPart + Buffer[12];
      v10 = *(_QWORD *)(a1 + 432);
      *(_QWORD *)(a1 + 400) = v9;
      if ( v7 <= v9 )
        v7 = v9;
      *(_QWORD *)(a1 + 416) = v7;
      *(_QWORD *)(a1 + 424) += Buffer[12];
      v11 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252));
      ++*(_DWORD *)(a1 + 440);
      if ( v10 - *(_QWORD *)(a1 + 424) <= v11 && *(int *)(a1 + 16) >= 0 )
      {
        *(_DWORD *)(a1 + 16) = -1073741432;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(v17, v16, v18, a1 + 152);
      }
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
