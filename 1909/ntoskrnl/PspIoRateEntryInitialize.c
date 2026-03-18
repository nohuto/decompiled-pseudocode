/*
 * XREFs of PspIoRateEntryInitialize @ 0x140689A68
 * Callers:
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x1408C7A44 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  memset(a1, 0, 0x38uLL);
  ExInitializePushLock(&a1[4].Count);
  ExWaitForRundownProtectionRelease(a1 + 4);
  ExRundownCompleted(a1 + 4);
  a1[2].Count = -1LL;
}
