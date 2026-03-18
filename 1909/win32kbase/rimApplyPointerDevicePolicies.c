/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C0153610
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00A540C (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RIMIsInputSuppressed @ 0x1C014B06C (RIMIsInputSuppressed.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01538CC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0153B4C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C0155C8C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0155D24 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C0155E24 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C0155F20 (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C0156230 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0159590 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01599E4 (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  _DWORD *v10; // rbx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  unsigned int v16; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v17[16]; // [rsp+38h] [rbp-70h] BYREF

  v16 = 0;
  v10 = a2;
  if ( a3 && (a2[605] & 0x1000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        40,
        (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
        v12);
    }
    RIMCmAddContactSuppressionReasons(a1, v10, 4LL);
    v10[605] |= 0x8000u;
  }
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (v10[2] & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, v10, 1024LL);
    v10[605] |= 0x8000u;
  }
  memset(v17, 0, 0x3CuLL);
  ApiSetGetPowerTransitionsState(v17);
  if ( !v17[0] && (v10[2] & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, v10, 128LL);
    v10[605] |= 0x8000u;
  }
  rimLidClosedPolicyUpdateStateAndApply(a1, v10);
  rimNullXYPolicyUpdateStateAndApply(a1, v10, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, v10, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, v10);
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(a1, v10, a3);
  if ( a4 || a5 || (v10[2] & 0x40) != 0 )
  {
    v13 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, (_DWORD)v10, a7, a8, (__int64)&v16);
    v13 = v16;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(v10) && (unsigned int)RIMCmIsContactDeliveringPointerData(v10) )
    v10[605] &= 0xFFFFFFE9;
  v14 = v10[665];
  if ( (v14 & 4) != 0 && (v10[605] & 4) == 0 || (v14 & 2) != 0 && (v10[605] & 2) == 0 )
  {
    v13 = 1;
    *((_QWORD *)v10 + 307) = *((_QWORD *)v10 + 337);
    *((_QWORD *)v10 + 308) = *((_QWORD *)v10 + 338);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, v10, a3, v13);
}
