/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x140120EE4
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x140080ED0 (MiLockLeafPage.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiDeleteClusterSection @ 0x140081F00 (MiDeleteClusterSection.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14011AACC (MiRewriteTrimPteAsDemandZero.c)
 *     MiReplacePageTablePage @ 0x14011BE6C (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x140124D7C (MiReplacePageOfProtoPool.c)
 *     MiSwapStackPageNoDpc @ 0x14012D654 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x14012DF04 (MiTradeActivePage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013489C (MiUnlockNestedProtoPoolPage.c)
 *     MiConvertStandbyToProto @ 0x14013EA30 (MiConvertStandbyToProto.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiSwitchKstackPages @ 0x14015EB74 (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1402B6C24 (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402C98D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x1402CFE5C (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x1409B86AC (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409C04C8 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v5, a2, a3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
