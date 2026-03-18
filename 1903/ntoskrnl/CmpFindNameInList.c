/*
 * XREFs of CmpFindNameInList @ 0x1406304D4
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1406304A4 (CmpFindValueByName.c)
 *     CmpCommitSetValueKeyUoW @ 0x140632124 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMarkCurrentValueDirty @ 0x140757E30 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14075C434 (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x14076516C (CmpFindControlSet.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082B7F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x140836F20 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083DCC8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(
        __int64 a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
