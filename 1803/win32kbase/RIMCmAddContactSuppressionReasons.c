/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C01068F0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0100C08 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01027F8 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01028E0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int IsContactSuppressed; // r14d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v6 = 0;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  *(_DWORD *)(a2 + 8) |= a3;
  if ( !IsContactSuppressed && (unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    v11 = *(_DWORD *)(a1 + 916);
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7);
      v11 = *(_DWORD *)(a1 + 916);
    }
    v6 = 1;
    *(_DWORD *)(a1 + 916) = v11 - 1;
  }
  v12 = *(unsigned int *)(a1 + 916);
  if ( *(_DWORD *)(a1 + 912) < (unsigned int)v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v7);
  return v6;
}
