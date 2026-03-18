/*
 * XREFs of Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C002C2A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        24,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        25,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        a4);
  }
  if ( a4 == 4 )
  {
    if ( *a3 )
      *((_BYTE *)PdoExt(a1) + 2733) = 1;
  }
}
