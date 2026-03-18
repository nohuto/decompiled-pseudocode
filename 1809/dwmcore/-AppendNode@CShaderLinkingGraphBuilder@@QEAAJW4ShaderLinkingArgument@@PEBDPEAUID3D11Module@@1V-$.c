/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418
 * Callers:
 *     LinkLightShader @ 0x1800213E8 (LinkLightShader.c)
 *     AppendLights @ 0x1800215DC (AppendLights.c)
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     AppendColorConversion @ 0x1800E2D7C (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800E2DD8 (PrepareSamplerTexcoord.c)
 *     ApplyTexcoordExtendMode @ 0x1800E2EEC (ApplyTexcoordExtendMode.c)
 *     ApplyTexcoordDisplacement @ 0x18022AEDC (ApplyTexcoordDisplacement.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF74C (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E1DFC (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rbx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int16 v19; // [rsp+68h] [rbp+28h] BYREF

  v19 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(
          v6,
          a3,
          a4,
          a5,
          &v18);
  if ( v11 == -2147467259 )
    v11 = -2005270526;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0x6Du);
  }
  else
  {
    v17 = *a6;
    v12 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v18, &v17);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Fu);
    }
    else
    {
      std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
        a1 + 16,
        &v17,
        &v19);
      v14 = v17;
      v15 = v18;
      v18 = 0LL;
      *(_QWORD *)&v17 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)(v14 + 24) = v15;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
      *(_WORD *)(v14 + 32) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  return (unsigned int)v11;
}
