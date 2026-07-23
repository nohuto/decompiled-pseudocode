/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x14075E7F0
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C22F0 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 FileInformation; // [rsp+58h] [rbp+10h] BYREF

  v1 = 72LL;
  v6 = 72LL;
  if ( ZwSetInformationFile(*(HANDLE *)(a1 + 376), &IoStatusBlock, &v6, 8u, FileEndOfFileInformation) < 0
    || (v3 = *(void **)(a1 + 376),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v3, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0LL;
    v1 = 0LL;
  }
  *(_QWORD *)(a1 + 416) = v1;
  *(_QWORD *)(a1 + 408) = v1;
  *(_QWORD *)(a1 + 400) = v1;
  return result;
}
