/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800E456C
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5400 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x1800E4474 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        void **this,
        const void **a2,
        unsigned int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  void *v12; // rsi
  void *v13; // rbx
  int LinkedShader; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  gsl::details *v19; // rcx
  unsigned __int64 v20; // rdx
  void *v22[2]; // [rsp+30h] [rbp-40h] BYREF
  gsl::details *v23[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 *v26; // [rsp+68h] [rbp-8h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  v22[0] = this[2];
  v24 = 0LL;
  LODWORD(v22[1]) = 0;
  v26 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v23 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    (__int64)v23,
    0LL,
    v22);
  CFragmentIterator::FindFirst((CFragmentIterator *)v23);
  v9 = (unsigned __int64 *)*((_QWORD *)&v25 + 1);
  while ( (v23[1] - v23[0]) >> 4 )
  {
    v10 = *((_QWORD *)v23[1] - 2) + 56LL;
    v27 = v10;
    if ( v5 == v9 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>((__int64 *)&v25, v9, &v27);
      v5 = v26;
      v9 = (unsigned __int64 *)*((_QWORD *)&v25 + 1);
    }
    else
    {
      *v9++ = v10;
      *((_QWORD *)&v25 + 1) = v9;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v23);
  }
  v11 = *(v9 - 1);
  v12 = (void *)v25;
  v13 = (void *)(((__int64)((__int64)v9 - v25) >> 3) - 1);
  v22[0] = v13;
  if ( (__int64)v13 < 0 || (v22[1] = (void *)v25) == 0LL && v13 )
  {
    gsl::details::terminate(v23[1]);
    JUMPOUT(0x1800E46E7LL);
  }
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(a2, a3, (__int64)a4, v11, v22, a5);
  v18 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, LinkedShader, 0x1D6u);
  v19 = v23[0];
  if ( v23[0] )
  {
    v22[0] = v23[0];
    v20 = (v24 - (unsigned __int64)v23[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v20;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v22, &v27, v16, v17);
      v20 = v27;
      v19 = (gsl::details *)v22[0];
    }
    operator delete(v19, v20);
    v24 = 0LL;
    *(_OWORD *)v23 = 0LL;
  }
  if ( v12 )
    std::_Deallocate<16,0>(v12, ((char *)v5 - (_BYTE *)v12) & 0xFFFFFFFFFFFFFFF8uLL);
  return v18;
}
