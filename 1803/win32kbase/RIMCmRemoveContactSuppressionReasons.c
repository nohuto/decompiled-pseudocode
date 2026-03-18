/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C0106DCC
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00E75F8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0100C08 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01027F8 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01028E0 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL IsContactSuppressed; // r14d
  __int64 v10; // rcx

  v6 = 0;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2, a2);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  *(_DWORD *)(a2 + 8) &= ~a3;
  if ( IsContactSuppressed && !RIMCmIsContactSuppressed(a2, v7) )
  {
    v6 = 1;
    ++*(_DWORD *)(a1 + 916);
  }
  v10 = *(unsigned int *)(a1 + 916);
  if ( *(_DWORD *)(a1 + 912) < (unsigned int)v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7);
  return v6;
}
