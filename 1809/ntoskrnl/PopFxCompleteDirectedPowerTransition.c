/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x1402D7CAC
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402D7EA4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402D838C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0E40 (PopDiagTraceFxDeviceDirectedCompletion.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  KIRQL v6; // si
  IRP *v7; // rdi
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 0x2000) == 0 )
    goto LABEL_17;
  _m_prefetchw((const void *)(BugCheckParameter3 + 960));
  v4 = *(_DWORD *)(BugCheckParameter3 + 960);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 960), v4, v4);
  }
  while ( v5 != v4 );
  if ( v4 )
LABEL_17:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 344));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  v7 = *(IRP **)(BugCheckParameter3 + 968);
  *(_QWORD *)(BugCheckParameter3 + 968) = 0LL;
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v8 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v9 = v8;
    v10 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v8, v8);
  }
  while ( v10 != v8 );
  LOBYTE(v9) = (v8 & 0x1000) != 0;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v9);
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 344));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  v7->IoStatus.Status = 0;
  v7->IoStatus.Information = 0LL;
  IofCompleteRequest(v7, 0);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 228), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 232), 0, 0);
  return result;
}
