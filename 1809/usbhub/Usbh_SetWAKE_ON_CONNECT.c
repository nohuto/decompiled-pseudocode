/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C0051640
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // r8d
  unsigned int result; // eax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v8 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v9,
      14,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      v11);
  }
  result = v8[640] & 0xFEFFFFFF;
  v8[640] = result;
  if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) >= 0 )
  {
    if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) <= 1 )
    {
LABEL_11:
      result |= 0x1000000u;
      goto LABEL_12;
    }
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 2 )
    {
LABEL_12:
      v8[640] = result;
      return result;
    }
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 && a4 == 4 )
    {
      if ( *a3 )
        goto LABEL_11;
      goto LABEL_12;
    }
  }
  return result;
}
