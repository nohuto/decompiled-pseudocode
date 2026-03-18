/*
 * XREFs of Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0050EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_HUB_POWER_ON_OVER_CURRENT(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  unsigned int result; // eax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      (_DWORD)a3,
      48,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x31u,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      v8);
  }
  result = *(_DWORD *)(a1 + 2560) & 0xEFFFFFFF;
  *(_DWORD *)(a1 + 2560) = result | (*a3 != 0 ? 0x10000000 : 0);
  return result;
}
