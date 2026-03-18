/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x18007FCD0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x180024820 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024980 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180025664 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180028BD0 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180080FA0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800816B4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180096F30 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E547C (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180176494 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180181404 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801819B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, char a2, __int64 a3)
{
  void *v3; // r10
  char v4; // r13
  signed int v6; // r15d
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rsi
  int *v10; // rbx
  char *v11; // r13
  int *v12; // rbx
  int *v13; // rdi
  int *v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  char v17; // al
  void *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // rbx
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned int v27; // edi
  char v28; // si
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // xmm4_4
  char v32; // dl
  signed int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  COcclusionContext *v36; // rdi
  __int64 v37; // rcx
  struct CDrawingContext **v38; // rsi
  struct CDrawingContext *v39; // rsi
  COcclusionContext *v40; // rcx
  __int64 v41; // rcx
  COverlayContext *v42; // rax
  struct COcclusionContext *v43; // r9
  const struct CDirtyRegion *v44; // r8
  const struct CVisualTree *v45; // rdx
  __int64 v46; // rcx
  char v47; // al
  __int64 v48; // rbx
  unsigned int v49; // edi
  __int64 v50; // rax
  _BYTE *v51; // rbx
  signed int v53; // eax
  __int64 v54; // rcx
  __int128 v55; // xmm1
  int v56; // eax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  unsigned __int64 v59; // rdi
  SIZE_T v60; // rax
  void *v61; // rcx
  bool v62; // zf
  __int64 v63; // r11
  __int64 v64; // r10
  bool v65; // sf
  unsigned int v66; // r8d
  __int64 v67; // rax
  CDirtyRegion *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  HANDLE ProcessHeap; // rax
  char v72; // [rsp+40h] [rbp-C0h]
  bool v73; // [rsp+41h] [rbp-BFh] BYREF
  char v74; // [rsp+42h] [rbp-BEh]
  char v75; // [rsp+43h] [rbp-BDh]
  __int128 v76; // [rsp+48h] [rbp-B8h]
  void *v77; // [rsp+58h] [rbp-A8h]
  __int64 v78[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int128 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-50h]
  __int64 v84; // [rsp+D0h] [rbp-30h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int128 v86; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v87; // [rsp+100h] [rbp+0h]
  _OWORD v88[4]; // [rsp+110h] [rbp+10h] BYREF
  int v89; // [rsp+150h] [rbp+50h]
  _BYTE v90[24]; // [rsp+160h] [rbp+60h] BYREF
  LPVOID lpMem; // [rsp+178h] [rbp+78h]
  _BYTE *v92; // [rsp+180h] [rbp+80h]
  char *v93; // [rsp+188h] [rbp+88h]
  _BYTE v94[128]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v95; // [rsp+210h] [rbp+110h] BYREF

  v3 = 0LL;
  v75 = a2;
  v73 = 0;
  lpMem = v94;
  v4 = a2;
  v92 = v94;
  v6 = 0;
  v93 = (char *)&v95;
  v74 = 0;
  v72 = 0;
  if ( !*((_QWORD *)this - 6) || !*((_DWORD *)this + 8) )
    goto LABEL_74;
  v7 = 0;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v7);
    if ( (*(_DWORD *)(v8 + 428) & 0x10000) != 0 )
      v73 = 1;
    if ( !v4 )
      goto LABEL_39;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
    if ( !v9 )
    {
      v3 = 0LL;
      goto LABEL_39;
    }
    v10 = *(int **)(*((_QWORD *)this + 1) + 8LL * v7);
    v11 = (char *)(v10 + 55);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v10 + 248LL))(v10)
      || *(_BYTE *)(*((_QWORD *)v10 + 2) + 1274LL) )
    {
      v12 = (int *)(*((_QWORD *)v10 + 21) + 120LL);
    }
    else
    {
      v12 = v10 + 117;
    }
    v13 = *(int **)(*((_QWORD *)this + 1) + 8LL * v7);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v13 + 248LL))(v13)
      || *(_BYTE *)(*((_QWORD *)v13 + 2) + 1274LL) )
    {
      v14 = (int *)(*((_QWORD *)v13 + 21) + 104LL);
    }
    else
    {
      v14 = v13 + 121;
    }
    v6 = 0;
    if ( (__int64)(*(_QWORD *)(v9 + 200) - *(_QWORD *)(v9 + 192)) >> 8 )
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        v9 + 192,
        0LL);
    *(float *)(v9 + 56) = (float)*v14;
    *(float *)(v9 + 60) = (float)v14[1];
    *(float *)(v9 + 64) = (float)v14[2];
    *(float *)(v9 + 68) = (float)v14[3];
    *(float *)(v9 + 24) = (float)*v12;
    *(float *)(v9 + 28) = (float)v12[1];
    *(float *)(v9 + 32) = (float)v12[2];
    *(float *)(v9 + 36) = (float)v12[3];
    *(_DWORD *)(v9 + 72) = v12[2] - *v12;
    *(_DWORD *)(v9 + 76) = v12[3] - v12[1];
    if ( g_DisplayManager )
    {
      v15 = *((_DWORD *)g_DisplayManager + 18);
      v16 = 0;
      if ( v15 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)g_DisplayManager + 6) + 8LL * v16) + 312LL) )
        {
          if ( ++v16 >= v15 )
            goto LABEL_20;
        }
