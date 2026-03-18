/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C002AC00
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  _DWORD *v7; // rax
  char v8; // bl
  _DWORD *v9; // rax
  int v10; // ecx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      (_DWORD)a3,
      30,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a4);
  if ( a4 >= 2 )
  {
    v7 = PdoExt(a1);
    v7[358] &= ~0x200u;
    v8 = *a3;
    v9 = PdoExt(a1);
    v10 = v9[358];
    if ( v8 )
    {
      v9[358] = v10 | 0x400;
      *((_BYTE *)PdoExt(a1) + 1432) = a3[1];
    }
    else
    {
      v9[358] = v10 & 0xFFFFFBFF;
    }
  }
}
