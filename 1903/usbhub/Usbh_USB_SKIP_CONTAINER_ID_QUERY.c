/*
 * XREFs of Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C002BE80
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_USB_SKIP_CONTAINER_ID_QUERY(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  _DWORD *result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_DWORD *)WPP_RECORDER_SF_S(
                           WPP_GLOBAL_Control->DeviceExtension,
                           a2,
                           (_DWORD)a3,
                           42,
                           (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                           a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_DWORD *)WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           0,
                           1,
                           43,
                           (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                           a4);
  }
  if ( *a3 )
  {
    result = PdoExt(a1);
    result[358] |= 0x8000u;
  }
  return result;
}
