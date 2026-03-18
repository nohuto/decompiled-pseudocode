/*
 * XREFs of KeIpiGenericCall @ 0x14017F990
 * Callers:
 *     KeAdjustInterruptTime @ 0x140169964 (KeAdjustInterruptTime.c)
 *     KiDynamicProcessorInitialization @ 0x1402A338C (KiDynamicProcessorInitialization.c)
 *     KeStartProfile @ 0x1402AC15C (KeStartProfile.c)
 *     KeStopProfile @ 0x1402AC270 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x14059FE78 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1405AB31C (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x1405AB4E0 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // r8
  ULONG v6; // esi
  unsigned __int8 v7; // cl
  ULONG_PTR v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v11; // rcx
  ULONG ActiveProcessorCount; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v5 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  v13 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v6 )
    KiIpiSendPacket(
      1,
      0,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v13);
  v7 = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ActiveProcessorCount = 0;
  v8 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        KeGetCurrentIrql();
      __writecr8(0xCuLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  KxReleaseSpinLock(&KiReverseStallIpiLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(CurrentIrql);
  return v8;
}
