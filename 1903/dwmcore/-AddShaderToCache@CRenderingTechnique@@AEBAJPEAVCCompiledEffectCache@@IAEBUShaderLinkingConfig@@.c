/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180032950
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800357F0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18001FCB0 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180027B10 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        void **this,
        const void **a2,
        unsigned int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  _BYTE *v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  void *v15; // rbx
  int LinkedShader; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  void *v22[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v23[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF
  _BYTE *v26; // [rsp+68h] [rbp-8h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  v22[0] = this[1];
  v24 = 0LL;
  LODWORD(v22[1]) = 0;
  v26 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v23 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v23,
    0LL,
    v22);
  CFragmentIterator::FindFirst((CFragmentIterator *)v23);
  v11 = (_BYTE *)*((_QWORD *)&v25 + 1);
  while ( ((char *)v23[1] - (char *)v23[0]) >> 4 )
  {
    v12 = *((_QWORD *)v23[1] - 2) + 56LL;
    v27 = v12;
    if ( v5 == v11 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>((__int64)&v25, v11, &v27);
      v5 = v26;
      v11 = (_BYTE *)*((_QWORD *)&v25 + 1);
    }
    else
    {
      *(_QWORD *)v11 = v12;
      v11 += 8;
      *((_QWORD *)&v25 + 1) = v11;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v23);
  }
  v13 = *((_QWORD *)v11 - 1);
  v14 = v25;
  v15 = (void *)(((__int64)&v11[-v25] >> 3) - 1);
  v22[0] = v15;
  if ( (__int64)v15 < 0 || (v22[1] = (void *)v25) == 0LL && v15 )
  {
    ((void (__fastcall *)(void *, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v23[1],
      v9,
      v10,
      v13);
    __debugbreak();
  }
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(a2, a3, (__int64)a4, v13, v22, a5);
  v18 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, LinkedShader, 0x1C1u, 0LL);
  v19 = v23[0];
  if ( v23[0] )
  {
    v22[0] = v23[0];
    v20 = (v24 - (unsigned __int64)v23[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    v27 = v20;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v22, &v27);
      v20 = v27;
      v19 = v22[0];
    }
    operator delete(v19, v20);
    v24 = 0LL;
    *(_OWORD *)v23 = 0LL;
  }
  if ( v14 )
    std::_Deallocate<16,0>(v14, (unsigned __int64)&v5[-v14] & 0xFFFFFFFFFFFFFFF8uLL);
  return v18;
}
