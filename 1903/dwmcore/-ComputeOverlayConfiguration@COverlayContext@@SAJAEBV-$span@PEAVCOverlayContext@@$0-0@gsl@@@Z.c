/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092A20
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092EC4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801830B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180186E70 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801877B4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180187858 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x180187D58 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180187DE4 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(
        signed __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r13
  signed __int64 *v7; // r15
  unsigned __int64 *v8; // rax
  int v9; // r12d
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  bool v12; // sf
  __int64 v13; // rdx
  unsigned __int64 *v14; // rdx
  _BYTE *v15; // rbx
  LPVOID *p_lpMem; // rdx
  unsigned __int64 *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rdi
  char v21; // r12
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rbx
  __int64 v25; // r10
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  COverlayContext **v29; // r14
  unsigned __int64 v30; // rsi
  COverlayContext **v31; // rax
  unsigned __int64 v32; // rsi
  COverlayContext *v33; // r15
  COverlayContext *v34; // rax
  const struct COverlayContext::OverlayPlaneInfo *v35; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v36; // rdi
  __int64 v37; // r8
  _BYTE *v38; // rbx
  unsigned __int64 v40; // rdi
  SIZE_T v41; // r10
  SIZE_T v42; // rax
  LPVOID v43; // rax
  void *v44; // rbx
  void *v45; // rcx
  bool v46; // zf
  __int64 v47; // r10
  bool v48; // sf
  unsigned __int64 v49; // rsi
  SIZE_T v50; // r10
  SIZE_T v51; // rax
  _BYTE *v52; // rbx
  void *v53; // rcx
  __int64 v54; // r11
  __int64 v55; // r10
  bool v56; // sf
  bool v57; // sf
  unsigned __int64 *v58; // rax
  LPVOID *v59; // rax
  __int64 v60; // r14
  COverlayContext **v61; // rsi
  __int64 v62; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v64; // rax
  __int128 v65; // [rsp+30h] [rbp-D0h] BYREF
  signed __int64 v66; // [rsp+40h] [rbp-C0h]
  COverlayContext *v67; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-90h]
  __int128 v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int128 v72; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-50h]
  signed __int64 *v74; // [rsp+B8h] [rbp-48h]
  __int128 v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int128 v77; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-10h]
  __int128 v79; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  __int128 v83; // [rsp+150h] [rbp+50h] BYREF
  __int64 v84; // [rsp+160h] [rbp+60h]
  __int64 v85; // [rsp+180h] [rbp+80h]
  _BYTE v86[24]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE *v87; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v88; // [rsp+1A8h] [rbp+A8h]
  LPVOID *i; // [rsp+1B0h] [rbp+B0h]
  _BYTE Mem[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  LPVOID lpMem; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 *v92; // [rsp+1E0h] [rbp+E0h]
  char *v93; // [rsp+1E8h] [rbp+E8h]
  _BYTE v94[128]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v95[2]; // [rsp+270h] [rbp+170h] BYREF

  v4 = *a1;
  v5 = v94;
  v6 = 0LL;
  v74 = a1;
  v72 = (unsigned __int64)a1;
  v7 = a1;
  v8 = (unsigned __int64 *)v94;
  lpMem = v94;
  v92 = (unsigned __int64 *)v94;
  v93 = (char *)v95;
  v9 = 0;
  if ( (unsigned __int64)v4 > 0x10 )
  {
    v40 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v95, 0x10uLL, v4);
    v42 = 8 * v40;
    if ( !is_mul_ok(v40, 8uLL) )
      v42 = v41;
    v43 = operator new(v42);
    v65 = (unsigned __int64)v43;
    v44 = v43;
    v66 = 0LL;
    v70 = (unsigned __int64)v43;
    v71 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
      &v77,
      lpMem,
      v92,
      &v70);
    v45 = lpMem;
    v46 = lpMem == v94;
    lpMem = v44;
    if ( v46 )
      v45 = 0LL;
    operator delete(v45);
    v5 = lpMem;
    v8 = (unsigned __int64 *)lpMem;
    v92 = (unsigned __int64 *)lpMem;
    v93 = (char *)lpMem + 8 * v40;
  }
  v66 = 0LL;
  v10 = v8 - v5;
  *((_QWORD *)&v65 + 1) = v4;
  v71 = 0LL;
  v11 = (unsigned __int64)&v5[v10];
  *(_QWORD *)&v65 = v11;
  v12 = v4 < 0;
  if ( v4 )
  {
    if ( !v11 )
      goto LABEL_60;
    v12 = v4 < 0;
  }
  if ( v12 )
  {
    v11 = -v4;
    if ( v4 )
    {
LABEL_60:
      _o__invalid_parameter_noinfo_noreturn(v11, a2, v10, a4);
      JUMPOUT(0x180125D16LL);
    }
  }
  v71 = v4;
  v13 = v8 - v5;
  if ( v4 < (unsigned __int64)v10 )
    v13 = v4;
  v66 = v4;
  a2 = 8 * v13;
  v11 = (unsigned __int64)v8 - a2;
  if ( v8 != (unsigned __int64 *)((char *)v8 - a2) )
  {
    v47 = v65;
    a4 = v66;
    do
    {
      --v8;
      if ( !v47 )
        goto LABEL_60;
      if ( !a4 )
        goto LABEL_60;
      if ( (unsigned __int64)--a4 >= *((_QWORD *)&v65 + 1) )
        goto LABEL_60;
      a2 = *v8;
      *(_QWORD *)(v47 + 8 * a4) = *v8;
    }
    while ( v8 != (unsigned __int64 *)v11 );
    v8 = v92;
  }
  if ( v10 > (unsigned __int64)v4 )
  {
    v66 = 0LL;
    *(_QWORD *)&v65 = v5;
    *((_QWORD *)&v65 + 1) = v10;
    v71 = 0LL;
    v48 = v10 < 0;
    if ( v10 )
    {
      if ( !v5 )
        goto LABEL_60;
      v48 = v10 < 0;
    }
    if ( v48 && v10 )
      goto LABEL_60;
    v71 = v10;
    v68 = v65;
    v69 = v10;
    std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
      &v77,
      v5,
      &v5[v10 - v4],
      &v68);
    v8 = v92;
  }
  v11 = (unsigned __int64)&v8[v4];
  a4 = 0LL;
  v14 = (unsigned __int64 *)*((_QWORD *)&v72 + 1);
  v10 = v72;
  v92 = (unsigned __int64 *)v11;
  while ( v14 != (unsigned __int64 *)v4 || (signed __int64 *)v10 != v7 )
  {
    if ( v14 == *(unsigned __int64 **)v10
      || (v11 = *(_QWORD *)(a4 + *(_QWORD *)(v10 + 8)), *v5 = v11, a4 < 0)
      || v14 == *(unsigned __int64 **)v10 )
    {
LABEL_103:
      ((void (__fastcall *)(unsigned __int64, unsigned __int64 *, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        v11,
        v14,
        v10,
        a4);
      __debugbreak();
    }
    v14 = (unsigned __int64 *)((char *)v14 + 1);
    a4 += 8LL;
    ++v5;
  }
  v15 = Mem;
  v10 = (__int64)Mem;
  v87 = Mem;
  p_lpMem = &lpMem;
  v88 = Mem;
  for ( i = &lpMem; ; p_lpMem = i )
  {
    v17 = v92;
    if ( (((char *)v92 - (_BYTE *)lpMem) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      break;
    v18 = *(v92 - 1);
    v19 = (v10 - (__int64)v15) >> 3;
    v20 = *(_QWORD *)(v18 + 80);
    v21 = *(_BYTE *)(v18 + 13429);
    v73 = v20;
    if ( !(((__int64)p_lpMem - v10) >> 3) )
    {
      if ( v19 + 1 < v19 )
        std::_Xoverflow_error((const char *)v11);
      v49 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v11,
              ((char *)p_lpMem - v15) >> 3,
              v19 + 1);
      v51 = 8 * v49;
      if ( !is_mul_ok(v49, 8uLL) )
        v51 = v50;
      *(_QWORD *)&v75 = operator new(v51);
      v52 = (_BYTE *)v75;
      *((_QWORD *)&v75 + 1) = v19;
      v76 = 0LL;
      v79 = v75;
      v80 = 0LL;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        v86,
        v87,
        v88,
        &v79);
      v53 = v87;
      v46 = v87 == Mem;
      v87 = v52;
      if ( v46 )
        v53 = 0LL;
      operator delete(v53);
      v15 = v87;
      v10 = (__int64)&v87[8 * v19];
      v88 = (_BYTE *)v10;
      i = (LPVOID *)&v87[8 * v49];
    }
    *((_QWORD *)&v68 + 1) = 1LL;
    v69 = 0LL;
    a4 = (v10 - (__int64)v15) >> 3;
    v81 = 0LL;
    a2 = a4 - v19;
    *(_QWORD *)&v68 = &v15[8 * a4];
    if ( !(_QWORD)v68 )
      goto LABEL_60;
    v81 = 1LL;
    v22 = ((v10 - (__int64)v15) >> 3) - v19;
    if ( a2 > 1 )
      v22 = 1LL;
    v70 = v68;
    v71 = 1LL;
    v11 = 8 * v22;
    v23 = v10 - v11;
    if ( v10 != v10 - v11 )
    {
      v54 = v70;
      v55 = v71;
      do
      {
        v10 -= 8LL;
        if ( !v54 )
          goto LABEL_60;
        if ( !v55 )
          goto LABEL_60;
        if ( (unsigned __int64)--v55 >= *((_QWORD *)&v70 + 1) )
          goto LABEL_60;
        v11 = *(_QWORD *)v10;
        *(_QWORD *)(v54 + 8 * v55) = *(_QWORD *)v10;
      }
      while ( v10 != v23 );
      v10 = (__int64)v88;
    }
    if ( a2 > 1 )
    {
      v69 = 0LL;
      *(_QWORD *)&v68 = v15;
      *((_QWORD *)&v68 + 1) = a4;
      v82 = 0LL;
      v56 = a4 < 0;
      if ( a4 )
      {
        if ( !v15 )
          goto LABEL_60;
        v56 = a4 < 0;
      }
      if ( v56 && a4 )
        goto LABEL_60;
      v82 = a4;
      v83 = v68;
      v84 = a4;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        v86,
        &v15[8 * v19],
        &v15[8 * a4 - 8],
        &v83);
      v10 = (__int64)v88;
    }
    v88 = (_BYTE *)(v10 + 8);
    *(_QWORD *)&v15[8 * v19] = *(v17 - 1);
    a2 = (unsigned __int64)v92;
    v24 = (unsigned __int64 *)lpMem;
    a4 = ((char *)v92 - (_BYTE *)lpMem - 8) >> 3;
    v11 = ((char *)v92 - (_BYTE *)lpMem) >> 3;
    v25 = a4 + 1;
    if ( a4 + 1 > v11 )
      std::_Xoverflow_error((const char *)v11);
    v6 = 0LL;
    *(_QWORD *)&v68 = lpMem;
    *((_QWORD *)&v68 + 1) = ((char *)v92 - (_BYTE *)lpMem) >> 3;
    v10 = (__int64)lpMem + 8 * v11;
    v69 = 0LL;
    if ( v25 != v11 )
    {
      v85 = v69;
      v57 = a4 < 0;
      if ( a4 )
      {
        if ( !lpMem )
          goto LABEL_60;
        v57 = a4 < 0;
      }
      if ( v57 && a4 || a4 > 0 && v11 < a4 )
        goto LABEL_60;
      v85 = ((char *)v92 - (_BYTE *)lpMem - 8) >> 3;
      v78 = v85;
      v77 = v68;
      std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
        v86,
        (char *)lpMem + 8 * v25,
        v10,
        &v77);
      a2 = (unsigned __int64)v92;
      v24 = (unsigned __int64 *)lpMem;
    }
    v14 = (unsigned __int64 *)(a2 - 8);
    v92 = v14;
    if ( !v21 )
    {
      while ( v24 != v14 )
      {
        if ( *(_QWORD *)(*v24 + 80) == __PAIR64__(HIDWORD(v73), v20) )
        {
          v58 = (unsigned __int64 *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                                      &v87,
                                      (v88 - v87) >> 3,
                                      v10);
          v67 = (COverlayContext *)v24;
          *v58 = *v24;
          v59 = (LPVOID *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
                            &lpMem,
                            &v72,
                            &v67);
          v14 = v92;
          v24 = (unsigned __int64 *)*v59;
        }
        else
        {
          ++v24;
        }
      }
    }
    v11 = (unsigned __int64)v87;
    v26 = (v88 - v87) >> 3;
    if ( v26 < 0 )
    {
      gsl::details::throw_exception<gsl::narrowing_error>(v87, v14, v10);
      __debugbreak();
    }
    *(_QWORD *)&v65 = (v88 - v87) >> 3;
    *((_QWORD *)&v65 + 1) = v87;
    if ( !v87 && v26 )
      goto LABEL_103;
    v27 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v65, v14, v10);
    v9 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x10Eu, 0LL);
      v10 = (__int64)v88;
      v15 = v87;
      goto LABEL_44;
    }
    v10 = (__int64)v88;
    v15 = v87;
    v11 = (v88 - v87) >> 3;
    if ( v11 )
    {
      v11 = -(__int64)v11;
      v10 = (__int64)&v88[8 * v11];
      v88 = (_BYTE *)v10;
    }
  }
  if ( *v7 )
  {
    v29 = (COverlayContext **)v7[1];
    v30 = *v7;
    v67 = (COverlayContext *)*((_QWORD *)*v29 + 1682);
    v31 = &v29[v30];
    v32 = (v30 * 8) >> 3;
    if ( v29 > v31 )
      v32 = 0LL;
    if ( v32 )
    {
      v33 = v67;
      do
      {
        v34 = *v29;
        v67 = v34;
        v35 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v34 + 1054);
        v36 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)v34 + 1055);
        while ( v35 != v36 )
        {
          if ( COverlayContext::IsRevokable(v34, v35) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v33 + 69) + 96LL))(
              *((_QWORD *)v33 + 69),
              CCommonRegistryData::m_dwOverlayDisqualifyInterval,
              0x10000LL);
            break;
          }
          v34 = v67;
          v35 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v35 + 256);
        }
        ++v29;
        ++v6;
      }
      while ( v6 != v32 );
      v10 = (__int64)v88;
      v15 = v87;
      v7 = v74;
    }
  }
LABEL_44:
  if ( v9 < 0 )
  {
    v60 = 0LL;
    v61 = (COverlayContext **)v7[1];
    v62 = *v7 & 0x1FFFFFFFFFFFFFFFLL;
    if ( v61 > &v61[*v7] )
      v62 = 0LL;
    if ( v62 )
    {
      do
      {
        COverlayContext::Reset(*v61);
        ++v60;
        ++v61;
      }
      while ( v60 != v62 );
      v10 = (__int64)v88;
      v15 = v87;
    }
  }
  if ( (v10 - (__int64)v15) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v87);
    v15 = v87;
  }
  v87 = 0LL;
  if ( v15 != Mem && v15 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v15);
  }
  v37 = ((char *)v92 - (_BYTE *)lpMem) >> 3;
  if ( v37 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL,
      v37,
      a4);
  v38 = lpMem;
  lpMem = 0LL;
  if ( v38 != v94 && v38 )
  {
    v64 = GetProcessHeap();
    HeapFree(v64, 0, v38);
  }
  return (unsigned int)v9;
}
