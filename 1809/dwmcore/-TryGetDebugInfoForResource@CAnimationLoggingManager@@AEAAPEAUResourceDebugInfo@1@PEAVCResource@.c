/*
 * XREFs of ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800C359C
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800C3540 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x18018AB94 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x18018AD1C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x18018AD70 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x18018AFB4 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x18018B104 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     <none>
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::TryGetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  __int64 v3; // r8
  __int64 v5; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r10
  __int64 *j; // rax
  __int64 v13; // rcx
  struct CResource *v15; // [rsp+10h] [rbp+10h]

  v15 = a2;
  v3 = 0LL;
  if ( a2 )
  {
    v5 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
    {
      v7 = *((unsigned __int8 *)&v15 + i);
      v5 = 0x100000001B3LL * (v7 ^ v5);
    }
    v8 = v5 & *((_QWORD *)this + 17);
    v9 = *((_QWORD *)this + 14);
    v10 = (__int64 *)*((_QWORD *)this + 12);
    v11 = 2 * v8;
    for ( j = *(__int64 **)(v9 + 16 * v8); ; j = (__int64 *)*j )
    {
      v13 = *(__int64 **)(v9 + 8 * v11) == v10 ? (__int64)v10 : **(_QWORD **)(v9 + 8 * v11 + 8);
      if ( j == (__int64 *)v13 )
        break;
      if ( (struct CResource *)j[2] == a2 )
        goto LABEL_9;
    }
    j = v10;
LABEL_9:
    if ( j != v10 )
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(j + 3);
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v3;
}
