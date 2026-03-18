/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006F104
 * Callers:
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180045BBC (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006F1CC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimatio.c)
 *     ??$_Insert@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@1@@Z @ 0x18006F69C (--$_Insert@AEAU-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$_List.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // r10
  __int64 v10; // rcx

  v7 = **(_QWORD **)(a1 + 8);
  v8 = *(__int64 **)(v7 + 8);
  v9 = std::_List_alloc<std::_List_base_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>::_Buynode0(
         a1,
         v7,
         v8);
  *(_QWORD *)(v9 + 16) = **a4;
  *(_DWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 7LL;
  *(_WORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 64) = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x38E38E38E38E38DLL )
    std::_Xlength_error((const char *)0x38E38E38E38E38DLL);
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Insert<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>(
    a1,
    a2,
    **(_QWORD **)(a1 + 8) + 16LL);
  return a2;
}
