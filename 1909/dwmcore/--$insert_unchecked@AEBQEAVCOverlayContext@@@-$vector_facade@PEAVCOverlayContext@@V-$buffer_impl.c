/*
 * XREFs of ??$insert_unchecked@AEBQEAVCOverlayContext@@@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@AEBQEAVCOverlayContext@@@Z @ 0x18007007C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert_unchecked<COverlayContext * const &>(
        char *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _BYTE *v4; // rbx
  __int64 v6; // rdx
  char *v7; // rdi
  __int64 v8; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // r9
  _QWORD *result; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  void *v19; // rax
  __int64 v20; // r8
  void *v21; // rbx
  _BYTE *v22; // rdx
  _BYTE *v23; // rcx
  bool v24; // zf
  __int64 v25; // r10
  bool v26; // sf
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  v4 = *(_BYTE **)a1;
  v6 = *((_QWORD *)a1 + 2);
  v7 = (char *)*((_QWORD *)a1 + 1);
  v8 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  if ( !((v6 - (__int64)v7) >> 3) )
  {
    v17 = (v7 - v4) >> 3;
    if ( v17 + 1 < v17 )
      std::_Xoverflow_error(a1);
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v6 - (__int64)v4) >> 3,
            v17 + 1);
    v19 = operator new(saturated_mul(v18, 8uLL));
    v28 = 0LL;
    v20 = *((_QWORD *)a1 + 1);
    v21 = v19;
    v22 = *(_BYTE **)a1;
    *(_QWORD *)&v27 = v19;
    *((_QWORD *)&v27 + 1) = v17;
    v30 = 0LL;
    v29 = v27;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v27,
      v22,
      v20,
      &v29);
    v23 = *(_BYTE **)a1;
    v24 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v21;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v4 = *(_BYTE **)a1;
    v7 = (char *)(*(_QWORD *)a1 + 8 * v17);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 8 * v18;
    *((_QWORD *)a1 + 1) = v7;
  }
  v28 = 0LL;
  v11 = (v7 - v4) >> 3;
  *((_QWORD *)&v27 + 1) = 1LL;
  v12 = v11 - v8;
  v30 = 0LL;
  *(_QWORD *)&v27 = &v4[8 * v11];
  if ( !(_QWORD)v27 )
    goto LABEL_8;
  v30 = 1LL;
  v13 = ((v7 - v4) >> 3) - v8;
  if ( v12 > 1 )
    v13 = 1LL;
  v14 = 8 * v13;
  v15 = &v7[-v14];
  v28 = 1LL;
  if ( v7 != &v7[-v14] )
  {
    v25 = v27;
    v6 = v28;
    do
    {
      v7 -= 8;
      if ( !v6 )
        goto LABEL_8;
      if ( (unsigned __int64)--v6 >= *((_QWORD *)&v27 + 1) )
        goto LABEL_8;
      *(_QWORD *)(v25 + 8 * v6) = *(_QWORD *)v7;
    }
    while ( v7 != v15 );
  }
  if ( v12 > 1 )
  {
    v28 = 0LL;
    *(_QWORD *)&v27 = v4;
    *((_QWORD *)&v27 + 1) = v11;
    v30 = 0LL;
    v26 = v11 < 0;
    if ( v11 )
    {
      if ( !v4 )
        goto LABEL_8;
      v26 = v11 < 0;
    }
    if ( !v26 || !v11 )
    {
      v30 = v11;
      v28 = v11;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        &v29,
        &v4[8 * v8],
        &v4[8 * v11 - 8],
        &v27);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v11, v6);
    JUMPOUT(0x18007017DLL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  *(_QWORD *)&v4[8 * v8] = *a4;
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v8;
  return result;
}
