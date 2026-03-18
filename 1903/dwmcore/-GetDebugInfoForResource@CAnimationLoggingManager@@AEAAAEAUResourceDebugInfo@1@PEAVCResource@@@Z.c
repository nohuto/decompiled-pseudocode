/*
 * XREFs of ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180045BBC
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180045874 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801C0D5C (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANI.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180045C4C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006F104 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1800B8638 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::GetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rdx
  __int64 v4; // r8
  struct CResource **v5; // rdx
  struct CResource **v7; // [rsp+30h] [rbp-18h] BYREF
  struct CResource *v8; // [rsp+58h] [rbp+10h] BYREF
  struct CResource **v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = a2;
  DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a2);
  if ( !DebugInfoForResource )
  {
    std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::lower_bound(
      (char *)this + 88,
      &v9,
      &v8);
    v5 = v9;
    if ( v9 == *((struct CResource ***)this + 12) )
    {
      v9 = &v8;
      std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource * const &>,std::tuple<>>(
        (char *)this + 88,
        &v7,
        v4,
        &v9);
      v5 = v7;
    }
    ++*((_DWORD *)this + 46);
    DebugInfoForResource = (struct CAnimationLoggingManager::ResourceDebugInfo *)(v5 + 3);
    *(_DWORD *)DebugInfoForResource = *((_DWORD *)this + 46);
    *((_DWORD *)v8 + 8) |= 0x10u;
  }
  return DebugInfoForResource;
}
