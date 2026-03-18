/*
 * XREFs of CmpFindNameInList @ 0x1405D062C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140695104 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMarkCurrentProfileDirty @ 0x140730DA4 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407367D4 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x14073D2DC (CmpFindControlSet.c)
 *     CmpFindValueByName @ 0x14073D878 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F1564 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x1407FDB00 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCE4 (CmpPreserveSystemHiveData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804430 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1405D0670 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
