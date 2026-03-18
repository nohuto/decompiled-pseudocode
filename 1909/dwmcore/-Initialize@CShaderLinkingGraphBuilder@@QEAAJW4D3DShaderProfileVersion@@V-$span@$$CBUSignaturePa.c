/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800321CC
 * Callers:
 *     InitializeShaderLinkingInput @ 0x180030C24 (InitializeShaderLinkingInput.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801AC910 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_front@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800324D8 (--$emplace_front@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$lis.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800327BC (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Reallocate_exactly@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAX_K@Z @ 0x180032F78 (-_Reallocate_exactly@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@1@@Z @ 0x180040070 (--$_Insert@AEAU-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$_L.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x1801B6C68 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(struct ID3D11Linker **ppLinker, char a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 i; // rbx
  int v9; // ecx
  __int64 v10; // xmm0_8
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  HRESULT v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r12
  unsigned int v16; // edi
  struct ID3D11Linker **v17; // rbx
  HRESULT v18; // eax
  unsigned int v19; // ecx
  struct ID3D11Linker *v20; // rdi
  HRESULT (__stdcall *UseLibrary)(ID3D11Linker *, struct ID3D11ModuleInstance *); // rbx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // esi
  struct ID3D11Linker **v25; // rbx
  __int64 v26; // r15
  struct ID3D11Linker *v27; // r9
  __int64 v29; // [rsp+30h] [rbp-A9h] BYREF
  char v30; // [rsp+38h] [rbp-A1h]
  int v31; // [rsp+39h] [rbp-A0h]
  __int16 v32; // [rsp+3Dh] [rbp-9Ch]
  char v33; // [rsp+3Fh] [rbp-9Ah]
  __int64 v34; // [rsp+40h] [rbp-99h] BYREF
  __int128 v35; // [rsp+48h] [rbp-91h] BYREF
  __int64 v36; // [rsp+58h] [rbp-81h]
  struct ID3D11Linker **v37; // [rsp+60h] [rbp-79h]
  __int128 v38; // [rsp+68h] [rbp-71h]
  __int128 v39; // [rsp+78h] [rbp-61h]
  _BYTE v40[24]; // [rsp+88h] [rbp-51h]
  _OWORD v41[3]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-9h]
  __int16 v43; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v44; // [rsp+E0h] [rbp+7h] BYREF
  char v45; // [rsp+E8h] [rbp+Fh]
  int v46; // [rsp+E9h] [rbp+10h]
  char v47; // [rsp+EDh] [rbp+14h]

  v3 = 0LL;
  *((_BYTE *)ppLinker + 84) = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( *a3 )
  {
    if ( *a3 > 0x492492492492492uLL )
      std::_Xlength_error((const char *)ppLinker);
    std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly(&v35, *a3);
    v3 = v36;
  }
  v6 = a3[1];
  v7 = *((_QWORD *)&v35 + 1);
  for ( i = v6 + 32LL * *a3; v6 != i; v6 += 32LL )
  {
    v9 = *(_DWORD *)(v6 + 28);
    v38 = *(_OWORD *)(v6 + 8);
    LODWORD(v39) = *(_DWORD *)(v6 + 24);
    DWORD2(v39) = 1;
    *(_OWORD *)&v40[8] = 0LL;
    *(_QWORD *)v40 = 0x100000000LL;
    v10 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v40[8], *(__m128d *)&v40[8]);
    DWORD1(v39) = v9 != 1;
    HIDWORD(v39) = v9;
    v42 = v10;
    v11 = v39;
    v12 = *(_OWORD *)v40;
    v41[1] = v39;
    v41[0] = v38;
    v41[2] = *(_OWORD *)v40;
    if ( v3 == v7 )
    {
      std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v35, v7, v41);
      v3 = v36;
      v7 = *((_QWORD *)&v35 + 1);
    }
    else
    {
      *(_OWORD *)v7 = v38;
      *(_OWORD *)(v7 + 16) = v11;
      *(_OWORD *)(v7 + 32) = v12;
      *(_QWORD *)(v7 + 48) = v10;
      v7 += 56LL;
      *((_QWORD *)&v35 + 1) = v7;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker);
  v13 = D3DCreateLinker(ppLinker);
  v15 = v35;
  v16 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x44u, 0LL);
  }
  else
  {
    v17 = ppLinker + 1;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker + 1);
    v18 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x45u, 0LL);
    }
    else
    {
      v20 = *v17;
      UseLibrary = (*v17)->lpVtbl->UseLibrary;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
      v22 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64, __int64, __int64 *))UseLibrary)(
              v20,
              v15,
              (v7 - v15) / 56,
              &v34);
      v16 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x49u, 0LL);
      }
      else
      {
        v24 = 0;
        if ( *(_DWORD *)a3 )
        {
          v25 = ppLinker + 2;
          v26 = a3[1];
          v37 = v25;
          do
          {
            v29 = 0LL;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            v33 = 0;
            Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v29, &v34);
            v30 = v24;
            if ( (unsigned __int64)v24 >= *a3 )
            {
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            v44 = v29;
            v43 = *(_WORD *)(32LL * v24 + v26);
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
            v46 = v31;
            v47 = v32;
            v45 = v24;
            std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::emplace_front<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              v25 + 1,
              &v43);
            v27 = v25[1];
            v25 = v37;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Insert<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>(
              v37,
              &v35,
              &v27->lpVtbl->Release);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v44);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
            ++v24;
          }
          while ( v24 < *(_DWORD *)a3 );
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
  if ( v15 )
    std::_Deallocate<16,0>(v15, 56 * ((v3 - v15) / 56));
  return v16;
}
