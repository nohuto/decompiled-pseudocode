/*
 * XREFs of PopOpenPowerKey @ 0x140182C04
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x140726460 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140726B70 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x14072A2CC (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408A1A5C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x140182C28 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
