/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180032580
 * Callers:
 *     LinkLightShader @ 0x18000C0DC (LinkLightShader.c)
 *     AppendLights @ 0x18000C33C (AppendLights.c)
 *     AppendShaderBody @ 0x1800315F4 (AppendShaderBody.c)
 *     PerformSample @ 0x1800317BC (PerformSample.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     AppendColorConversion @ 0x180032814 (AppendColorConversion.c)
 *     ApplyTexcoordTransformations @ 0x180032870 (ApplyTexcoordTransformations.c)
 *     ApplyTexcoordExtendMode @ 0x180032914 (ApplyTexcoordExtendMode.c)
 *     PopulateSamplerArguments @ 0x1800329FC (PopulateSamplerArguments.c)
 *     DecodeInputTexcoord @ 0x180032B98 (DecodeInputTexcoord.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801AC910 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4ShaderLinkingArgument@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4ShaderLinkingArgument@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180032698 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4ShaderLinkingArgument@@@2@V-$tuple@$$V@2.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18003FEC8 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180042E2C (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  unsigned int v11; // ecx
  int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int16 v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v22 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v22);
  v12 = v10(v6, a3, a4, a5, &v22);
  if ( v12 == -2147467259 )
    v12 = -2005270526;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x6Du, 0LL);
  }
  else
  {
    v20 = *a6;
    v13 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v22, &v20);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6Fu, 0LL);
    }
    else
    {
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        a1 + 16,
        &v20,
        &v23);
      v16 = v20;
      if ( (_QWORD)v20 == *(_QWORD *)(a1 + 24) )
      {
        *(_QWORD *)&v20 = &v23;
        std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<enum ShaderLinkingArgument const &>,std::tuple<>>(
          a1 + 16,
          &v21,
          v15,
          &v20);
        v16 = v21;
      }
      v17 = v22;
      v22 = 0LL;
      v18 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)(v16 + 24) = v17;
      *(_QWORD *)&v20 = v18;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
      *(_WORD *)(v16 + 32) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v22);
  return (unsigned int)v12;
}
