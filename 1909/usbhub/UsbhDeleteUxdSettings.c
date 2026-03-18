/*
 * XREFs of UsbhDeleteUxdSettings @ 0x1C005E1C8
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C0057600 (UsbhPortDisconnect.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022BD0 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005E03C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005E0FC (UsbhDeleteUxdPortSettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005EA28 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhDeleteUxdSettings(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rsi
  PDEVICE_OBJECT v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebx
  bool v10; // zf
  unsigned int v11; // ebx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x1Fu,
        (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  }
  UsbhGetGlobalUxdSettings((__int64)v7, (_QWORD *)v8 + 647);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( !v6[661] )
    {
      v10 = v8[1296] == 0;
      goto LABEL_10;
    }
  }
  else if ( !v6[660] )
  {
    v10 = v8[1295] == 0;
LABEL_10:
    if ( v10 )
      return 0LL;
  }
  v11 = *((unsigned __int16 *)v6 + 714);
  Handle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &Handle) >= 0 )
  {
    UsbhDeleteUxdPortSettings(v12, (const WCHAR *)Handle, v11);
    ZwClose(Handle);
  }
  UsbhDeleteUxdDeviceKey(v12, a2);
  return 0LL;
}
