/*
 * XREFs of Usbh_USB_IGNORE_SN @ 0x1C0051890
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_USB_IGNORE_SN(__int64 a1, __int64 a2, _BYTE *a3, int a4)
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
                            32,
                            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                            a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = a4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1u,
                            0x21u,
                            (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                            v8);
  }
  if ( *a3 )
  {
    result = (_UNKNOWN **)PdoExt(a1);
    *((_DWORD *)result + 358) |= 0x800u;
  }
  return result;
}
