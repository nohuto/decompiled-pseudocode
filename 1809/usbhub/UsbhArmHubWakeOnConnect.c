/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x1C0007068
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 * Callees:
 *     UsbhSetHubRemoteWake @ 0x1C0007214 (UsbhSetHubRemoteWake.c)
 *     UsbhArmHubForWakeDetect @ 0x1C000730C (UsbhArmHubForWakeDetect.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = FdoExt(DeviceObject);
  v3 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    result = UsbhSetHubRemoteWake((_DWORD)DeviceObject);
    if ( (int)result >= 0 )
      *(_DWORD *)(v3 + 2560) |= 0x80000u;
  }
  return result;
}
