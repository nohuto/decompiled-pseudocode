/*
 * XREFs of UsbhRemoveQueuedSuspend @ 0x1C0045530
 * Callers:
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014DA0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C001BB20 (Usbh_PCE_HardwareWake_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhiSignalSuspendEvent @ 0x1C00467F4 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall UsbhRemoveQueuedSuspend(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int64 result; // rax
  _QWORD *i; // r10
  _QWORD *v7; // r10
  void *v8; // r11
  __int64 v9; // r8
  _QWORD *v10; // rax
  int v11; // [rsp+28h] [rbp-10h]

  Log(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x56u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v11);
  }
  FdoExt(a1);
  result = a2 + 456;
  for ( i = *(_QWORD **)(a2 + 456); i != (_QWORD *)result; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == 0x40000 )
    {
      Log(a1, 512, 1718375253, a2, (__int64)(i - 2));
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      ExFreePoolWithTag(v8, 0);
      return UsbhiSignalSuspendEvent(a1, a2);
    }
  }
  return result;
}