LABEL_82:
        v17 = 0;
        goto LABEL_23;
      }
    }
LABEL_20:
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 13456) + 64LL) + 100LL) || !*(_QWORD *)(v9 + 16) )
      goto LABEL_82;
    v17 = 1;
LABEL_23:
    *(_BYTE *)(v9 + 13432) = v17;
    **(_DWORD **)(v9 + 13312) = 0;
    v18 = *(void **)(v9 + 13384);
    *(_DWORD *)(v9 + 13408) = 0;
    if ( v18 != *(void **)(v9 + 13392) )
    {
      operator delete(v18);
      *(_QWORD *)(v9 + 13384) = *(_QWORD *)(v9 + 13392);
      *(_DWORD *)(v9 + 13404) = *(_DWORD *)(v9 + 13400);
    }
    *(_BYTE *)(v9 + 13448) = 1;
    *(_OWORD *)(v9 + 12816) = *(_OWORD *)v11;
    *(_OWORD *)(v9 + 12832) = *((_OWORD *)v11 + 1);
    *(_OWORD *)(v9 + 12848) = *((_OWORD *)v11 + 2);
    *(_OWORD *)(v9 + 12864) = *((_OWORD *)v11 + 3);
    *(_DWORD *)(v9 + 12880) = *((_DWORD *)v11 + 16);
    if ( (unsigned __int8)CMILMatrix::IsIdentity<0>(v11) )
    {
      *(_OWORD *)(v9 + 12884) = _xmm;
      *(_WORD *)(v9 + 12948) = 32085;
      *(_OWORD *)(v9 + 12900) = _xmm;
      *(_OWORD *)(v9 + 12916) = _xmm;
      *(_OWORD *)(v9 + 12932) = _xmm;
    }
    else
    {
      v89 = (int)v3;
      if ( CMILMatrix::SetToInverse((CMILMatrix *)v88, (const struct CMILMatrix *)v11) )
      {
        v55 = v88[1];
        v56 = v89;
        *(_OWORD *)(v9 + 12884) = v88[0];
        v57 = v88[2];
        *(_OWORD *)(v9 + 12900) = v55;
        v58 = v88[3];
        *(_OWORD *)(v9 + 12916) = v57;
        *(_OWORD *)(v9 + 12932) = v58;
        *(_DWORD *)(v9 + 12948) = v56;
      }
      else
      {
        v6 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980007, 0x164u, v3);
        v3 = 0LL;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
        *(unsigned __int8 *)(v9 + 13432));
      v3 = 0LL;
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, 0x82Au, v3);
      goto LABEL_139;
    }
    if ( *(_BYTE *)(v9 + 13432) )
    {
      v19 = v92;
      v20 = (__int64)v93;
      v21 = lpMem;
      v22 = (v92 - (_BYTE *)lpMem) >> 3;
      if ( !((v93 - v92) >> 3) )
      {
        if ( v22 + 1 < v22 )
          std::_Xoverflow_error(0LL);
        v59 = detail::liberal_expansion_policy::expand(0LL, (v93 - (_BYTE *)lpMem) >> 3, v22 + 1);
        v60 = 8 * v59;
        if ( !is_mul_ok(v59, 8uLL) )
          v60 = -1LL;
        v79 = 0LL;
        v78[0] = (__int64)operator new(v60);
        v78[1] = v22;
        v83 = 0LL;
        v82 = *(_OWORD *)v78;
        std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
          v90,
          lpMem,
          v92,
          &v82);
        v61 = lpMem;
        v62 = lpMem == v94;
        lpMem = (LPVOID)v78[0];
        if ( v62 )
          v61 = 0LL;
        operator delete(v61);
        v21 = lpMem;
        v3 = 0LL;
        v19 = (char *)lpMem + 8 * v22;
        v92 = v19;
        v93 = (char *)lpMem + 8 * v59;
      }
      v77 = v3;
      a3 = ((char *)v19 - v21) >> 3;
      *((_QWORD *)&v76 + 1) = 1LL;
      v23 = a3 - v22;
      v84 = (__int64)v3;
      v8 = (__int64)&v21[8 * a3];
      *(_QWORD *)&v76 = v8;
      if ( !v8 )
        goto LABEL_111;
      v84 = 1LL;
      v24 = (((char *)v19 - v21) >> 3) - v22;
      if ( v23 > 1 )
        v24 = 1LL;
      v80 = v76;
      v81 = 1LL;
      v20 = 8 * v24;
      v8 = (__int64)v19 - v20;
      if ( v19 != (_QWORD *)((char *)v19 - v20) )
      {
        v63 = v80;
        v64 = v81;
        do
        {
          --v19;
          if ( !v63 )
            goto LABEL_111;
          if ( !v64 )
            goto LABEL_111;
          if ( (unsigned __int64)--v64 >= *((_QWORD *)&v80 + 1) )
            goto LABEL_111;
          v20 = *v19;
          *(_QWORD *)(v63 + 8 * v64) = *v19;
        }
        while ( v19 != (_QWORD *)v8 );
        v19 = v92;
        v3 = 0LL;
      }
      if ( v23 > 1 )
      {
        v77 = v3;
        *(_QWORD *)&v76 = v21;
        *((_QWORD *)&v76 + 1) = a3;
        v85 = (__int64)v3;
        v65 = a3 < 0;
        if ( a3 )
        {
          if ( !v21 )
            goto LABEL_111;
          v65 = a3 < 0;
        }
        if ( v65 && a3 )
        {
LABEL_111:
          _o__invalid_parameter_noinfo_noreturn(v8, v20);
          JUMPOUT(0x1801201CDLL);
        }
        v85 = a3;
        v86 = v76;
        v87 = a3;
        std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
          v90,
          &v21[8 * v22],
          &v21[8 * a3 - 8],
          &v86);
        v19 = v92;
        v3 = 0LL;
      }
      v92 = v19 + 1;
      *(_QWORD *)&v21[8 * v22] = v9;
    }
    v4 = v75;
