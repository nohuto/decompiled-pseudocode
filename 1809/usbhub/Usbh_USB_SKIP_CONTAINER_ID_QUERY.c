/*
 * XREFs of Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C002AF10
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_SKIP_CONTAINER_ID_QUERY(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  _DWORD *v7; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      (_DWORD)a3,
      42,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a4);
  if ( *a3 )
  {
    v7 = PdoExt(a1);
    v7[358] |= 0x8000u;
  }
}
