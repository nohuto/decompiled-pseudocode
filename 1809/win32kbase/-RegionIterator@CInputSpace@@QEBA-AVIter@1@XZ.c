/*
 * XREFs of ?RegionIterator@CInputSpace@@QEBA?AVIter@1@XZ @ 0x1C00AD880
 * Callers:
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C003C024 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C008F948 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 */

CEResourceLockShared *__fastcall CInputSpace::RegionIterator(__int64 a1, CEResourceLockShared *a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(a1 + 1200);
  CEResourceLockShared::CEResourceLockShared(a2, a2);
  *((_QWORD *)a2 + 1) = v2;
  *((_QWORD *)a2 + 2) = *v2;
  return a2;
}
