/*
 * XREFs of Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C0051730
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

char __fastcall Usbh_USB_DEVICE_POWER_UP_DELAY(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  _DWORD *v7; // rax
  __int16 v8; // bx
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      (_DWORD)a3,
      36,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x25u,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      v10);
  }
  LOBYTE(v7) = *a3;
  if ( *a3 )
  {
    v8 = 2 * (unsigned __int8)v7;
    v7 = PdoExt(a1);
    *((_WORD *)v7 + 718) = v8;
  }
  return (char)v7;
}
