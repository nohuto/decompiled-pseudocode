/*
 * XREFs of HUBHSM_LoggingHubWasReset @ 0x1C00078F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C006E0D8 (HUBFDO_LogHubResetRecoveryWasInvoked.c)
 */

__int64 __fastcall HUBHSM_LoggingHubWasReset(__int64 a1)
{
  HUBFDO_LogHubResetRecoveryWasInvoked(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
