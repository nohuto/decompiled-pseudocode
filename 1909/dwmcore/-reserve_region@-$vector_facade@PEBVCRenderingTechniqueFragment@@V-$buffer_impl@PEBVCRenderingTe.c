/*
 * XREFs of ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180045B6C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800432CC (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  void *v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  void *v19; // rbx
  char *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // r10
  bool v24; // sf
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 3) )
  {
    v14 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    if ( v14 + 1 < v14 )
      std::_Xoverflow_error(a1);
    v15 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v5 - *(_QWORD *)a1) >> 3,
            v14 + 1);
    v16 = operator new(saturated_mul(v15, 8uLL));
    v17 = *((_QWORD *)a1 + 1);
    v18 = *(char **)a1;
    *(_QWORD *)&v25 = v16;
    v19 = v16;
    *((_QWORD *)&v25 + 1) = v14;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>)(
      &v25,
      v18,
      v17,
      &v27);
    v20 = *(char **)a1;
    v21 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v19;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v2 = (_QWORD *)(*(_QWORD *)a1 + 8 * v14);
    v22 = *(_QWORD *)a1 + 8 * v15;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v22;
  }
  v6 = *(char **)a1;
  v7 = (__int64)v2 - *(_QWORD *)a1;
  v26 = 0LL;
  v8 = v7 >> 3;
  *((_QWORD *)&v25 + 1) = 1LL;
  v9 = v8 - a2;
  v28 = 0LL;
  *(_QWORD *)&v25 = &v6[8 * v8];
  if ( !(_QWORD)v25 )
    goto LABEL_8;
  v28 = 1LL;
  v10 = v8 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v11 = 8 * v10;
  v12 = &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v26 = 1LL;
  if ( v2 != &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v23 = v25;
    v5 = v26;
    do
    {
      --v2;
      if ( !v5 )
        goto LABEL_8;
      if ( (unsigned __int64)--v5 >= *((_QWORD *)&v25 + 1) )
        goto LABEL_8;
      *(_QWORD *)(v23 + 8 * v5) = *v2;
    }
    while ( v2 != v12 );
  }
  if ( v9 > 1 )
  {
    v26 = 0LL;
    *(_QWORD *)&v25 = v6;
    *((_QWORD *)&v25 + 1) = v8;
    v28 = 0LL;
    v24 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_8;
      v24 = v8 < 0;
    }
    if ( !v24 || !v8 )
    {
      v28 = v8;
      v26 = v8;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        &v27,
        &v6[8 * a2],
        &v6[8 * v8 - 8],
        &v25);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v8, v5);
    JUMPOUT(0x180045C4FLL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  return &v6[8 * a2];
}
