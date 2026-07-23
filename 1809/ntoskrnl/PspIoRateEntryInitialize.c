/*
 * XREFs of PspIoRateEntryInitialize @ 0x140606F28
 * Callers:
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall PspIoRateEntryInitialize(struct _EX_RUNDOWN_REF *a1)
{
  memset(a1, 0, 0x38uLL);
  ExInitializePushLock(&a1[4].Count);
  ExWaitForRundownProtectionRelease(a1 + 4);
  ExRundownCompleted(a1 + 4);
  a1[2].Count = -1LL;
}
