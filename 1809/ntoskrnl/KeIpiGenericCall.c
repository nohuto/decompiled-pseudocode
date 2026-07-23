/*
 * XREFs of KeIpiGenericCall @ 0x140175A30
 * Callers:
 *     KeAdjustInterruptTime @ 0x140159988 (KeAdjustInterruptTime.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     KeStopProfile @ 0x140295F30 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x140574264 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x14057C428 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x14057C5E0 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // r8
  ULONG v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  ULONG ActiveProcessorCount; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

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
  v15 = 0;
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
    KeYieldProcessorEx(&v15, v7, v8);
  v9 = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ActiveProcessorCount = 0;
  v10 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
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
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(CurrentIrql);
  return v10;
}
