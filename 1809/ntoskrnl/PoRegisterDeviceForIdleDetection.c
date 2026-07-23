/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1400DACF0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 * Callees:
 *     PopCheckForWork @ 0x140010620 (PopCheckForWork.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetDope @ 0x14016BE7C (PopGetDope.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // si
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  ULONG DeviceType; // eax
  int v15; // ebp
  __int64 v16; // rdi
  KIRQL v17; // si
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  struct _LIST_ENTRY *Blink; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v22; // rcx

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    p_IdleList = &Dope->IdleList;
    Flink = Dope->IdleList.Flink;
    if ( Flink == &Dope->IdleList )
      goto LABEL_4;
    Blink = Dope->IdleList.Blink;
    if ( Flink->Blink == p_IdleList && Blink->Flink == p_IdleList )
    {
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      *(_QWORD *)&Dope->IdleType = 0LL;
      *(_QWORD *)&Dope->ConservationIdleTime = 0LL;
      Dope->CurrentState = PowerDeviceUnspecified;
      Dope->IdleCount = 0;
      Dope->BusyCount = 0;
      Dope->BusyReference = 0;
      Dope->TotalBusyCount = 0;
      Dope->Specific = 0LL;
      Dope->IdleList.Blink = &Dope->IdleList;
      p_IdleList->Flink = p_IdleList;
LABEL_4:
      KxReleaseSpinLock(&PopDopeGlobalLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v9);
      return v4;
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v15 = 0;
  if ( DeviceType == 7 || DeviceType == 45 )
  {
    if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
      return v4;
    v15 = 1;
  }
  v16 = PopGetDope();
  if ( !v16 )
    return v4;
  v17 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  *(_DWORD *)(v16 + 16) = ConservationIdleTime;
  v18 = (_QWORD *)(v16 + 32);
  *(_DWORD *)(v16 + 20) = PerformanceIdleTime;
  *(_DWORD *)(v16 + 52) = State;
  *(_DWORD *)(v16 + 48) = v15;
  if ( (_QWORD *)*v18 == v18 )
  {
    *(_DWORD *)(v16 + 56) = 1;
    v19 = (_QWORD *)qword_140418F18;
    if ( *(__int64 **)qword_140418F18 != &PopIdleDetectList )
      goto LABEL_28;
    *v18 = &PopIdleDetectList;
    *(_QWORD *)(v16 + 40) = v19;
    *v19 = v18;
    qword_140418F18 = v16 + 32;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(v17);
  PopCheckForWork();
  return (PULONG)v16;
}
