/*
 * XREFs of KiDecrementProcessStackCount @ 0x1400909F0
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiSuspendThread @ 0x1400AF3C4 (KiSuspendThread.c)
 *     KiOutSwapKernelStacks @ 0x1400E3280 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1400E3698 (KeDeleteThread.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ett
  signed __int64 *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 576), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe(a1);
    v5 = *(_DWORD *)(a1 + 576);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 && v5 < 8 )
    {
      while ( 1 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 576), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v6 == v5 )
          break;
        if ( v5 >= 8 )
          goto LABEL_5;
      }
      v3 = 1;
    }
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v7 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v8 = KiProcessOutSwapListHead;
      do
      {
        *v7 = v8;
        v9 = v8;
        v8 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v7, v8);
      }
      while ( v8 != v9 );
      if ( !v8 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
