/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800DCB08
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800DA3D8 (InitializeShaderLinkingInput.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Reallocate_exactly@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800DA654 (-_Reallocate_exactly@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@.c)
 *     ToD3D11ParameterDesc @ 0x1800DCA40 (ToD3D11ParameterDesc.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DCAB0 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800DCF24 (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18022D000 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(unsigned __int64 ppLinker, char a2, unsigned __int64 *a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // xmm3_8
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  HRESULT v17; // eax
  __int64 v18; // rcx
  void *v19; // rsi
  unsigned int v20; // ebx
  HRESULT v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // r12d
  unsigned int v27; // edi
  __int64 v29; // [rsp+30h] [rbp-89h] BYREF
  char v30; // [rsp+38h] [rbp-81h]
  int v31; // [rsp+39h] [rbp-80h]
  __int16 v32; // [rsp+3Dh] [rbp-7Ch]
  char v33; // [rsp+3Fh] [rbp-7Ah]
  __int128 v34; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+50h] [rbp-69h]
  __int16 v36; // [rsp+58h] [rbp-61h] BYREF
  __int64 v37; // [rsp+60h] [rbp-59h] BYREF
  char v38; // [rsp+68h] [rbp-51h]
  int v39; // [rsp+69h] [rbp-50h]
  char v40; // [rsp+6Dh] [rbp-4Ch]
  _OWORD v41[3]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-19h]
  _QWORD v43[13]; // [rsp+A8h] [rbp-11h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v45; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v46; // [rsp+128h] [rbp+6Fh]

  v3 = 0LL;
  *(_BYTE *)(ppLinker + 84) = a2;
  v45 = 0LL;
  v4 = *a3;
  v6 = *(_DWORD *)a3;
  v7 = (__int64 *)ppLinker;
  v35 = 0LL;
  v46 = v6;
  v34 = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x492492492492492LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly((__int64)&v34, v4);
    v4 = *a3;
    v3 = v35;
  }
  v8 = *((_QWORD *)&v34 + 1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = v4;
  while ( v9 != v4 )
  {
    if ( v9 == v11 )
      goto LABEL_23;
    v12 = ToD3D11ParameterDesc(v43, v10 + a3[1], 1);
    v13 = v12[6];
    v42 = v13;
    v14 = *(_OWORD *)v12;
    v15 = *((_OWORD *)v12 + 1);
    v16 = *((_OWORD *)v12 + 2);
    v41[0] = *(_OWORD *)v12;
    v41[1] = v15;
    v41[2] = v16;
    if ( v3 == v8 )
    {
      std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v34, v8, v41);
      v3 = v35;
      v8 = *((_QWORD *)&v34 + 1);
    }
    else
    {
      *(_OWORD *)v8 = v14;
      *(_OWORD *)(v8 + 16) = v15;
      *(_OWORD *)(v8 + 32) = v16;
      *(_QWORD *)(v8 + 48) = v13;
      v8 += 56LL;
      *((_QWORD *)&v34 + 1) = v8;
    }
    if ( v10 < 0 )
      goto LABEL_23;
    v11 = *a3;
    if ( v9 == *a3 )
      goto LABEL_23;
    ++v9;
    v10 += 32LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7);
  v17 = D3DCreateLinker((struct ID3D11Linker **)v7);
  v19 = (void *)v34;
  v20 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x44u);
  }
  else
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7 + 1);
    v21 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)v7 + 1);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x45u);
    }
    else
    {
      v23 = v7[1];
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v45);
      v24 = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64 *))(*(_QWORD *)v23 + 32LL))(
              v23,
              v19,
              (v8 - (__int64)v19) / 56,
              &v45);
      v20 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x49u);
      }
      else
      {
        v26 = v46;
        v27 = 0;
        if ( v46 )
        {
          while ( 1 )
          {
            v29 = 0LL;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            v33 = 0;
            Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v29, &v45);
            ppLinker = v27;
            v30 = v27;
            if ( v27 >= (__int64)*a3 )
              break;
            v36 = *(_WORD *)(32LL * v27 + a3[1]);
            v37 = v29;
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
            v39 = v31;
            v40 = v32;
            v38 = v27;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              v7 + 2,
              &v34,
              &v36);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v37);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
            if ( ++v27 >= v26 )
              goto LABEL_20;
          }
LABEL_23:
          gsl::details::terminate((gsl::details *)ppLinker);
          JUMPOUT(0x1800DCDAFLL);
        }
      }
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v45);
  if ( v19 )
    std::_Deallocate<16,0>(v19, 56 * ((v3 - (__int64)v19) / 56));
  return v20;
}
