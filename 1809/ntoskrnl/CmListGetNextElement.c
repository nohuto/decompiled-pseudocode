/*
 * XREFs of CmListGetNextElement @ 0x1406948C0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AA548 (CmGetVisibleSubkeyCount.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D30B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D7310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D79A0 (CmpQueryKeyDataFromCache.c)
 *     CmpIsKeyStackDeleted @ 0x140644650 (CmpIsKeyStackDeleted.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140693670 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069375C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x140693838 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140693878 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpTransMgrRollback @ 0x1406941F4 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x140694768 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x140694820 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BD508 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSearchForTrans @ 0x1406FA8E8 (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x1406FCDDC (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140701D78 (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407F8FBC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407F93A0 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140804D1C (CmpLightWeightUpdateModificationActions.c)
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
