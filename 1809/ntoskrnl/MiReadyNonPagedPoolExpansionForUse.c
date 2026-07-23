/*
 * XREFs of MiReadyNonPagedPoolExpansionForUse @ 0x1401641D8
 * Callers:
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiReadyNonPagedPoolExpansionForUse(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rdi
  __int64 v9; // rbx
  unsigned __int8 OldIrql; // r15
  unsigned __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v14[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  v7 = (unsigned __int64)(a2 - a1[40]) >> 21;
  KeAcquireInStackQueuedSpinLock(a1 + 38, v14);
  v9 = 2 * (v4 + 21);
  if ( v7 + a3 > a1[v9] )
  {
    v12 = (v7 + a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 <= a1[22] )
      a1[v9] = v12;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v14);
  OldIrql = v14[0].OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0].OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return (unsigned int)MiSplitBitmapPages(5u, a1[v9 + 1] + (v7 >> 3), a3 + (v7 & 7))
      && (unsigned int)MiSplitBitmapPages(
                         5u,
                         a1[47] + ((unsigned __int64)(a2 - a1[40]) >> 15),
                         (a3 << 9) + (((unsigned __int64)(a2 - a1[40]) >> 12) & 7));
}
