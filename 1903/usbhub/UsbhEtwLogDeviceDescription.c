/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C0020660
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EEE8 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

void *__fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  void *result; // rax
  _BYTE v5[48]; // [rsp+60h] [rbp-48h] BYREF

  result = memset(v5, 0, 0x2CuLL);
  if ( dword_1C006F650 && *(_QWORD *)(a1 + 2240) )
  {
    if ( *(_DWORD *)(a1 + 2248) )
    {
      FdoExt(*(_QWORD *)(a1 + 1184));
      UsbhEtwGetDeviceInfo(a1, (__int64)v5);
      return (void *)UsbhEtwWrite(a2, 0LL);
    }
  }
  return result;
}
