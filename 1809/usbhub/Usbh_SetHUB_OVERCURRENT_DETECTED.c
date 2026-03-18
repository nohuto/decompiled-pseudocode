/*
 * XREFs of Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C00511A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_SetHUB_OVERCURRENT_DETECTED(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                            WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            (_DWORD)a3,
                            18,
                            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                            a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = a4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1u,
                            0x13u,
                            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                            v8);
  }
  if ( a4 == 4 )
  {
    if ( *a3 )
    {
      result = (_UNKNOWN **)FdoExt(a1);
      *((_BYTE *)result + 3010) = 1;
    }
  }
  return result;
}
