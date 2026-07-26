/*
 * XREFs of ?ndisNsiProviderCleanupNsiClientContext@@YAXPEAX@Z @ 0x1C00403E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_q(0x40u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
    if ( (unsigned __int8)byte_1C00A0265 >= 4u )
      WPP_SF_q(0x41u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  }
}
