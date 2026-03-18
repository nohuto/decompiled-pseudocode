/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006F790
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18002AEE4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006FC34 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801819B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180185790 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801860D4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180186178 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x180186678 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180186704 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // r13
  signed __int64 *v5; // r15
  unsigned __int64 *v6; // rax
  int v7; // r12d
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  bool v10; // sf
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 *v13; // rdx
  signed __int64 *v14; // r8
  _BYTE *v15; // rbx
  unsigned __int64 *v16; // r8
  LPVOID *p_lpMem; // rdx
  unsigned __int64 *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  char v22; // r12
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rbx
  __int64 v27; // r10
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  COverlayContext **v31; // r14
  unsigned __int64 v32; // rsi
  COverlayContext **v33; // rax
  unsigned __int64 v34; // rsi
  COverlayContext *v35; // r15
  COverlayContext *v36; // rax
  const struct COverlayContext::OverlayPlaneInfo *v37; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v38; // rdi
  __int64 v39; // r8
  _BYTE *v40; // rbx
  unsigned __int64 v42; // rdi
  SIZE_T v43; // r10
  SIZE_T v44; // rax
  void *v45; // rax
  void *v46; // rbx
  void *v47; // rcx
  bool v48; // zf
  __int64 v49; // r10
  signed __int64 v50; // r9
  bool v51; // sf
  unsigned __int64 v52; // rsi
  SIZE_T v53; // r10
  SIZE_T v54; // rax
  _BYTE *v55; // rbx
  void *v56; // rcx
  __int64 v57; // r11
  __int64 v58; // r10
  bool v59; // sf
  bool v60; // sf
  unsigned __int64 *v61; // rax
  LPVOID *v62; // rax
  __int64 v63; // r14
  COverlayContext **v64; // rsi
  __int64 v65; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v67; // rax
  __int128 v68; // [rsp+30h] [rbp-D0h] BYREF
  signed __int64 v69; // [rsp+40h] [rbp-C0h]
  COverlayContext *v70; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int128 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  __int128 v75; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  signed __int64 *v77; // [rsp+B8h] [rbp-48h]
  __int128 v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  __int128 v80; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h]
  __int128 v82; // [rsp+100h] [rbp+0h] BYREF
  __int64 v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int128 v86; // [rsp+150h] [rbp+50h] BYREF
  __int64 v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+180h] [rbp+80h]
  _BYTE v89[24]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE *v90; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 *v91; // [rsp+1A8h] [rbp+A8h]
  LPVOID *i; // [rsp+1B0h] [rbp+B0h]
  _BYTE Mem[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  LPVOID lpMem; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 *v95; // [rsp+1E0h] [rbp+E0h]
  char *v96; // [rsp+1E8h] [rbp+E8h]
  _BYTE v97[128]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v98[2]; // [rsp+270h] [rbp+170h] BYREF

  v2 = *a1;
  v3 = v97;
  v4 = 0LL;
  v77 = a1;
  v75 = (unsigned __int64)a1;
  v5 = a1;
  v6 = (unsigned __int64 *)v97;
  lpMem = v97;
  v95 = (unsigned __int64 *)v97;
  v96 = (char *)v98;
  v7 = 0;
  if ( (unsigned __int64)v2 > 0x10 )
  {
    v42 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v98, 0x10uLL, v2);
    v44 = 8 * v42;
    if ( !is_mul_ok(v42, 8uLL) )
      v44 = v43;
    v45 = operator new(v44);
    v68 = (unsigned __int64)v45;
    v46 = v45;
    v69 = 0LL;
    v73 = (unsigned __int64)v45;
    v74 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v80,
      lpMem,
      v95,
      &v73);
    v47 = lpMem;
    v48 = lpMem == v97;
    lpMem = v46;
    if ( v48 )
      v47 = 0LL;
    operator delete(v47);
    v3 = lpMem;
    v6 = (unsigned __int64 *)lpMem;
    v95 = (unsigned __int64 *)lpMem;
    v96 = (char *)lpMem + 8 * v42;
  }
  v69 = 0LL;
  v8 = v6 - v3;
  *((_QWORD *)&v68 + 1) = v2;
  v74 = 0LL;
  v9 = (unsigned __int64)&v3[v8];
  *(_QWORD *)&v68 = v9;
  v10 = v2 < 0;
  if ( v2 )
  {
    if ( !v9 )
      goto LABEL_60;
    v10 = v2 < 0;
  }
  if ( v10 )
  {
    v9 = -v2;
    if ( v2 )
    {
LABEL_60:
      _o__invalid_parameter_noinfo_noreturn(v9, a2);
      JUMPOUT(0x18011969CLL);
    }
  }
  v74 = v2;
  v11 = v6 - v3;
  if ( v2 < (unsigned __int64)v8 )
    v11 = v2;
  v69 = v2;
  a2 = 8 * v11;
  v9 = (unsigned __int64)v6 - a2;
  if ( v6 != (unsigned __int64 *)((char *)v6 - a2) )
  {
    v49 = v68;
    v50 = v69;
    do
    {
      --v6;
      if ( !v49 )
        goto LABEL_60;
      if ( !v50 )
        goto LABEL_60;
      if ( (unsigned __int64)--v50 >= *((_QWORD *)&v68 + 1) )
        goto LABEL_60;
      a2 = *v6;
      *(_QWORD *)(v49 + 8 * v50) = *v6;
    }
    while ( v6 != (unsigned __int64 *)v9 );
    v6 = v95;
  }
  if ( v8 > (unsigned __int64)v2 )
  {
    v69 = 0LL;
    *(_QWORD *)&v68 = v3;
    *((_QWORD *)&v68 + 1) = v8;
    v74 = 0LL;
    v51 = v8 < 0;
    if ( v8 )
    {
      if ( !v3 )
        goto LABEL_60;
      v51 = v8 < 0;
    }
    if ( v51 && v8 )
      goto LABEL_60;
    v74 = v8;
    v71 = v68;
    v72 = v8;
    std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
      &v80,
      v3,
      &v3[v8 - v2],
      &v71);
    v6 = v95;
  }
  v9 = (unsigned __int64)&v6[v2];
  v12 = 0LL;
  v13 = (unsigned __int64 *)*((_QWORD *)&v75 + 1);
  v14 = (signed __int64 *)v75;
  v95 = (unsigned __int64 *)v9;
  while ( v13 != (unsigned __int64 *)v2 || v14 != v5 )
  {
    if ( v13 == (unsigned __int64 *)*v14
      || (v9 = *(_QWORD *)(v12 + v14[1]), *v3 = v9, v12 < 0)
      || v13 == (unsigned __int64 *)*v14 )
    {
LABEL_103:
      ((void (__fastcall *)(unsigned __int64, unsigned __int64 *, signed __int64 *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        v9,
        v13,
        v14,
        v12);
      __debugbreak();
    }
    v13 = (unsigned __int64 *)((char *)v13 + 1);
    v12 += 8LL;
    ++v3;
  }
  v15 = Mem;
  v16 = (unsigned __int64 *)Mem;
  v90 = Mem;
  p_lpMem = &lpMem;
  v91 = (unsigned __int64 *)Mem;
  for ( i = &lpMem; ; p_lpMem = i )
  {
    v18 = v95;
    if ( (((char *)v95 - (_BYTE *)lpMem) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      break;
    v19 = *(v95 - 1);
    v20 = ((char *)v16 - v15) >> 3;
    v21 = *(_QWORD *)(v19 + 80);
    v22 = *(_BYTE *)(v19 + 13429);
    v76 = v21;
    if ( !(((char *)p_lpMem - (char *)v16) >> 3) )
    {
      if ( v20 + 1 < v20 )
        std::_Xoverflow_error((const char *)v9);
      v52 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v9,
              ((char *)p_lpMem - v15) >> 3,
              v20 + 1);
      v54 = 8 * v52;
      if ( !is_mul_ok(v52, 8uLL) )
        v54 = v53;
      *(_QWORD *)&v78 = operator new(v54);
      v55 = (_BYTE *)v78;
      *((_QWORD *)&v78 + 1) = v20;
      v79 = 0LL;
      v82 = v78;
      v83 = 0LL;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        v89,
        v90,
        v91,
        &v82);
      v56 = v90;
      v48 = v90 == Mem;
      v90 = v55;
      if ( v48 )
        v56 = 0LL;
      operator delete(v56);
      v15 = v90;
      v16 = (unsigned __int64 *)&v90[8 * v20];
      v91 = v16;
      i = (LPVOID *)&v90[8 * v52];
    }
    *((_QWORD *)&v71 + 1) = 1LL;
    v72 = 0LL;
    v23 = ((char *)v16 - v15) >> 3;
    v84 = 0LL;
    a2 = v23 - v20;
    *(_QWORD *)&v71 = &v15[8 * v23];
    if ( !(_QWORD)v71 )
      goto LABEL_60;
    v84 = 1LL;
    v24 = (((char *)v16 - v15) >> 3) - v20;
    if ( a2 > 1 )
      v24 = 1LL;
    v73 = v71;
    v74 = 1LL;
    v9 = 8 * v24;
    v25 = (unsigned __int64 *)((char *)v16 - v9);
    if ( v16 != (unsigned __int64 *)((char *)v16 - v9) )
    {
      v57 = v73;
      v58 = v74;
      do
      {
        --v16;
        if ( !v57 )
          goto LABEL_60;
        if ( !v58 )
          goto LABEL_60;
        if ( (unsigned __int64)--v58 >= *((_QWORD *)&v73 + 1) )
          goto LABEL_60;
        v9 = *v16;
        *(_QWORD *)(v57 + 8 * v58) = *v16;
      }
      while ( v16 != v25 );
      v16 = v91;
    }
    if ( a2 > 1 )
    {
      v72 = 0LL;
      *(_QWORD *)&v71 = v15;
      *((_QWORD *)&v71 + 1) = v23;
      v85 = 0LL;
      v59 = v23 < 0;
      if ( v23 )
      {
        if ( !v15 )
          goto LABEL_60;
        v59 = v23 < 0;
      }
      if ( v59 && v23 )
        goto LABEL_60;
      v85 = v23;
      v86 = v71;
      v87 = v23;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        v89,
        &v15[8 * v20],
        &v15[8 * v23 - 8],
        &v86);
      v16 = v91;
    }
    v91 = v16 + 1;
    *(_QWORD *)&v15[8 * v20] = *(v18 - 1);
    a2 = (unsigned __int64)v95;
    v26 = (unsigned __int64 *)lpMem;
    v12 = ((char *)v95 - (_BYTE *)lpMem - 8) >> 3;
    v9 = ((char *)v95 - (_BYTE *)lpMem) >> 3;
    v27 = v12 + 1;
    if ( v12 + 1 > v9 )
      std::_Xoverflow_error((const char *)v9);
    v4 = 0LL;
    *(_QWORD *)&v71 = lpMem;
    *((_QWORD *)&v71 + 1) = ((char *)v95 - (_BYTE *)lpMem) >> 3;
    v14 = (signed __int64 *)((char *)lpMem + 8 * v9);
    v72 = 0LL;
    if ( v27 != v9 )
    {
      v88 = v72;
      v60 = v12 < 0;
      if ( v12 )
      {
        if ( !lpMem )
          goto LABEL_60;
        v60 = v12 < 0;
      }
      if ( v60 && v12 || v12 > 0 && v9 < v12 )
        goto LABEL_60;
      v88 = ((char *)v95 - (_BYTE *)lpMem - 8) >> 3;
      v81 = v88;
      v80 = v71;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        v89,
        (char *)lpMem + 8 * v27,
        v14,
        &v80);
      a2 = (unsigned __int64)v95;
      v26 = (unsigned __int64 *)lpMem;
    }
    v13 = (unsigned __int64 *)(a2 - 8);
    v95 = v13;
    if ( !v22 )
    {
      while ( v26 != v13 )
      {
        if ( *(_QWORD *)(*v26 + 80) == __PAIR64__(HIDWORD(v76), v21) )
        {
          v61 = (unsigned __int64 *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                                      &v90,
                                      ((char *)v91 - v90) >> 3,
                                      v14);
          v70 = (COverlayContext *)v26;
          *v61 = *v26;
          v62 = (LPVOID *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                            &lpMem,
                            &v75,
                            &v70);
          v13 = v95;
          v26 = (unsigned __int64 *)*v62;
        }
        else
        {
          ++v26;
        }
      }
    }
    v9 = (unsigned __int64)v90;
    v28 = ((char *)v91 - v90) >> 3;
    if ( v28 < 0 )
    {
      gsl::details::throw_exception<gsl::narrowing_error>(v90, v13, v14);
      __debugbreak();
    }
    *(_QWORD *)&v68 = ((char *)v91 - v90) >> 3;
    *((_QWORD *)&v68 + 1) = v90;
    if ( !v90 && v28 )
      goto LABEL_103;
    v29 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v68, v13, v14);
    v7 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x10Eu, 0LL);
      v16 = v91;
      v15 = v90;
      goto LABEL_44;
    }
    v16 = v91;
    v15 = v90;
    v9 = ((char *)v91 - v90) >> 3;
    if ( v9 )
    {
      v9 = -(__int64)v9;
      v16 = &v91[v9];
      v91 = v16;
    }
  }
  if ( *v5 )
  {
    v31 = (COverlayContext **)v5[1];
    v32 = *v5;
    v70 = (COverlayContext *)*((_QWORD *)*v31 + 1682);
    v33 = &v31[v32];
    v34 = (v32 * 8) >> 3;
    if ( v31 > v33 )
      v34 = 0LL;
    if ( v34 )
    {
      v35 = v70;
      do
      {
        v36 = *v31;
        v70 = v36;
        v37 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v36 + 1054);
        v38 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v36 + 1055);
        while ( v37 != v38 )
        {
          if ( COverlayContext::IsRevokable(v36, v37) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v35 + 69) + 96LL))(
              *((_QWORD *)v35 + 69),
              CCommonRegistryData::m_dwOverlayDisqualifyInterval,
              0x10000LL);
            break;
          }
          v36 = v70;
          v37 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v37 + 256);
        }
        ++v31;
        ++v4;
      }
      while ( v4 != v34 );
      v16 = v91;
      v15 = v90;
      v5 = v77;
    }
  }
LABEL_44:
  if ( v7 < 0 )
  {
    v63 = 0LL;
    v64 = (COverlayContext **)v5[1];
    v65 = *v5 & 0x1FFFFFFFFFFFFFFFLL;
    if ( v64 > &v64[*v5] )
      v65 = 0LL;
    if ( v65 )
    {
      do
      {
        COverlayContext::Reset(*v64);
        ++v63;
        ++v64;
      }
      while ( v63 != v65 );
      v16 = v91;
      v15 = v90;
    }
  }
  if ( ((char *)v16 - v15) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v90);
    v15 = v90;
  }
  v90 = 0LL;
  if ( v15 != Mem && v15 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v15);
  }
  v39 = ((char *)v95 - (_BYTE *)lpMem) >> 3;
  if ( v39 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL,
      v39,
      v12);
  v40 = lpMem;
  lpMem = 0LL;
  if ( v40 != v97 && v40 )
  {
    v67 = GetProcessHeap();
    HeapFree(v67, 0, v40);
  }
  return (unsigned int)v7;
}
