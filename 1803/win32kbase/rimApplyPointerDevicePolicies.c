/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C0100724
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0100C08 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01027F8 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01028E0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C01029DC (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C0102C84 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0140A4C (ApiSetGetPowerTransitionsState.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // esi
  int v13; // ecx
  unsigned int v15; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v16[16]; // [rsp+38h] [rbp-70h] BYREF

  v15 = 0;
  if ( a3 && (*(_DWORD *)(a2 + 2404) & 0x1000000) == 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x23u,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
      *(_DWORD *)a2);
    RIMCmAddContactSuppressionReasons(a1, a2, 4LL);
    *(_DWORD *)(a2 + 2404) |= 0x8000u;
  }
  ApiSetGetPowerTransitionsState(v16);
  if ( !v16[0] && (*(_DWORD *)(a2 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 128LL);
    *(_DWORD *)(a2 + 2404) |= 0x8000u;
  }
  if ( gbEnableLidClosedInputSuppression )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1624LL) )
    {
      ApiSetGetPowerTransitionsState(v16);
      if ( !v16[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
        *(_DWORD *)(a2 + 2404) |= 0x8000u;
      }
    }
  }
  rimNullXYPolicyUpdateStateAndApply(a1, a2, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, a2, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(a1, a2, a3);
  if ( a4 || a5 || (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    v12 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, a2, a7, a8, (__int64)&v15);
    v12 = v15;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(a2) && (unsigned int)RIMCmIsContactDeliveringPointerData(a2) )
    *(_DWORD *)(a2 + 2404) &= 0xFFFFFFE9;
  v13 = *(_DWORD *)(a2 + 2620);
  if ( (v13 & 4) != 0 && (*(_DWORD *)(a2 + 2404) & 4) == 0 || (v13 & 2) != 0 && (*(_DWORD *)(a2 + 2404) & 2) == 0 )
  {
    v12 = 1;
    *(_QWORD *)(a2 + 2440) = *(_QWORD *)(a2 + 2656);
    *(_QWORD *)(a2 + 2448) = *(_QWORD *)(a2 + 2664);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v12);
}
