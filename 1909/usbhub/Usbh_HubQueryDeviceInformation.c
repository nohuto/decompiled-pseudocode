/*
 * XREFs of Usbh_HubQueryDeviceInformation @ 0x1C0041530
 * Callers:
 *     UsbhGetDeviceInformationEx @ 0x1C004D580 (UsbhGetDeviceInformationEx.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubQueryDeviceInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 (__fastcall *v9)(_QWORD, __int64, __int64, _QWORD, __int64); // r10

  v8 = FdoExt(a1);
  v9 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64))*((_QWORD *)v8 + 538);
  if ( v9 )
    return v9(*((_QWORD *)v8 + 529), a2, a3, a4, a5);
  else
    return 3221225474LL;
}
