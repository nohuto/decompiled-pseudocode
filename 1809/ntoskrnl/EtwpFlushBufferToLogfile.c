/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x1405C1784
 * Callers:
 *     EtwpFlushBuffer @ 0x1405C2D14 (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x1408BF2D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x140014A4C (EtwpQueryMaximumFileSize.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x1406D1C50 (EtwpEventWriteTemplateMaxFileSize.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1408BC0F0 (EtwpEventWriteTemplateAdmin.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, unsigned int *a2)
{
  unsigned __int64 Length; // rbp
  __int64 v5; // rcx
  unsigned __int64 MaximumFileSize; // rsi
  NTSTATUS v7; // edi
  __int64 v8; // rcx
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  Length = *a2;
  if ( *(_DWORD *)(a1 + 308) )
  {
    MaximumFileSize = EtwpQueryMaximumFileSize(a1);
    if ( Length * *(unsigned int *)(v5 + 220) >= MaximumFileSize )
    {
      v10 = *(_DWORD *)(v5 + 12);
      if ( (v10 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 232) = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a1 + 220) = 1;
      }
      else
      {
        if ( (v10 & 8) == 0 )
        {
          v7 = -1073741432;
          if ( (*(_DWORD *)(a1 + 832) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x100u);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(a1 + 168, v11, v12, a1 + 152, a1 + 168);
          }
          goto LABEL_12;
        }
        if ( (*(_DWORD *)(a1 + 836) & 1) == 0 )
        {
          EtwpGenerateFileName(a1 + 184, a1 + 312, a1 + 200);
          _InterlockedOr((volatile signed __int32 *)(a1 + 836), 1u);
        }
      }
    }
  }
  v7 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 232), 0LL);
  if ( v7 < 0 )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
      EtwpEventWriteTemplateAdmin(
        a1 + 168,
        (unsigned int)&ETW_EVENT_WRITE_FAILED,
        v13,
        a1 + 152,
        a1 + 168,
        v7,
        *(_DWORD *)(a1 + 12));
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 1080);
    *(_QWORD *)(a1 + 232) += Length;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 4128), Length);
  }
  if ( v7 >= 0 )
  {
    ++*(_DWORD *)(a1 + 264);
    ++*(_DWORD *)(a1 + 220);
    return (unsigned int)v7;
  }
LABEL_12:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
  if ( v7 == -1073741670 )
    return 0;
  return (unsigned int)v7;
}
