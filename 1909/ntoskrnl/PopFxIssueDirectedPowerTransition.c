/*
 * XREFs of PopFxIssueDirectedPowerTransition @ 0x1402F3A80
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x1408ABDFC (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     PopFxQueueWorkOrder @ 0x1400E3AA8 (PopFxQueueWorkOrder.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIssueDirectedPowerTransition(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // si
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 816), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter2, 0LL);
  v6 = (KSPIN_LOCK *)(BugCheckParameter2 + 1144);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 1144));
  if ( *(_DWORD *)(BugCheckParameter2 + 1152) || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x2000) != 0 )
    PopFxBugCheck(0x910uLL, 3uLL, BugCheckParameter2, 0LL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) & 0x1000) != 0) == a2 )
    PopFxBugCheck(0x910uLL, (a2 != 0) + 4LL, BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 1152) = 2;
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x2000u);
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x1000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFEFFF);
  PopFxAddRefDevice(BugCheckParameter2);
  *(_DWORD *)(BugCheckParameter2 + 1172) &= 0xFFFFFFFC;
  *(_QWORD *)(BugCheckParameter2 + 1160) = a3;
  *(_DWORD *)(BugCheckParameter2 + 1168) = -1073741436;
  PopFxQueueWorkOrder(v8, BugCheckParameter2 + 912, BugCheckParameter2);
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
