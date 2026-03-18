/*
 * XREFs of ??$insert_unchecked@AEBQEAVCOverlayContext@@@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@AEBQEAVCOverlayContext@@@Z @ 0x18009330C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert_unchecked<COverlayContext * const &>(
        char *a1,
        _QWORD *a2,
        _QWORD *a3,
        char *a4)
{
  _BYTE *v4; // rbx
  __int64 v6; // rdx
  char *v7; // rdi
  __int64 v8; // r14
  char *v9; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *result; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  LPVOID v18; // rax
  __int64 v19; // r8
  LPVOID v20; // rbx
  _BYTE *v21; // rdx
  _BYTE *v22; // rcx
  bool v23; // zf
  __int64 v24; // r10
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = *(_BYTE **)a1;
  v6 = *((_QWORD *)a1 + 2);
  v7 = (char *)*((_QWORD *)a1 + 1);
  v8 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  v9 = a4;
  if ( !((v6 - (__int64)v7) >> 3) )
  {
    v16 = (v7 - v4) >> 3;
    if ( v16 + 1 < v16 )
      std::_Xoverflow_error(a1);
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v6 - (__int64)v4) >> 3,
            v16 + 1);
    v18 = operator new(saturated_mul(v17, 8uLL));
    v27 = 0LL;
    v19 = *((_QWORD *)a1 + 1);
    v20 = v18;
    v21 = *(_BYTE **)a1;
    *(_QWORD *)&v26 = v18;
    *((_QWORD *)&v26 + 1) = v16;
    v29 = 0LL;
    v28 = v26;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v26,
      v21,
      v19,
      &v28);
    v22 = *(_BYTE **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v20;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v4 = *(_BYTE **)a1;
    v7 = (char *)(*(_QWORD *)a1 + 8 * v16);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 8 * v17;
    *((_QWORD *)a1 + 1) = v7;
  }
  v27 = 0LL;
  v11 = (v7 - v4) >> 3;
  *((_QWORD *)&v26 + 1) = 1LL;
  v12 = v11 - v8;
  v29 = 0LL;
  *(_QWORD *)&v26 = &v4[8 * v11];
  if ( !(_QWORD)v26 )
    goto LABEL_8;
  v29 = 1LL;
  v13 = ((v7 - v4) >> 3) - v8;
  if ( v12 > 1 )
    v13 = 1LL;
  v14 = 8 * v13;
  a4 = &v7[-v14];
  v27 = 1LL;
  if ( v7 != &v7[-v14] )
  {
    v24 = v26;
    v6 = v27;
    do
    {
      v7 -= 8;
      if ( !v6 )
        goto LABEL_8;
      if ( (unsigned __int64)--v6 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_8;
      *(_QWORD *)(v24 + 8 * v6) = *(_QWORD *)v7;
    }
    while ( v7 != a4 );
  }
  if ( v12 > 1 )
  {
    v27 = 0LL;
    *(_QWORD *)&v26 = v4;
    *((_QWORD *)&v26 + 1) = v11;
    v29 = 0LL;
    v25 = v11 < 0;
    if ( v11 )
    {
      if ( !v4 )
        goto LABEL_8;
      v25 = v11 < 0;
    }
    if ( !v25 || !v11 )
    {
      v29 = v11;
      v27 = v11;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        &v28,
        &v4[8 * v8],
        &v4[8 * v11 - 8],
        &v26);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v11, v6, v12, a4);
    JUMPOUT(0x18009340DLL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  *(_QWORD *)&v4[8 * v8] = *(_QWORD *)v9;
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v8;
  return result;
}
