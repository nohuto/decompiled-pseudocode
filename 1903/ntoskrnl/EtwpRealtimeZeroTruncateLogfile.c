/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x1406B9F4C
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406B7B00 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  FileInformation = 0LL;
  IoStatusBlock.Pointer = 0LL;
  v2 = *(void **)(a1 + 376);
  v3 = 72LL;
  IoStatusBlock.Information = 0LL;
  v8 = 72LL;
  if ( ZwSetInformationFile(v2, &IoStatusBlock, &v8, 8u, FileEndOfFileInformation) < 0
    || (v4 = *(void **)(a1 + 376),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0LL;
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 416) = v3;
  *(_QWORD *)(a1 + 408) = v3;
  *(_QWORD *)(a1 + 400) = v3;
  return result;
}
