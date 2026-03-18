/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049F14
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18016CBF8 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVCOverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@V?$move_iterator@PEAPEAVCOverlayContext@@@0@0V12@@Z @ 0x180152628 (--$move_backward@V-$move_iterator@PEAPEAVCOverlayContext@@@std@@V-$checked_array_iterator@PEAPEA.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180152694 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  LPVOID v10; // rax
  __int64 v11; // r8
  char *v12; // rdx
  LPVOID v13; // rbx
  char *v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r10
  bool v24; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = (_QWORD *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  if ( !((v7 - (__int64)v4) >> 3) )
  {
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    if ( v8 + 1 < v8 )
      std::_Xoverflow_error(a1);
    v9 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)a1,
           (v7 - *(_QWORD *)a1) >> 3,
           v8 + 1);
    v10 = operator new(saturated_mul(v9, 8uLL));
    v11 = *((_QWORD *)a1 + 1);
    v12 = *(char **)a1;
    *(_QWORD *)&v26 = v10;
    v13 = v10;
    *((_QWORD *)&v26 + 1) = v8;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>)(
      &v26,
      v12,
      v11,
      &v28);
    v14 = *(char **)a1;
    v15 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v13;
    if ( v15 )
      v14 = 0LL;
    WPF::ProcessHeapImpl::Free(v14);
    v4 = (_QWORD *)(*(_QWORD *)a1 + 8 * v8);
    v16 = *(_QWORD *)a1 + 8 * v9;
    *((_QWORD *)a1 + 1) = v4;
    *((_QWORD *)a1 + 2) = v16;
  }
  v17 = *(char **)a1;
  v18 = (__int64)v4 - *(_QWORD *)a1;
  v27 = 0LL;
  v19 = v18 >> 3;
  *((_QWORD *)&v26 + 1) = 1LL;
  v20 = v19 - a2;
  v29 = 0LL;
  *(_QWORD *)&v26 = &v17[8 * v19];
  if ( !(_QWORD)v26 )
    goto LABEL_22;
  v29 = 1LL;
  v21 = v19 - a2;
  if ( v20 > 1 )
    v21 = 1LL;
  v22 = 8 * v21;
  a4 = &v4[v22 / 0xFFFFFFFFFFFFFFF8uLL];
  v27 = 1LL;
  if ( v4 != &v4[v22 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v23 = v26;
    v7 = v27;
    do
    {
      --v4;
      if ( !v7 )
        goto LABEL_22;
      if ( (unsigned __int64)--v7 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_22;
      *(_QWORD *)(v23 + 8 * v7) = *v4;
    }
    while ( v4 != a4 );
  }
  if ( v20 > 1 )
  {
    v27 = 0LL;
    *(_QWORD *)&v26 = v17;
    *((_QWORD *)&v26 + 1) = v19;
    v29 = 0LL;
    v24 = v19 < 0;
    if ( v19 )
    {
      if ( !v17 )
        goto LABEL_22;
      v24 = v19 < 0;
    }
    if ( v24 && v19 )
    {
LABEL_22:
      _o__invalid_parameter_noinfo_noreturn(v19, v7, v20, a4);
      __debugbreak();
    }
    v29 = v19;
    v27 = v19;
    std::move_backward<std::move_iterator<COverlayContext * *>,stdext::checked_array_iterator<COverlayContext * *>>(
      &v28,
      &v17[8 * a2],
      &v17[8 * v19 - 8],
      &v26);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  return &v17[8 * a2];
}
