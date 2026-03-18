/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIRenderTarget@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIRenderTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180017368
 * Callers:
 *     ??$_Try_emplace@AEBQEAVIRenderTarget@@$$V@?$unordered_map@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@6@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVIRenderTarget@@@Z @ 0x1800172C0 (--$_Try_emplace@AEBQEAVIRenderTarget@@$$V@-$unordered_map@PEAVIRenderTarget@@V-$ComPtr@VCRenderT.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180017418 (--$_Insert@AEAU-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@2@PEAU32@0@Z @ 0x180069160 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // r9
  __int64 v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = **(_QWORD **)(a1 + 8);
  v8 = *(__int64 **)(v7 + 8);
  v9 = std::_List_alloc<std::_List_base_types<std::pair<CChannelContext * const,float>>>::_Buynode0(a1, v7, v8);
  *(_QWORD *)(v9 + 16) = **a4;
  *(_QWORD *)(v9 + 24) = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_Insert<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>(
    a1,
    a2,
    **(_QWORD **)(a1 + 8) + 16LL);
  return a2;
}
