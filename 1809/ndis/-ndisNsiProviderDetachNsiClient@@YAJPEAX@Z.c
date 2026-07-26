/*
 * XREFs of ?ndisNsiProviderDetachNsiClient@@YAJPEAX@Z @ 0x1C0040430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_q(0x3Eu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
    if ( (unsigned __int8)byte_1C00A0265 >= 4u )
      WPP_SF_q(0x3Fu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  }
  return 0LL;
}
