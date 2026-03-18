/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x1402B66C0
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x1401D63C0 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x1401D6580 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x140880AC4 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSwitchQueue @ 0x14010D1B8 (KiSwitchQueue.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiSwapToUmsThreadContinue()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rsi
  int v2; // eax
  struct _KQUEUE *v3; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 Queue; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v2 = *((_DWORD *)Object + 20);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v2 | 2;
    CurrentThread->MiscFlags = ~(*((_DWORD *)CurrentThread->WaitBlock[3].SparePtr + 18) << 16) & 0x10000 | CurrentThread->MiscFlags & 0xFFFEFFFF;
    v3 = (struct _KQUEUE *)*((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    Queue = (__int64)CurrentThread->Queue;
    if ( v3 != (struct _KQUEUE *)Queue )
      KiSwitchQueue((__int64)CurrentThread, (__int64)v3, Queue);
    KeInsertQueue(v3, *((PLIST_ENTRY *)Object + 5));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
