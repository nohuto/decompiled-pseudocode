/*
 * XREFs of PopOpenPowerKey @ 0x140178B30
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1406DD038 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x1406DD610 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1406E1B6C (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1407475EC (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407476B4 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140865CEC (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x140178B54 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
