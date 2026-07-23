/*
 * XREFs of PopOpenPowerKey @ 0x140178C30
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1406DE2D8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x1406DE8B0 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1406E2E0C (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x140866F4C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x140178C54 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
