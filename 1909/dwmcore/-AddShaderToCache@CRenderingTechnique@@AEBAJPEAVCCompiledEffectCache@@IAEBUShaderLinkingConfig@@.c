/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18002FDB4
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800437EC (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAIPEAPEAU.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002FF30 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800437BC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180045630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180045828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C3F08 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        void **this,
        struct CCompiledEffectCache *a2,
        int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  unsigned __int64 *v5; // rdi
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  void *v15; // rbx
  int LinkedShader; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  void *v19; // rcx
  void *v21[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 *v25; // [rsp+68h] [rbp-8h]
  unsigned __int64 v26; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0LL;
  v21[0] = this[1];
  v23 = 0LL;
  LODWORD(v21[1]) = 0;
  v7 = (int)a2;
  v25 = 0LL;
  v24 = 0LL;
  v8 = (int)a4;
  *(_OWORD *)v22 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v22,
    0LL,
    v21);
  CFragmentIterator::FindFirst((CFragmentIterator *)v22);
  v11 = (unsigned __int64 *)*((_QWORD *)&v24 + 1);
  while ( ((char *)v22[1] - (char *)v22[0]) >> 4 )
  {
    v12 = *((_QWORD *)v22[1] - 2) + 56LL;
    v26 = v12;
    if ( v5 == v11 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(&v24, v11, &v26);
      v5 = v25;
      v11 = (unsigned __int64 *)*((_QWORD *)&v24 + 1);
    }
    else
    {
      *v11++ = v12;
      *((_QWORD *)&v24 + 1) = v11;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v22);
  }
  v13 = *(v11 - 1);
  v14 = v24;
  v15 = (void *)(((__int64)((__int64)v11 - v24) >> 3) - 1);
  v21[0] = v15;
  if ( (__int64)v15 < 0 || (v21[1] = (void *)v24) == 0LL && v15 )
  {
    ((void (__fastcall *)(void *, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v22[1],
      v9,
      v10,
      v13);
    __debugbreak();
  }
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(v7, a3, v8, v13, (__int64)v21, (__int64)a5);
  v18 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, LinkedShader, 0x1C1u, 0LL);
  v19 = v22[0];
  if ( v22[0] )
  {
    v21[0] = v22[0];
    v26 = (v23 - (unsigned __int64)v22[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v26 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v21, &v26);
      v19 = v21[0];
    }
    operator delete(v19);
    v23 = 0LL;
    *(_OWORD *)v22 = 0LL;
  }
  if ( v14 )
    std::_Deallocate<16,0>(v14, ((unsigned __int64)v5 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
  return v18;
}
