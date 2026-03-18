/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1C012B09C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C012EC70 (RIMCmRemoveContactSuppressionReasons.c)
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
    if ( (a2[605] & 6) == 2 )
      v7 = 32;
    else
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x2Du, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, *a2);
    v8 = v7;
    goto LABEL_12;
  }
  if ( a3 || a4 )
  {
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x2Eu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, *a2);
    v8 = 2LL;
LABEL_12:
    result = RIMCmAddContactSuppressionReasons(a1, a2, v8);
    a2[605] |= 0x8000u;
  }
  return result;
}
