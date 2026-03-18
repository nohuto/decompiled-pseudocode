/*
 * XREFs of PspIoRateEntryDeactivate @ 0x140585238
 * Callers:
 *     PspSetJobIoRateControl @ 0x140584F0C (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x140585150 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x140606764 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088A234 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x140001814 (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionDereference @ 0x140105834 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x140105C3C (IoStopDiskIoAttributionForContext.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (struct _EX_RUNDOWN_REF *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
