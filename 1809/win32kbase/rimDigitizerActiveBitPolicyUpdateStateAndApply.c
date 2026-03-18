/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0129224
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70 (RIMCmRemoveContactSuppressionReasons.c)
 */

unsigned __int8 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, int *a2)
{
  int v3; // edx
  unsigned __int16 v4; // r9
  unsigned __int8 result; // al
  int v6; // [rsp+28h] [rbp-10h]

  v3 = a2[605];
  if ( (v3 & 0x1000002) == 0x1000000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 64LL);
    v4 = 43;
  }
  else
  {
    result = (v3 & 2) != 0;
    if ( (((a2[2] & 0x40) != 0) & result) == 0 )
      return result;
    RIMCmRemoveContactSuppressionReasons(a1, a2, 64LL);
    v4 = 44;
  }
  v6 = *a2;
  return WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, v4, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v6);
}