LABEL_39:
    ++v7;
  }
  while ( v7 < *((_DWORD *)this + 8) );
  if ( !v73 )
    goto LABEL_78;
  v25 = *((_QWORD *)this + 33);
  if ( *(_BYTE *)(v25 + 2883) )
    goto LABEL_44;
  if ( !*(_BYTE *)(v25 + 2886) )
  {
    v66 = (unsigned int)v3;
    while ( IsEmpty((const struct D2D_RECT_F *)(16LL * v66 + v25 + 24)) )
    {
      v66 = a3 + 1;
      if ( v66 >= 8 )
        goto LABEL_78;
    }
LABEL_44:
    v26 = *((_QWORD *)this - 19);
    v27 = (unsigned int)v3;
    if ( *(_DWORD *)(*(_QWORD *)(v26 + 64) + 100LL) && *(_DWORD *)(v26 + 1000) )
    {
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v26 + 976) + 8LL * v27);
        v67 = *(_QWORD *)(v8 + 16);
        if ( v67 )
        {
          *(_BYTE *)(v67 + 94) |= 8u;
          ++v27;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v26 + 976, v27);
        }
      }
      while ( v27 < *(_DWORD *)(v26 + 1000) );
      v3 = 0LL;
    }
    v28 = 1;
    v72 = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xq(v8, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)this - 168, 0LL);
      v3 = 0LL;
    }
    if ( !*((_QWORD *)this + 34) )
    {
      v6 = COcclusionContext::Create(*((struct CComposition **)this - 19), (struct COcclusionContext **)this + 34);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v6, 0x842u, 0LL);
        v3 = 0LL;
        goto LABEL_73;
      }
      v3 = 0LL;
    }
    v29 = (v92 - (_BYTE *)lpMem) >> 3;
    if ( v29 < 0 )
    {
      gsl::details::throw_exception<gsl::narrowing_error>(v29, v25, a3);
      JUMPOUT(0x1800816ACLL);
    }
    v78[0] = (v92 - (_BYTE *)lpMem) >> 3;
    v78[1] = (__int64)lpMem;
    if ( !lpMem && v29 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v30 = *((_QWORD *)this + 33);
    v31 = 0;
    v32 = *(_BYTE *)(v30 + 2883);
    if ( !v32
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30 + 2876) - 1.0)) & _xmm) >= 0.0000011920929
       || *(_BYTE *)(v30 + 2885)) )
    {
      v31 = *(_DWORD *)(v30 + 2876);
    }
    v33 = COcclusionContext::Compute(*((COcclusionContext **)this + 34), v31, 0, (struct CMILMatrix *)v3, (__int64)v78);
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v33, 0x852u, 0LL);
      SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 34);
    }
    v3 = 0LL;
    v6 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xq(v34, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)this - 168, 0LL);
      v3 = 0LL;
    }
    goto LABEL_57;
  }
  if ( *(_DWORD *)(v25 + 1276) )
    goto LABEL_44;
