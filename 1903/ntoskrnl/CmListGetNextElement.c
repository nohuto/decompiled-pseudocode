/*
 * XREFs of CmListGetNextElement @ 0x140633584
 * Callers:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     CmpSearchForTrans @ 0x14063339C (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x1406334C0 (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleSubkeyCount @ 0x140638AA8 (CmGetVisibleSubkeyCount.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindSubKeyByNumberEx @ 0x140650460 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140656FB0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsCmRm @ 0x140699C94 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x14069A174 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x14069BCD0 (CmSnapshotRMTxArray.c)
 *     CmpTransMgrRollback @ 0x1406E2020 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E20D8 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E2138 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E2234 (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406E2894 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmUnRegisterCallback @ 0x140825B50 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1408324AC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1408328AC (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14083E4A4 (CmpLightWeightUpdateModificationActions.c)
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
