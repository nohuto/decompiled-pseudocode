/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C01027F8
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, _DWORD *a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // r8

  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
      return RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
    v7 = 2;
    if ( (a2[601] & 6) == 2 )
      v7 = 32;
    else
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x28u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        *a2);
    v8 = v7;
    goto LABEL_12;
  }
  if ( a3 || a4 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x29u,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
      *a2);
    v8 = 2LL;
LABEL_12:
    result = RIMCmAddContactSuppressionReasons(a1, a2, v8);
    a2[601] |= 0x8000u;
  }
  return result;
}
