/*
 * XREFs of PoSetPowerState @ 0x14016B610
 * Callers:
 *     IopPowerDispatch @ 0x140157ED0 (IopPowerDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int v6; // ebx
  KIRQL v7; // r14
  unsigned int v8; // eax
  int v9; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type == SystemPowerState )
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 == State.SystemState )
      goto LABEL_6;
    v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
    v9 = State.SystemState & 0xF;
    goto LABEL_5;
  }
  if ( Type == DevicePowerState )
  {
    v6 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
    if ( v6 != State.SystemState )
    {
      v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F;
      v9 = 16 * (State.SystemState & 0xF);
LABEL_5:
      DeviceObjectExtension->PowerFlags = v8 | v9;
    }
  }
LABEL_6:
  KxReleaseSpinLock(&PopIrpSerialLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return (POWER_STATE)v6;
}
