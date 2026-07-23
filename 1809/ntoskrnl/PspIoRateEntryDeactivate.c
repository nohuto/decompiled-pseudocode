/*
 * XREFs of PspIoRateEntryDeactivate @ 0x140586238
 * Callers:
 *     PspSetJobIoRateControl @ 0x140585F0C (PspSetJobIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x140586150 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x140607764 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStopIoRateControl @ 0x140001814 (IoStopIoRateControl.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x140105CDC (IoStopDiskIoAttributionForContext.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
