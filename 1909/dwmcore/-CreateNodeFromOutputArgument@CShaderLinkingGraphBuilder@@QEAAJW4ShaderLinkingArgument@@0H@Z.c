/*
 * XREFs of ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18000C544
 * Callers:
 *     AppendLights @ 0x18000C33C (AppendLights.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4ShaderLinkingArgument@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4ShaderLinkingArgument@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180032698 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4ShaderLinkingArgument@@@2@V-$tuple@$$V@2.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800327BC (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18003FEC8 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4)
{
  __int64 v4; // rsi
  unsigned int v7; // ecx
  __int16 *v8; // rbx
  __int64 v9; // r8
  __int16 *v10; // rax
  _WORD *v11; // rdi
  unsigned int v12; // ebx
  __int16 *v14; // [rsp+30h] [rbp-10h] BYREF
  __int16 *v15; // [rsp+70h] [rbp+30h] BYREF
  __int16 v16; // [rsp+78h] [rbp+38h] BYREF
  __int16 v17; // [rsp+80h] [rbp+40h] BYREF

  v17 = a3;
  v16 = a2;
  v4 = a1 + 16;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    a1 + 16,
    &v15,
    &v17);
  v8 = v15;
  if ( v15 == *(__int16 **)(a1 + 24) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x86u, 0LL);
  }
  else
  {
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
      v4,
      &v15,
      &v16);
    v10 = v15;
    if ( v15 == *(__int16 **)(v4 + 8) )
    {
      v15 = &v16;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<enum ShaderLinkingArgument const &>,std::tuple<>>(
        v4,
        &v14,
        v9,
        &v15);
      v10 = v14;
    }
    v11 = v10 + 12;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v10 + 12, v8 + 12);
    *((_BYTE *)v11 + 8) = a4;
    v12 = 0;
    *((_BYTE *)v11 + 9) = 0;
  }
  return v12;
}
