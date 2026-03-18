/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049CC0
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVCOverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@V?$move_iterator@PEAPEAVCOverlayContext@@@0@0V12@@Z @ 0x180152628 (--$move_backward@V-$move_iterator@PEAPEAVCOverlayContext@@@std@@V-$checked_array_iterator@PEAPEA.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180152694 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r14
  void **v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  LPVOID v11; // rax
  void *v12; // r8
  void *v13; // rdx
  LPVOID v14; // rbx
  void *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  bool v22; // sf
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  bool v26; // sf
  __int64 v27; // rdi
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  v4 = *(_QWORD **)(a1 + 8);
  v6 = a3;
  v7 = (void **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3 < a3 )
  {
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 + a3;
    if ( v9 < v8 )
      std::_Xoverflow_error((const char *)a1);
    v10 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3,
            v9);
    v11 = operator new(saturated_mul(v10, 8uLL));
    v12 = v7[1];
    v13 = *v7;
    *(_QWORD *)&v29 = v11;
    v14 = v11;
    *((_QWORD *)&v29 + 1) = v8;
    v30 = 0LL;
    v31 = v29;
    v32 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>)(
      &v29,
      v13,
      v12,
      &v31);
    v15 = *v7;
    v16 = *v7 == v7 + 3;
    *v7 = v14;
    if ( v16 )
      v15 = 0LL;
    WPF::ProcessHeapImpl::Free(v15);
    v4 = (char *)*v7 + 8 * v8;
    v17 = (__int64)*v7 + 8 * v10;
    v7[1] = v4;
    v7[2] = (void *)v17;
  }
  v18 = (char *)*v7;
  v19 = (char *)v4 - (_BYTE *)*v7;
  v30 = 0LL;
  v20 = v19 >> 3;
  *((_QWORD *)&v29 + 1) = v6;
  v21 = v20 - a2;
  v32 = 0LL;
  *(_QWORD *)&v29 = &v18[8 * v20];
  v22 = v6 < 0;
  if ( v6 )
  {
    if ( !&v18[8 * v20] )
      goto LABEL_25;
    v22 = v6 < 0;
  }
  if ( v22 && v6 )
    goto LABEL_25;
  v32 = v6;
  v23 = v20 - a2;
  if ( v6 < v21 )
    v23 = v6;
  v30 = v6;
  v24 = 8 * v23;
  a4 = &v4[v24 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( v4 != &v4[v24 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v25 = *((_QWORD *)&v29 + 1);
    a3 = v29;
    a1 = v30;
    do
    {
      --v4;
      if ( !a3 )
        goto LABEL_25;
      if ( !a1 )
        goto LABEL_25;
      if ( --a1 >= v25 )
        goto LABEL_25;
      *(_QWORD *)(a3 + 8 * a1) = *v4;
    }
    while ( v4 != a4 );
  }
  if ( v21 <= v6 )
  {
    v27 = 8 * a2;
  }
  else
  {
    v30 = 0LL;
    *(_QWORD *)&v29 = v18;
    *((_QWORD *)&v29 + 1) = v20;
    v32 = 0LL;
    v26 = v20 < 0;
    if ( v20 )
    {
      if ( !v18 )
        goto LABEL_25;
      v26 = v20 < 0;
    }
    if ( v26 && v20 )
    {
LABEL_25:
      _o__invalid_parameter_noinfo_noreturn(a1, v20, a3, a4);
      __debugbreak();
    }
    v32 = v20;
    v27 = 8 * a2;
    v30 = v20;
    std::move_backward<std::move_iterator<COverlayContext * *>,stdext::checked_array_iterator<COverlayContext * *>>(
      &v31,
      &v18[8 * a2],
      &v18[8 * (v20 - v6)],
      &v29);
  }
  v7[1] = (char *)v7[1] + 8 * v6;
  return &v18[v27];
}
