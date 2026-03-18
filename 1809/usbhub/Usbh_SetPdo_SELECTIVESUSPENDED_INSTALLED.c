/*
 * XREFs of Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C002B090
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_DWORD *)WPP_RECORDER_SF_S(
                         WPP_GLOBAL_Control->DeviceExtension,
                         a2,
                         (_DWORD)a3,
                         24,
                         (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                         a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_DWORD *)WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         1,
                         25,
                         (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                         a4);
  if ( a4 == 4 )
  {
    if ( *a3 )
    {
      result = PdoExt(a1);
      *((_BYTE *)result + 2733) = 1;
    }
  }
  return result;
}
