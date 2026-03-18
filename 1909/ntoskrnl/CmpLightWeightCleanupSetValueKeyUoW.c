/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E3EDC
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E3DB4 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083C868 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
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
