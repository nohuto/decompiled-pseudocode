/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C0128D14
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0094328 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMIsInputSuppressed @ 0x1C0121410 (RIMIsInputSuppressed.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0128FE8 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0129224 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C012B09C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C012B17C (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C012B278 (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C012B520 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
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
  if ( a3 && (*(_DWORD *)(a2 + 2420) & 0x1000000) == 0 )
  {
    WPP_RECORDER_SF_d(
      gRimLog,
      3u,
      0x16u,
      0x28u,
      (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids,
      *(_DWORD *)a2);
    RIMCmAddContactSuppressionReasons(a1, a2, 4LL);
    *(_DWORD *)(a2 + 2420) |= 0x8000u;
  }
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 1024LL);
    *(_DWORD *)(a2 + 2420) |= 0x8000u;
  }
  ApiSetGetPowerTransitionsState(v16);
  if ( !v16[0] && (*(_DWORD *)(a2 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 128LL);
    *(_DWORD *)(a2 + 2420) |= 0x8000u;
  }
  if ( gbEnableLidClosedInputSuppression )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1976LL) )
    {
      ApiSetGetPowerTransitionsState(v16);
      if ( !v16[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
        *(_DWORD *)(a2 + 2420) |= 0x8000u;
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
    *(_DWORD *)(a2 + 2420) &= 0xFFFFFFE9;
  v13 = *(_DWORD *)(a2 + 2636);
  if ( (v13 & 4) != 0 && (*(_DWORD *)(a2 + 2420) & 4) == 0 || (v13 & 2) != 0 && (*(_DWORD *)(a2 + 2420) & 2) == 0 )
  {
    v12 = 1;
    *(_QWORD *)(a2 + 2456) = *(_QWORD *)(a2 + 2672);
    *(_QWORD *)(a2 + 2464) = *(_QWORD *)(a2 + 2680);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v12);
}
