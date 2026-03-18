/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C001BDD8
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C005E33C (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C005E888 (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
