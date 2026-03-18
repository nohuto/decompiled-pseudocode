/*
 * XREFs of HUBHSM_WaitingForEnableInterruptsOnSx @ 0x1C0008230
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x1C000B6CC (HUBFDO_ReleaseWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_WaitingForEnableInterruptsOnSx(__int64 a1)
{
  HUBFDO_ReleaseWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
