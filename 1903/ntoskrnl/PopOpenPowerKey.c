/*
 * XREFs of PopOpenPowerKey @ 0x140182514
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1407245C0 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140724CD0 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140728F5C (PopReadHiberbootPolicy.c)
 *     PopResetCurrentPolicies @ 0x140749ADC (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PoGetLightestSystemStateForEject @ 0x1408A221C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x140182538 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
