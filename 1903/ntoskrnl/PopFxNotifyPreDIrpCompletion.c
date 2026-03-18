/*
 * XREFs of PopFxNotifyPreDIrpCompletion @ 0x1401807C8
 * Callers:
 *     PopRequestCompletion @ 0x140171E80 (PopRequestCompletion.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2F64 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PopFxNotifyPreDIrpCompletion(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax
  int v6; // ett
  KIRQL v7; // al
  unsigned int v8; // edx
  KIRQL v9; // si
  struct _KPRCB *CurrentPrcb; // rcx

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 816), 0, 0);
  if ( (result & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    LODWORD(result) = *(_DWORD *)(BugCheckParameter3 + 32);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(BugCheckParameter3 + 32),
                               result,
                               result);
    }
    while ( v6 != (_DWORD)result );
    if ( (result & 0x2000) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 32), 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1144));
      v8 = *(_DWORD *)(BugCheckParameter3 + 1172) & 0xFFFFFFFE;
      *(_DWORD *)(BugCheckParameter3 + 1168) = a3;
      v9 = v7;
      *(_DWORD *)(BugCheckParameter3 + 1172) = v8 | 2;
      KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1144));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v9);
      return PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
    }
  }
  return result;
}
