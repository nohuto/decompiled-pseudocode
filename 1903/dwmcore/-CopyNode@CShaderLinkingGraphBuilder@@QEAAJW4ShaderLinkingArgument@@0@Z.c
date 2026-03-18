/*
 * XREFs of ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180033344
 * Callers:
 *     PerformSample @ 0x18003343C (PerformSample.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801AE1D0 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180033ED8 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4ShaderLinkingArgument@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4ShaderLinkingArgument@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800342E4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4ShaderLinkingArgument@@@2@V-$tuple@$$V@2.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18006F854 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ecx
  __int16 *v6; // rbx
  __int64 v7; // r8
  __int16 *v8; // rax
  _WORD *v9; // rdi
  _WORD *v10; // rbx
  _BYTE *v11; // rcx
  signed __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int16 *v16; // [rsp+30h] [rbp-10h] BYREF
  __int16 *v17; // [rsp+60h] [rbp+20h] BYREF
  __int16 v18; // [rsp+68h] [rbp+28h] BYREF
  __int16 v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = a3;
  v18 = a2;
  v3 = a1 + 16;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    a1 + 16,
    &v17,
    &v19);
  v6 = v17;
  if ( v17 == *(__int16 **)(a1 + 24) )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0xB5u, 0LL);
  }
  else
  {
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
      v3,
      &v17,
      &v18);
    v8 = v17;
    if ( v17 == *(__int16 **)(v3 + 8) )
    {
      v17 = &v18;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<enum ShaderLinkingArgument const &>,std::tuple<>>(
        v3,
        &v16,
        v7,
        &v17);
      v8 = v16;
    }
    v9 = v8 + 12;
    v10 = v6 + 12;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v8 + 12, v10);
    v11 = (char *)v9 + 9;
    *((_BYTE *)v9 + 8) = *((_BYTE *)v10 + 8);
    v12 = (char *)v10 - (char *)v9;
    v13 = 5LL;
    do
    {
      *v11 = v11[v12];
      ++v11;
      --v13;
    }
    while ( v13 );
    return 0;
  }
  return v14;
}
