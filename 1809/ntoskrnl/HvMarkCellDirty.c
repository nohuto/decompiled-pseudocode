/*
 * XREFs of HvMarkCellDirty @ 0x1408021B4
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B3664 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406BDD20 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
