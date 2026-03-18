/*
 * XREFs of ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180037B6C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 v7; // rdx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // r10
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = (_QWORD *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  if ( !((v7 - (__int64)v4) >> 3) )
  {
    v15 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    if ( v15 + 1 < v15 )
      std::_Xoverflow_error(a1);
    v16 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v7 - *(_QWORD *)a1) >> 3,
            v15 + 1);
    v17 = operator new(saturated_mul(v16, 8uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    *(_QWORD *)&v26 = v17;
    v20 = v17;
    *((_QWORD *)&v26 + 1) = v15;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v26,
      v19,
      v18,
      &v28);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v4 = (_QWORD *)(*(_QWORD *)a1 + 8 * v15);
    v23 = *(_QWORD *)a1 + 8 * v16;
    *((_QWORD *)a1 + 1) = v4;
    *((_QWORD *)a1 + 2) = v23;
  }
  v8 = *(char **)a1;
  v9 = (__int64)v4 - *(_QWORD *)a1;
  v27 = 0LL;
  v10 = v9 >> 3;
  *((_QWORD *)&v26 + 1) = 1LL;
  v11 = v10 - a2;
  v29 = 0LL;
  *(_QWORD *)&v26 = &v8[8 * v10];
  if ( !(_QWORD)v26 )
    goto LABEL_8;
  v29 = 1LL;
  v12 = v10 - a2;
  if ( v11 > 1 )
    v12 = 1LL;
  v13 = 8 * v12;
  a4 = &v4[v13 / 0xFFFFFFFFFFFFFFF8uLL];
  v27 = 1LL;
  if ( v4 != &v4[v13 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v24 = v26;
    v7 = v27;
    do
    {
      --v4;
      if ( !v7 )
        goto LABEL_8;
      if ( (unsigned __int64)--v7 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_8;
      *(_QWORD *)(v24 + 8 * v7) = *v4;
    }
    while ( v4 != a4 );
  }
  if ( v11 > 1 )
  {
    v27 = 0LL;
    *(_QWORD *)&v26 = v8;
    *((_QWORD *)&v26 + 1) = v10;
    v29 = 0LL;
    v25 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_8;
      v25 = v10 < 0;
    }
    if ( !v25 || !v10 )
    {
      v29 = v10;
      v27 = v10;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        &v28,
        &v8[8 * a2],
        &v8[8 * v10 - 8],
        &v26);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v10, v7, v11, a4);
    JUMPOUT(0x180037C4FLL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  return &v8[8 * a2];
}
