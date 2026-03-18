/*
 * XREFs of Usbh_HubRemoveUsbDevice @ 0x1C0049494
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C000DE24 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubRemoveUsbDevice(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
