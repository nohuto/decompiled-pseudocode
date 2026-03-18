/*
 * XREFs of IopSynchronousApiServiceTail @ 0x14065E93C
 * Callers:
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopCancelAlertedRequest @ 0x14081960C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
