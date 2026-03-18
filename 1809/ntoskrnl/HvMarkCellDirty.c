/*
 * XREFs of HvMarkCellDirty @ 0x140800FD4
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B3504 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x14026D05C (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x1405DA210 (CmpCheckKey.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406BCAA0 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A70 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405FAC04 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
