/*
 * XREFs of KiDecrementProcessStackCount @ 0x1400174F0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KiOutSwapKernelStacks @ 0x14013D0B8 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14013D4C4 (KeDeleteThread.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdx
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // ett
  signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 572), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe(a1);
    v6 = *(_DWORD *)(a1 + 572);
    if ( (v6 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 && v6 < 8 )
    {
      while ( 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 572), v6 & 0xFFFFFFF8 | 3, v6);
        if ( v7 == v6 )
          break;
        if ( v6 >= 8 )
          goto LABEL_5;
      }
      v3 = 1;
    }
LABEL_5:
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v8 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v9 = KiProcessOutSwapListHead;
      do
      {
        *v8 = v9;
        v10 = v9;
        v9 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v8, v9);
      }
      while ( v9 != v10 );
      if ( !v9 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
