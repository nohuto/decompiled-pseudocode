/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0494 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXXZ @ 0x1800651B8 (-_Tidy@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFragmen.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180068780 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800DF6A8 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFAC0 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFE34 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?size@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800E1728 (-size@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDe.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1800E1EF8 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE4CC (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFCB0 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 i; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  void *v22; // rcx
  bool v23; // zf
  _DWORD *v25; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  int v32; // [rsp+78h] [rbp-90h]
  _QWORD v33[3]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v34[28]; // [rsp+A0h] [rbp-68h] BYREF
  char v35; // [rsp+110h] [rbp+8h] BYREF
  _BYTE *v36; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v37; // [rsp+120h] [rbp+18h]
  __int64 *v38; // [rsp+128h] [rbp+20h]
  _BYTE v39[128]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v40; // [rsp+1B0h] [rbp+A8h] BYREF

  v2 = *((unsigned int *)this + 23);
  v33[0] = v34;
  v33[1] = v34;
  v4 = 0;
  v33[2] = &v35;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v5 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(
         v33,
         a2,
         v2);
  v25 = v34;
  if ( v6 <= v5 )
  {
    v26 = &v34[7 * v6];
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      v33,
      &v29,
      &v26,
      &v25);
  }
  else
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)v33,
      (unsigned int)&v26,
      (unsigned int)&v25,
      v6 - v5,
      (__int64)&v29);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 23); *(_DWORD *)(v10 + v8 + 24) = *((_DWORD *)this + 15 * v9 + 31) )
  {
    v8 = v33[0];
    v9 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    v10 = 28 * v9;
    *(_OWORD *)(v10 + v33[0]) = *(_OWORD *)((char *)this + 60 * v9 + 100);
    *(_QWORD *)(v10 + v8 + 16) = *(_QWORD *)((char *)this + 60 * v9 + 116);
  }
  v28 = 0LL;
  v36 = v39;
  LODWORD(v30) = 0;
  v37 = v39;
  v38 = &v40;
  v29 = *((_QWORD *)this + 2);
  v27 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    &v27,
    0LL,
    &v29,
    i);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v27);
  while ( (__int64)(*((_QWORD *)&v27 + 1) - v27) >> 4 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)&v27 + 1) - 16LL);
    if ( *(_QWORD *)(v14 + 8) )
    {
      v15 = CRenderingTechniqueFragment::CreateEffectShaderBody(v14, &v36, v33);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1E1u);
    }
    else
    {
      v17 = CRenderingTechniqueFragment::CreateMaskShaderBody(v14, &v36, v33);
      v4 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0x1E6u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0xCDu);
      break;
    }
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)&v36,
                 (v37 - v36) >> 3) = v14;
    CFragmentIterator::MoveNext((CFragmentIterator *)&v27);
  }
  std::vector<CFragmentIterator::FragmentStackEntry>::_Tidy((__int64)&v27, v11, v12, v13);
  v18 = v36;
  if ( (v37 - v36) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v36);
    v18 = v36;
  }
  v36 = 0LL;
  if ( v18 == v39 )
    v18 = 0LL;
  WPF::ProcessHeapImpl::Free(v18);
  v21 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(
          v33,
          v19,
          v20);
  if ( v21 )
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      v33,
      0LL,
      v21);
  v22 = (void *)v33[0];
  v23 = v33[0] == (_QWORD)v34;
  v33[0] = 0LL;
  if ( v23 )
    v22 = 0LL;
  WPF::ProcessHeapImpl::Free(v22);
  return (unsigned int)v4;
}
