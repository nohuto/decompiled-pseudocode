/*
 * XREFs of ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180020174
 * Callers:
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x1800693C8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DCAB0 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E1DFC (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(_QWORD *a1, __int16 a2, __int16 a3)
{
  unsigned __int64 v5; // r10
  __int64 *i; // rbx
  unsigned int v7; // ecx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  _BYTE *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+8h] BYREF
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF
  __int16 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v5 = a1[8] & std::_Hash_bytes((const unsigned __int8 *)&v18, 2uLL);
  for ( i = *(__int64 **)(a1[5] + 16 * v5);
        i != *(__int64 **)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                            a1 + 2,
                            &v16,
                            v5);
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == a3 )
      goto LABEL_4;
  }
  i = (__int64 *)a1[3];
LABEL_4:
  if ( i == (__int64 *)a1[3] )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xB5u);
  }
  else
  {
    std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
      a1 + 2,
      v15,
      &v17);
    v8 = i + 3;
    v9 = v15[0] + 24LL;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v15[0] + 24LL, v8);
    v10 = (_BYTE *)(v9 + 9);
    *(_BYTE *)(v9 + 8) = *((_BYTE *)v8 + 8);
    v11 = (__int64)v8 - v9;
    v12 = 5LL;
    do
    {
      *v10 = v10[v11];
      ++v10;
      --v12;
    }
    while ( v12 );
    return 0;
  }
  return v13;
}
