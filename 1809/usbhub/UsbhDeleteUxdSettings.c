/*
 * XREFs of UsbhDeleteUxdSettings @ 0x1C005BCDC
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00494D0 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C00553C0 (UsbhPortDisconnect.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022120 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005BB70 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005BC20 (UsbhDeleteUxdPortSettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005C41C (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhDeleteUxdSettings(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  PDEVICE_OBJECT v8; // rcx
  int v9; // ebx
  bool v10; // zf
  unsigned int v11; // ebx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Fu,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  UsbhGetGlobalUxdSettings((__int64)v8, (_QWORD *)v7 + 647);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( !v6[661] )
    {
      v10 = v7[1296] == 0;
      goto LABEL_9;
    }
  }
  else if ( !v6[660] )
  {
    v10 = v7[1295] == 0;
LABEL_9:
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
