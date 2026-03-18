/*
 * XREFs of Usbh_HubDerefDeviceHandle @ 0x1C000CE24
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C000DE24 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025048 (UsbhGetHubDeviceInformation.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0041D5C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubDerefDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = FdoExt(a1);
  if ( *(_QWORD *)(result + 4472) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(result + 4472))(
             *(_QWORD *)(result + 4232),
             a2,
             a3,
             a4);
  return result;
}
