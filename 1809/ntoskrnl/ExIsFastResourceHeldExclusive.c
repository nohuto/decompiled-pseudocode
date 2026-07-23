/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x1401649D0
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140107D40 (ExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  __int16 v1; // ax
  char v2; // r10
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v6; // bl
  bool v7; // di
  unsigned __int8 v8; // r11
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *(_WORD *)(BugCheckParameter2 + 26);
  v2 = 0;
  if ( (v1 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (v1 & 0x80u) != 0 )
  {
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v7 = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL) != 0;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v8 && v6 < v8 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
    return v7;
  }
  return v2;
}
