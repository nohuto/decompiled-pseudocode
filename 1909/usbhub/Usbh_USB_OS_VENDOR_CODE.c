/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C002BD50
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  _DWORD *result; // rax
  _DWORD *v8; // rax
  char v9; // bl
  int v10; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_DWORD *)WPP_RECORDER_SF_S(
                           WPP_GLOBAL_Control->DeviceExtension,
                           a2,
                           (_DWORD)a3,
                           30,
                           (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                           a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_DWORD *)WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           0,
                           1,
                           31,
                           (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
                           a4);
  }
  if ( a4 >= 2 )
  {
    v8 = PdoExt(a1);
    v8[358] &= ~0x200u;
    v9 = *a3;
    result = PdoExt(a1);
    v10 = result[358];
    if ( v9 )
    {
      result[358] = v10 | 0x400;
      result = PdoExt(a1);
      *((_BYTE *)result + 1432) = a3[1];
    }
    else
    {
      result[358] = v10 & 0xFFFFFBFF;
    }
  }
  return result;
}
