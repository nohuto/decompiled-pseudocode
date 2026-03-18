/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0100C08
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC (RIMCmRemoveContactSuppressionReasons.c)
 */

unsigned __int8 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, int *a2)
{
  int v3; // edx
  unsigned __int16 v4; // r9
  unsigned __int8 result; // al
  int v6; // [rsp+28h] [rbp-10h]

  v3 = a2[601];
  if ( (v3 & 0x1000002) == 0x1000000 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 64LL);
    v4 = 38;
  }
  else
  {
    result = (v3 & 2) != 0;
    if ( (((a2[2] & 0x40) != 0) & result) == 0 )
      return result;
    RIMCmRemoveContactSuppressionReasons(a1, a2, 64LL);
    v4 = 39;
  }
  v6 = *a2;
  return WPP_RECORDER_SF_d(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x15u,
           v4,
           (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
           v6);
}
