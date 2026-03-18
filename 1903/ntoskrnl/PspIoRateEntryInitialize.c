/*
 * XREFs of PspIoRateEntryInitialize @ 0x1406964F8
 * Callers:
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x1408C8164 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  memset(a1, 0, 0x38uLL);
  ExInitializePushLock(&a1[4].Count);
  ExWaitForRundownProtectionRelease(a1 + 4);
  ExRundownCompleted(a1 + 4);
  a1[2].Count = -1LL;
}
