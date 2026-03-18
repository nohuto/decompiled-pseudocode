/*
 * XREFs of ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180029F40
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18007E2D4 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18007E6D8 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180085BF0 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x1800A3A44 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800BDB78 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800C0D60 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800D7A48 (-Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHA.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E6568 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801C1484 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801C1558 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?Add@?$DynArray@UConditionalBasicBlock@@$00@@QEAAJAEBUConditionalBasicBlock@@@Z @ 0x1801D5648 (-Add@-$DynArray@UConditionalBasicBlock@@$00@@QEAAJAEBUConditionalBasicBlock@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180029FA4 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 DynArrayImpl<1>::AddMultipleAndSet(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  int v5; // esi
  void *Src; // [rsp+58h] [rbp+20h] BYREF
  va_list Srca; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v5 = DynArrayImpl<1>::Grow(a1, a2, 1, 0, (__int64)Srca);
  if ( v5 >= 0 )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + a2 * *(_DWORD *)(a1 + 24)), Src, a2);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v5;
}