LABEL_78:
  v28 = 0;
LABEL_57:
  v35 = (unsigned int)v3;
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_72;
  while ( 2 )
  {
    v36 = (COcclusionContext *)*((_QWORD *)this + 34);
    v37 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v35);
    v38 = (struct CDrawingContext **)(v37 + 112);
    if ( !*(_QWORD *)(v37 + 112) )
    {
      v53 = CDrawingContext::Create(*(struct CComposition **)(v37 + 16), v38);
      if ( v53 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v53, 0x3Du, 0LL);
      v3 = 0LL;
    }
    v39 = *v38;
    v40 = (COcclusionContext *)*((_QWORD *)v39 + 785);
    if ( v36 != v40 && v40 )
    {
      COcclusionContext::`scalar deleting destructor'(v40);
      v3 = 0LL;
      *((_QWORD *)v39 + 785) = 0LL;
    }
    *((_QWORD *)v39 + 784) = v36;
    if ( !v36 )
      *((_BYTE *)v39 + 6347) = 0;
    v6 = (int)v3;
    if ( !v4 )
      goto LABEL_68;
    v41 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v35);
    v42 = (COverlayContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 264LL))(v41);
    if ( !v42 )
    {
      v3 = 0LL;
      goto LABEL_68;
    }
    v43 = (struct COcclusionContext *)*((_QWORD *)this + 34);
    v44 = (const struct CDirtyRegion *)*((_QWORD *)this + 33);
    v45 = (const struct CVisualTree *)*((_QWORD *)this - 6);
    v73 = 0;
    v6 = COverlayContext::EndOverlayCandidateCollection(v42, v45, v44, v43, &v73);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v6, 0x878u, 0LL);
LABEL_133:
      v3 = 0LL;
      goto LABEL_71;
    }
    v3 = 0LL;
    if ( v73 )
    {
      v47 = 1;
      v74 = 1;
    }
    else
    {
LABEL_68:
      v47 = v74;
    }
    if ( ++v35 < *((_DWORD *)this + 8) )
      continue;
    break;
  }
  if ( v47 )
  {
    v68 = (CDirtyRegion *)*((_QWORD *)this + 33);
    if ( !*((_BYTE *)v68 + 2883) )
    {
      CDirtyRegion::SetFullDirty(v68);
      v6 = CDesktopRenderTarget::CalculateOcclusion(this, 0);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v6, 0x88Au, 0LL);
      goto LABEL_133;
    }
  }
LABEL_71:
  v28 = v72;
LABEL_72:
  if ( v28 )
  {
LABEL_73:
    v48 = *((_QWORD *)this - 19);
    v49 = (unsigned int)v3;
    if ( *(_DWORD *)(*(_QWORD *)(v48 + 64) + 100LL) && *(_DWORD *)(v48 + 1000) )
    {
      do
      {
        v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 976) + 8LL * v49) + 16LL);
        if ( v70 )
        {
          *(_BYTE *)(v70 + 94) &= ~8u;
          ++v49;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v48 + 976, v49);
        }
      }
      while ( v49 < *(_DWORD *)(v48 + 1000) );
LABEL_139:
      v3 = 0LL;
    }
  }
LABEL_74:
  v50 = (v92 - (_BYTE *)lpMem) >> 3;
  if ( v50 )
    v92 -= 8 * v50;
  v51 = lpMem;
  lpMem = v3;
  if ( v51 != v94 && v51 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v51);
  }
  return (unsigned int)v6;
}
