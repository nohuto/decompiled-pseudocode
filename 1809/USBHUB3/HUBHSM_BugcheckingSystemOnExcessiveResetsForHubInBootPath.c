/*
 * XREFs of HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath @ 0x1C00073B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_BugcheckSystemOnBootHubFailure @ 0x1C000C55C (HUBFDO_BugcheckSystemOnBootHubFailure.c)
 */

void __fastcall __noreturn HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath(__int64 a1)
{
  HUBFDO_BugcheckSystemOnBootHubFailure(*(_QWORD *)(a1 + 960));
}
