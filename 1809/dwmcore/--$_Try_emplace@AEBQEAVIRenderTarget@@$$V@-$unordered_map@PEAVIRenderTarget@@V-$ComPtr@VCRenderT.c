/*
 * XREFs of ??$_Try_emplace@AEBQEAVIRenderTarget@@$$V@?$unordered_map@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@6@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVIRenderTarget@@@Z @ 0x1800172C0
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIRenderTarget@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIRenderTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180017368 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIRenderTarget@@@2@V-$tuple@$$V@2@@-$_H.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180017500 (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

__int64 __fastcall std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax
  const unsigned __int8 *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = std::_Hash_bytes(a3, 8uLL);
  v7 = *(_QWORD *)(v6 + 48) & v5;
  do
  {
    v8 = (_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                     v6,
                     &v13,
                     v7);
    if ( v10 == *v8 )
    {
      v10 = *(_QWORD *)(v6 + 8);
      v11 = v10;
      goto LABEL_4;
    }
  }
  while ( *(_QWORD *)(v10 + 16) != *(_QWORD *)a3 );
  v11 = *(_QWORD *)(v6 + 8);
LABEL_4:
  if ( v10 == v11 )
  {
    v13 = a3;
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<IRenderTarget * const &>,std::tuple<>>(
      v6,
      a2,
      v9,
      &v13);
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
