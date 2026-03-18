/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x1402F2A6C
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2CC4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F319C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400E3B18 (PopFxDisableWorkOrderWatchdog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F2FC4 (PopFxEnforceDirectedPowerTransition.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402FAFD0 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402FD7F0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  KIRQL v8; // r14
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_21;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1152));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1152);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1152), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_21;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 968));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1144));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v9 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v9, v9);
  }
  while ( v10 != v9 );
  if ( ((v9 & 0x1000) != 0) != a2 )
LABEL_21:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v11 = *(_QWORD *)(BugCheckParameter3 + 1160);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1168);
  v13 = *(_DWORD *)(BugCheckParameter3 + 1172) & 0xFFFFFFFD;
  *(_QWORD *)(BugCheckParameter3 + 1160) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1168) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1172) = v13;
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1144));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  LOBYTE(v14) = a2;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v14);
  if ( byte_140444BB0 )
    v12 = 0;
  else
    PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v11, v12);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 236), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 240), 0, 0);
  return result;
}
