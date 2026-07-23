/*
 * XREFs of ExIsFastResourceHeld @ 0x1401656E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeld(ULONG_PTR BugCheckParameter2)
{
  char v1; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v3; // bl
  bool v4; // di
  unsigned __int8 v5; // r11
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v4 = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL) != 0;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v5 && v3 < v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    return v4;
  }
  return v1;
}
