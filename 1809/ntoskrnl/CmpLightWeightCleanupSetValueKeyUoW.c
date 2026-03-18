/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x1406955F0
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14069490C (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406954D8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140803984 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
