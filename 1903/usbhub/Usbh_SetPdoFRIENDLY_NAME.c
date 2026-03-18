/*
 * XREFs of Usbh_SetPdoFRIENDLY_NAME @ 0x1C00532F0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdoFRIENDLY_NAME(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        20,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x15u,
        (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
        v8);
    }
  }
  *((_QWORD *)PdoExt(a1) + 277) = a3;
  result = PdoExt(a1);
  result[553] = a4;
  return result;
}
