/*
 * XREFs of PopOpenPowerKey @ 0x140178B10
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1406DD058 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x1406DD630 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1406E1B8C (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14074760C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407476D4 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140865D0C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x140178B34 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
