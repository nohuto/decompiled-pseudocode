/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14011D320
 * Callers:
 *     MiDeleteBatch @ 0x1400290C0 (MiDeleteBatch.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiDeleteClusterSection @ 0x1400B8CD0 (MiDeleteClusterSection.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400BBE50 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1400F9DC4 (MiTradeActivePage.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x14012858C (MiReplacePageOfProtoPool.c)
 *     MiSwapStackPageNoDpc @ 0x140135188 (MiSwapStackPageNoDpc.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135B68 (MiUnlockNestedProtoPoolPage.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiSwitchKstackPages @ 0x1402C44FC (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1402CCD08 (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x1402EC000 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409FC9A4 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
