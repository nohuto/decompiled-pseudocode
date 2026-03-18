/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0002974
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C00022B0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00025EC (UsbhPdoSetD0_Finish.c)
 *     UsbhSshPropagateResume @ 0x1C000285C (UsbhSshPropagateResume.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0049F7C (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0011840 (UsbhSshSetPortsBusyState.c)
 */

__int64 __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8

  *(POWER_STATE *)(PdoExt(DeviceObject) + 788) = State;
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  if ( State.SystemState == PowerSystemWorking )
  {
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 2LL;
  }
  else
  {
    result = (unsigned int)(State.SystemState - 2);
    if ( (unsigned int)result > 2 )
      return result;
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 1LL;
  }
  return UsbhSshSetPortsBusyState(*(_QWORD *)(v6 + 1184), *(unsigned __int16 *)(v5 + 1428), v7);
}
