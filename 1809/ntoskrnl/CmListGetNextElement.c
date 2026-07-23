/*
 * XREFs of CmListGetNextElement @ 0x140695A80
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AB548 (CmGetVisibleSubkeyCount.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D89A0 (CmpQueryKeyDataFromCache.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140694830 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069491C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406949F8 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140694A38 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpTransMgrRollback @ 0x1406953B4 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x140695928 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406959E0 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BE7A8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSearchForTrans @ 0x1406FBB88 (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140703018 (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1407FA1BC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140805F1C (CmpLightWeightUpdateModificationActions.c)
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
