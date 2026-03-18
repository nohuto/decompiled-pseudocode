/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083C4BC
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14083C50C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083C98C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14083CD74 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140837718 (CmpFreeIndexByCell.c)
 */

void __fastcall CmpLightWeightCleanupModifyKeyDataUoW(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*a2)-- == 1 )
  {
    v5 = a2[3];
    if ( (_DWORD)v5 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v5);
    v6 = a2[4];
    if ( (_DWORD)v6 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v6);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
