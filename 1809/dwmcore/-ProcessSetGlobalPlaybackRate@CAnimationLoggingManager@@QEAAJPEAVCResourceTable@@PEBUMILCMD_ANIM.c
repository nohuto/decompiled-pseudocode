/*
 * XREFs of ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x180073F2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x180058950 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCChannelContext@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCChannelContext@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800690B4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCChannelContext@@@2@V-$tuple@$$V@2@@-$.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetGlobalPlaybackRate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE *a3)
{
  int v3; // xmm6_4
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 *v6; // rdx
  __int64 *v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+8h] BYREF
  struct CResourceTable *v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v10 = (struct CResourceTable *)*((_QWORD *)this + 6);
  v3 = *((_DWORD *)a3 + 2);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
    (_QWORD *)(v4 + 432),
    &v9,
    (unsigned __int8 *)&v10);
  v6 = v9;
  if ( v9 == *(__int64 **)(v4 + 440) )
  {
    v9 = (__int64 *)&v10;
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CChannelContext * const &>,std::tuple<>>(
      v4 + 432,
      (__int64)&v8,
      v5,
      &v9);
    v6 = v8;
  }
  *((_DWORD *)v6 + 6) = v3;
  return 0LL;
}
