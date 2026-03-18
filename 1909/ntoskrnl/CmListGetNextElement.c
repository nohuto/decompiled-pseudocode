/*
 * XREFs of CmListGetNextElement @ 0x140636B74
 * Callers:
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     CmpSearchForTrans @ 0x14063698C (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleSubkeyCount @ 0x14063BB38 (CmGetVisibleSubkeyCount.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140669FD0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmSnapshotRMTxArray @ 0x1406BABA4 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406BB194 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x1406BBEAC (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x1406E36A0 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E37B8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E38B4 (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406E3F14 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmUnRegisterCallback @ 0x140825250 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140831AFC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140831EFC (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14083DB04 (CmpLightWeightUpdateModificationActions.c)
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
