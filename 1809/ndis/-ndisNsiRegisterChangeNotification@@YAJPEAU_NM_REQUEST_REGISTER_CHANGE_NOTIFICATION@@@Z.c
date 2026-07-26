/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00D1CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_q(0x85u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C00A0265 >= 4u )
      WPP_SF_qD(0x86u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, 0);
  }
  return 0LL;
}
