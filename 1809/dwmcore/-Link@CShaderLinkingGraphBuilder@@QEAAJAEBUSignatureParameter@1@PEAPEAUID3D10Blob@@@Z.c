/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800E333C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ToD3D11ParameterDesc @ 0x1800DCA40 (ToD3D11ParameterDesc.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF74C (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E36A0 (-_Init@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 *     ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800E4100 (-clear@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$al.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Link(
        CShaderLinkingGraphBuilder *this,
        const struct CShaderLinkingGraphBuilder::SignatureParameter *a2,
        struct ID3D10Blob **a3)
{
  _QWORD *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  const char *v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rcx
  const CHAR *v23; // rax
  __int64 v24[2]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v25[3]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+80h] [rbp-19h]
  _QWORD v27[13]; // [rsp+88h] [rbp-11h] BYREF
  struct ID3D10Blob *v28; // [rsp+100h] [rbp+67h] BYREF
  __int64 v29; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+118h] [rbp+7Fh] BYREF

  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = ToD3D11ParameterDesc(v27, (__int64)&unk_18023D640, 2);
  v6 = (__int64 *)((char *)this + 8);
  v7 = *((_QWORD *)this + 1);
  v25[0] = *(_OWORD *)v5;
  v25[1] = *((_OWORD *)v5 + 1);
  v25[2] = *((_OWORD *)v5 + 2);
  v26 = v5[6];
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
  v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, v25, 1LL, &v29);
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD3u);
    goto LABEL_18;
  }
  v24[0] = 1LL;
  v24[1] = (__int64)&unk_18023D640;
  v12 = CShaderLinkingGraphBuilder::FulfillInputs(this, v29, v24, v10);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD4u);
LABEL_18:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
  v29 = 0LL;
  v14 = *v6;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, &v29, 0LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDAu);
  }
  else
  {
    v17 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
    if ( *((_BYTE *)this + 84) )
    {
      if ( *((_BYTE *)this + 84) == 1 )
        v18 = "ps_4_0_level_9_3";
      else
        v18 = 0LL;
    }
    else
    {
      v18 = "ps_4_0_level_9_1";
    }
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(*(_QWORD *)v17 + 24LL))(
            v17,
            v29,
            "main",
            v18,
            0,
            &v28,
            &v30);
    v11 = v19;
    if ( v19 >= 0 )
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v28);
      *a3 = v28;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xE5u);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
LABEL_9:
  if ( byte_18030C5C4 )
  {
    v22 = *v6;
    v29 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 80LL))(v22, 0LL, &v29) >= 0 )
    {
      v23 = (const CHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
      OutputDebugStringA(v23);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear((char *)this + 24);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Init(
    (char *)this + 16,
    8LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v30);
  return v11;
}
