/*
 * XREFs of ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18004CDEC
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18004CD5C (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801BE2B8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801BE40C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801BE460 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1801BE6A8 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801BE7F8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1800BB144 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::TryGetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  __int64 v2; // rbx
  struct CResource *v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v2 = 0LL;
  if ( a2 )
  {
    std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::lower_bound(
      (char *)this + 88,
      &v6,
      &v5);
    if ( v6 != *((_QWORD *)this + 12) )
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(v6 + 24);
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v2;
}
