/*
 * XREFs of KeRetryOutswapProcess @ 0x14028E834
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v7; // rax
  signed __int64 *v8; // rdi
  signed __int64 v9; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe(a1, a2, a3);
  v5 = a1[143] & 7;
  if ( v5 == 1 )
    _InterlockedXor(a1 + 143, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  LODWORD(v7) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v5 == 1 )
  {
    v8 = (signed __int64 *)(a1 + 66);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v7 = KiProcessOutSwapListHead;
    do
    {
      *v8 = v7;
      v9 = v7;
      v7 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v8, v7);
    }
    while ( v7 != v9 );
    if ( !v7 )
      LODWORD(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v7;
}
