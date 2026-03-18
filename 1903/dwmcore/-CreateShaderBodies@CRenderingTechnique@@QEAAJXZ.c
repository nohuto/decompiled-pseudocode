/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180034CA0 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x180033E4C (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180034BBC (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180034D90 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180035124 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180037B6C (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180038AE0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  int v2; // ebx
  __int64 v3; // rax
  unsigned int i; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  void *v8; // rcx
  _QWORD *v9; // rdi
  int EffectShaderBody; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // r9
  int MaskShaderBody; // eax
  void *v18; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v19; // [rsp+40h] [rbp-C8h] BYREF
  void *v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+68h] [rbp-A0h]
  _BYTE *v24; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v25; // [rsp+80h] [rbp-88h]
  char *v26; // [rsp+88h] [rbp-80h]
  _BYTE v27[48]; // [rsp+90h] [rbp-78h] BYREF
  char v28; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE *v29; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  _BYTE v32[128]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+160h] [rbp+58h] BYREF

  v24 = v27;
  v2 = 0;
  v25 = v27;
  v26 = &v28;
  v3 = *((unsigned int *)this + 21);
  v22 = 0LL;
  v23 = 0;
  v18 = v27;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v24,
      (unsigned int)&v19,
      (unsigned int)&v18,
      v3,
      (__int64)&v22);
  }
  else
  {
    v19 = v27;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v24,
      &v22,
      &v19,
      &v18);
  }
  for ( i = 0; i < *((_DWORD *)this + 21); *(_DWORD *)(v5 + 4 * v7 + 8) = *((_DWORD *)this + 11 * v6 + 25) )
  {
    v5 = (__int64)v24;
    v6 = i++;
    v7 = 3 * v6;
    *(_QWORD *)&v24[4 * v7] = *(_QWORD *)((char *)this + 44 * v6 + 92);
  }
  v21 = 0LL;
  v29 = v32;
  v23 = 0;
  v30 = v32;
  v31 = &v33;
  v22 = *((_QWORD *)this + 1);
  *(_OWORD *)v20 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v20,
    0LL,
    &v22);
  CFragmentIterator::FindFirst((CFragmentIterator *)v20);
  while ( 1 )
  {
    v8 = v20[0];
    if ( !(((char *)v20[1] - (char *)v20[0]) >> 4) )
      break;
    v9 = (_QWORD *)*((_QWORD *)v20[1] - 2);
    if ( *v9 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v9, (int)&v29, (__int64)&v24);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, EffectShaderBody, 0x1C1u, 0LL);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v9, (int)&v29, (__int64)&v24);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, MaskShaderBody, 0x1C6u, 0LL);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0xC1u, 0LL);
      v8 = v20[0];
      break;
    }
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v29,
                 (v30 - v29) >> 3) = v9;
    CFragmentIterator::MoveNext((CFragmentIterator *)v20);
  }
  if ( v8 )
  {
    v18 = v8;
    v12 = (v21 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = (_BYTE *)v12;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v18, (unsigned __int64 *)&v19);
      v12 = (unsigned __int64)v19;
      v8 = v18;
    }
    operator delete(v8, v12);
    v21 = 0LL;
    *(_OWORD *)v20 = 0LL;
  }
  v13 = v29;
  v14 = (v30 - v29) >> 3;
  if ( v14 )
    v30 -= 8 * v14;
  v29 = 0LL;
  if ( v13 == v32 )
    v13 = 0LL;
  operator delete(v13);
  v15 = v24;
  if ( (v25 - v24) / 12 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v24,
      0LL,
      (v25 - v24) / 12);
    v15 = v24;
  }
  v24 = 0LL;
  if ( v15 == v27 )
    v15 = 0LL;
  operator delete(v15);
  return (unsigned int)v2;
}
