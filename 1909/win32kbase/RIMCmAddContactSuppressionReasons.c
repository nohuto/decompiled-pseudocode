/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C0159590
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C013F2DC (RIMSuppressAllActiveContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0153610 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01538CC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0153B4C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C0155C8C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0155D24 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C0155E24 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01590A8 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C01599E4 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  BOOL v9; // edi
  unsigned int v10; // r14d
  int v11; // r15d
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v9 = 0;
  v10 = a2[2];
  v11 = IsContactSuppressed;
  v12 = v10;
  if ( (a2[8] & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v8);
    v12 = a2[2];
  }
  a2[2] = a3 | v12;
  if ( !v11 && (unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    v14 = *(_DWORD *)(a1 + 956);
    if ( !v14 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v8);
      v14 = *(_DWORD *)(a1 + 956);
    }
    v9 = 1;
    *(_DWORD *)(a1 + 956) = v14 - 1;
  }
  if ( (a3 & v10) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, (unsigned int)a2[2], v9);
  v15 = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v7, v8);
  return v9;
}
