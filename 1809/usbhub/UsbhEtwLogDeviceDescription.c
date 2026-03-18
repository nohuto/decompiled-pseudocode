/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C001F95C
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhEtwRundown @ 0x1C002B2BC (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EA28 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _BYTE v4[48]; // [rsp+60h] [rbp-48h] BYREF

  if ( dword_1C006E650 && *(_QWORD *)(a1 + 2240) )
  {
    if ( *(_DWORD *)(a1 + 2248) )
    {
      FdoExt(*(_QWORD *)(a1 + 1184));
      UsbhEtwGetDeviceInfo(a1, (__int64)v4);
      UsbhEtwWrite(a2, 0LL);
    }
  }
}
