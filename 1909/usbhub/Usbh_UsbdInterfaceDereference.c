/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x1C004159C
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x1C0040354 (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x1C0056A90 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
