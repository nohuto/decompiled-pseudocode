/*
 * XREFs of KeRetryOutswapProcess @ 0x1402A5108
 * Callers:
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1)
{
  unsigned __int8 CurrentIrql; // si
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v5; // rax
  signed __int64 *v6; // rdi
  signed __int64 v7; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe(a1);
  v3 = a1[144] & 7;
  if ( v3 == 1 )
    _InterlockedXor(a1 + 144, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  LODWORD(v5) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v3 == 1 )
  {
    v6 = (signed __int64 *)(a1 + 66);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v5 = KiProcessOutSwapListHead;
    do
    {
      *v6 = v5;
      v7 = v5;
      v5 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v6, v5);
    }
    while ( v5 != v7 );
    if ( !v5 )
      LODWORD(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v5;
}
