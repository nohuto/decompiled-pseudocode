/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x1C001F318
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0065E58 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494 (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
