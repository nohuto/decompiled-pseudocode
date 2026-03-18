/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800432CC
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180042C9C (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180042BB8 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180042D8C (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180043120 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800437BC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180045630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180045828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180045B6C (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180046DF0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C3F08 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1800D5880 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
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
  _BYTE *v12; // rcx
  __int64 v13; // rax
  _BYTE *v14; // r9
  int MaskShaderBody; // eax
  void *v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h]
  _BYTE *v23; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v24; // [rsp+80h] [rbp-88h]
  char *v25; // [rsp+88h] [rbp-80h]
  _BYTE v26[48]; // [rsp+90h] [rbp-78h] BYREF
  char v27; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE *v28; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v29; // [rsp+D0h] [rbp-38h]
  __int64 *v30; // [rsp+D8h] [rbp-30h]
  _BYTE v31[128]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v32; // [rsp+160h] [rbp+58h] BYREF

  v23 = v26;
  v2 = 0;
  v24 = v26;
  v25 = &v27;
  v3 = *((unsigned int *)this + 21);
  v21 = 0LL;
  v22 = 0;
  v17 = v26;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v23,
      (unsigned int)&v18,
      (unsigned int)&v17,
      v3,
      (__int64)&v21);
  }
  else
  {
    v18 = (unsigned __int64)v26;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v23,
      &v21,
      &v18,
      &v17);
  }
  for ( i = 0; i < *((_DWORD *)this + 21); *(_DWORD *)(v5 + 4 * v7 + 8) = *((_DWORD *)this + 11 * v6 + 25) )
  {
    v5 = (__int64)v23;
    v6 = i++;
    v7 = 3 * v6;
    *(_QWORD *)&v23[4 * v7] = *(_QWORD *)((char *)this + 44 * v6 + 92);
  }
  v20 = 0LL;
  v28 = v31;
  v22 = 0;
  v29 = v31;
  v30 = &v32;
  v21 = *((_QWORD *)this + 1);
  *(_OWORD *)v19 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
    v19,
    0LL,
    &v21);
  CFragmentIterator::FindFirst((CFragmentIterator *)v19);
  while ( 1 )
  {
    v8 = v19[0];
    if ( !(((char *)v19[1] - (char *)v19[0]) >> 4) )
      break;
    v9 = (_QWORD *)*((_QWORD *)v19[1] - 2);
    if ( *v9 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v9, (int)&v28, (__int64)&v23);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, EffectShaderBody, 0x1C1u, 0LL);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v9, (int)&v28, (__int64)&v23);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, MaskShaderBody, 0x1C6u, 0LL);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0xC1u, 0LL);
      v8 = v19[0];
      break;
    }
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v28,
                 (v29 - v28) >> 3) = v9;
    CFragmentIterator::MoveNext((CFragmentIterator *)v19);
  }
  if ( v8 )
  {
    v17 = v8;
    v18 = (v20 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v18 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v17, &v18);
      v8 = v17;
    }
    operator delete(v8);
    v20 = 0LL;
    *(_OWORD *)v19 = 0LL;
  }
  v12 = v28;
  v13 = (v29 - v28) >> 3;
  if ( v13 )
    v29 -= 8 * v13;
  v28 = 0LL;
  if ( v12 == v31 )
    v12 = 0LL;
  operator delete(v12);
  v14 = v23;
  if ( (v24 - v23) / 12 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v23,
      0LL,
      (v24 - v23) / 12);
    v14 = v23;
  }
  v23 = 0LL;
  if ( v14 == v26 )
    v14 = 0LL;
  operator delete(v14);
  return (unsigned int)v2;
}
