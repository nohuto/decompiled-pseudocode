/*
 * XREFs of CmListGetNextElement @ 0x1406948E0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AA548 (CmGetVisibleSubkeyCount.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D7310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D79A0 (CmpQueryKeyDataFromCache.c)
 *     CmpIsKeyStackDeleted @ 0x140644670 (CmpIsKeyStackDeleted.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140693690 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069377C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x140693858 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140693898 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpTransMgrRollback @ 0x140694214 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x140694788 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x140694840 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BD528 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSearchForTrans @ 0x1406FA908 (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x1406FCDFC (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140701D98 (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x1407EB030 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407F8FDC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407F93C0 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140804D3C (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
