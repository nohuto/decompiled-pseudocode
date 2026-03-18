/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0002838
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C00021A0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhSshPropagateResume @ 0x1C0002720 (UsbhSshPropagateResume.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0048618 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
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
