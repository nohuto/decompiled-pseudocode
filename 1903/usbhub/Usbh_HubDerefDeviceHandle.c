/*
 * XREFs of Usbh_HubDerefDeviceHandle @ 0x1C000D4C4
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025F5C (UsbhGetHubDeviceInformation.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00433AC (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
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
