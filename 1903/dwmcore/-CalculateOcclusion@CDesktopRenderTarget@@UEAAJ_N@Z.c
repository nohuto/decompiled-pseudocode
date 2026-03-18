/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180055830 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180046F24 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180053AB4 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180054DD0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061BF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5338 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800CBC8C (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E45CC (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180177C04 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180182B04 (--$uninitialized_copy@V-$move_iterator@PEAPEBVCRenderingTechniqueFragment@@@std@@V-$checked_arra.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801830B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, __int64 a2)
{
  void *v2; // r10
  char v3; // r13
  int v5; // r15d
  unsigned int v6; // r12d
  char *v7; // rcx
  __int64 v8; // rsi
  int *v9; // rbx
  char *v10; // r13
  int *v11; // rbx
  int *v12; // rdi
  int *v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  char v16; // al
  void *v17; // rcx
  _QWORD *v18; // rax
  _BYTE *v19; // rbx
  unsigned __int64 v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned int v25; // edi
  char v26; // si
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // xmm4_4
  char v30; // dl
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  COcclusionContext *v35; // rdi
  __int64 v36; // rcx
  struct CDrawingContext **v37; // rsi
  struct CDrawingContext *v38; // rsi
  COcclusionContext *v39; // rcx
  __int64 v40; // rcx
  COverlayContext *v41; // rax
  struct COcclusionContext *v42; // r9
  const struct CDirtyRegion *v43; // r8
  unsigned __int64 v44; // rdx
  unsigned int v45; // ecx
  char v46; // al
  __int64 v47; // rbx
  unsigned int v48; // edi
  __int64 v49; // rax
  _BYTE *v50; // rbx
  int v52; // eax
  unsigned int v53; // ecx
  __int128 v54; // xmm1
  int v55; // eax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  unsigned __int64 v58; // rdi
  SIZE_T v59; // rax
  void *v60; // rcx
  bool v61; // zf
  __int64 v62; // r11
  __int64 v63; // r10
  bool v64; // sf
  unsigned int v65; // r8d
  int v66; // r8d
  __int64 v67; // rax
  unsigned int v68; // edx
  CDirtyRegion *v69; // rcx
  unsigned int v70; // ecx
  __int64 v71; // rax
  HANDLE ProcessHeap; // rax
  char v73; // [rsp+40h] [rbp-C0h]
  bool v74; // [rsp+41h] [rbp-BFh] BYREF
  char v75; // [rsp+42h] [rbp-BEh]
  char v76; // [rsp+43h] [rbp-BDh]
  __int128 v77; // [rsp+48h] [rbp-B8h]
  void *v78; // [rsp+58h] [rbp-A8h]
  __int64 v79[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int128 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  __int128 v83; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-50h]
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+E8h] [rbp-18h]
  __int128 v87; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h]
  _OWORD v89[4]; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+150h] [rbp+50h]
  _BYTE v91[24]; // [rsp+160h] [rbp+60h] BYREF
  LPVOID lpMem; // [rsp+178h] [rbp+78h]
  _BYTE *v93; // [rsp+180h] [rbp+80h]
  char *v94; // [rsp+188h] [rbp+88h]
  _BYTE v95[128]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v96; // [rsp+210h] [rbp+110h] BYREF

  v2 = 0LL;
  v76 = a2;
  v74 = 0;
  lpMem = v95;
  v3 = a2;
  v93 = v95;
  v5 = 0;
  v94 = (char *)&v96;
  v75 = 0;
  v73 = 0;
  if ( !*((_QWORD *)this - 6) || !*((_DWORD *)this + 8) )
    goto LABEL_76;
  v6 = 0;
  do
  {
    v7 = *(char **)(*((_QWORD *)this + 1) + 8LL * v6);
    if ( (*((_DWORD *)v7 + 107) & 0x10000) != 0 )
      v74 = 1;
    if ( !v3 )
      goto LABEL_39;
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 264LL))(v7);
    if ( !v8 )
    {
      v2 = 0LL;
      goto LABEL_39;
    }
    v9 = *(int **)(*((_QWORD *)this + 1) + 8LL * v6);
    v10 = (char *)(v9 + 55);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v9 + 248LL))(v9)
      || *(_BYTE *)(*((_QWORD *)v9 + 2) + 1274LL) )
    {
      v11 = (int *)(*((_QWORD *)v9 + 21) + 120LL);
    }
    else
    {
      v11 = v9 + 117;
    }
    v12 = *(int **)(*((_QWORD *)this + 1) + 8LL * v6);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v12 + 248LL))(v12)
      || *(_BYTE *)(*((_QWORD *)v12 + 2) + 1274LL) )
    {
      v13 = (int *)(*((_QWORD *)v12 + 21) + 104LL);
    }
    else
    {
      v13 = v12 + 121;
    }
    v5 = 0;
    if ( (__int64)(*(_QWORD *)(v8 + 200) - *(_QWORD *)(v8 + 192)) >> 8 )
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        v8 + 192,
        0LL);
    *(float *)(v8 + 56) = (float)*v13;
    *(float *)(v8 + 60) = (float)v13[1];
    *(float *)(v8 + 64) = (float)v13[2];
    *(float *)(v8 + 68) = (float)v13[3];
    *(float *)(v8 + 24) = (float)*v11;
    *(float *)(v8 + 28) = (float)v11[1];
    *(float *)(v8 + 32) = (float)v11[2];
    *(float *)(v8 + 36) = (float)v11[3];
    *(_DWORD *)(v8 + 72) = v11[2] - *v11;
    *(_DWORD *)(v8 + 76) = v11[3] - v11[1];
    if ( g_DisplayManager )
    {
      v14 = *((_DWORD *)g_DisplayManager + 18);
      v15 = 0;
      if ( v14 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)g_DisplayManager + 6) + 8LL * v15) + 312LL) )
        {
          if ( ++v15 >= v14 )
            goto LABEL_20;
        }
LABEL_84:
        v16 = 0;
        goto LABEL_23;
      }
    }
LABEL_20:
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 13456) + 64LL) + 100LL) || !*(_QWORD *)(v8 + 16) )
      goto LABEL_84;
    v16 = 1;
LABEL_23:
    *(_BYTE *)(v8 + 13432) = v16;
    **(_DWORD **)(v8 + 13312) = 0;
    v17 = *(void **)(v8 + 13384);
    *(_DWORD *)(v8 + 13408) = 0;
    if ( v17 != *(void **)(v8 + 13392) )
    {
      operator delete(v17);
      *(_QWORD *)(v8 + 13384) = *(_QWORD *)(v8 + 13392);
      *(_DWORD *)(v8 + 13404) = *(_DWORD *)(v8 + 13400);
    }
    *(_BYTE *)(v8 + 13448) = 1;
    *(_OWORD *)(v8 + 12816) = *(_OWORD *)v10;
    *(_OWORD *)(v8 + 12832) = *((_OWORD *)v10 + 1);
    *(_OWORD *)(v8 + 12848) = *((_OWORD *)v10 + 2);
    *(_OWORD *)(v8 + 12864) = *((_OWORD *)v10 + 3);
    *(_DWORD *)(v8 + 12880) = *((_DWORD *)v10 + 16);
    if ( (unsigned __int8)CMILMatrix::IsIdentity<0>(v10) )
    {
      *(_OWORD *)(v8 + 12884) = _xmm;
      *(_WORD *)(v8 + 12948) = 32085;
      *(_OWORD *)(v8 + 12900) = _xmm;
      *(_OWORD *)(v8 + 12916) = _xmm;
      *(_OWORD *)(v8 + 12932) = _xmm;
    }
    else
    {
      v90 = (int)v2;
      if ( CMILMatrix::SetToInverse((CMILMatrix *)v89, (const struct CMILMatrix *)v10) )
      {
        v54 = v89[1];
        v55 = v90;
        *(_OWORD *)(v8 + 12884) = v89[0];
        v56 = v89[2];
        *(_OWORD *)(v8 + 12900) = v54;
        v57 = v89[3];
        *(_OWORD *)(v8 + 12916) = v56;
        *(_OWORD *)(v8 + 12932) = v57;
        *(_DWORD *)(v8 + 12948) = v55;
      }
      else
      {
        v5 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2003304441, 0x164u, v2);
        v2 = 0LL;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
        *(unsigned __int8 *)(v8 + 13432));
      v2 = 0LL;
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v5, 0x82Au, v2);
      goto LABEL_141;
    }
    if ( *(_BYTE *)(v8 + 13432) )
    {
      v18 = v93;
      a2 = (__int64)v94;
      v19 = lpMem;
      v20 = (v93 - (_BYTE *)lpMem) >> 3;
      if ( !((v94 - v93) >> 3) )
      {
        if ( v20 + 1 < v20 )
          std::_Xoverflow_error(0LL);
        v58 = detail::liberal_expansion_policy::expand(0LL, (v94 - (_BYTE *)lpMem) >> 3, v20 + 1);
        v59 = 8 * v58;
        if ( !is_mul_ok(v58, 8uLL) )
          v59 = -1LL;
        v80 = 0LL;
        v79[0] = (__int64)operator new(v59);
        v79[1] = v20;
        v84 = 0LL;
        v83 = *(_OWORD *)v79;
        std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment const * *>,stdext::checked_array_iterator<CRenderingTechniqueFragment const * *>>(
          v91,
          lpMem,
          v93,
          &v83);
        v60 = lpMem;
        v61 = lpMem == v95;
        lpMem = (LPVOID)v79[0];
        if ( v61 )
          v60 = 0LL;
        operator delete(v60);
        v19 = lpMem;
        v2 = 0LL;
        v18 = (char *)lpMem + 8 * v20;
        v93 = v18;
        v94 = (char *)lpMem + 8 * v58;
      }
      v78 = v2;
      v21 = ((char *)v18 - v19) >> 3;
      *((_QWORD *)&v77 + 1) = 1LL;
      v22 = v21 - v20;
      v85 = (__int64)v2;
      v7 = &v19[8 * v21];
      *(_QWORD *)&v77 = v7;
      if ( !v7 )
        goto LABEL_113;
      v85 = 1LL;
      v23 = (((char *)v18 - v19) >> 3) - v20;
      if ( v22 > 1 )
        v23 = 1LL;
      v81 = v77;
      v82 = 1LL;
      a2 = 8 * v23;
      v7 = (char *)v18 - a2;
      if ( v18 != (_QWORD *)((char *)v18 - a2) )
      {
        v62 = v81;
        v63 = v82;
        do
        {
          --v18;
          if ( !v62 )
            goto LABEL_113;
          if ( !v63 )
            goto LABEL_113;
          if ( (unsigned __int64)--v63 >= *((_QWORD *)&v81 + 1) )
            goto LABEL_113;
          a2 = *v18;
          *(_QWORD *)(v62 + 8 * v63) = *v18;
        }
        while ( v18 != (_QWORD *)v7 );
        v18 = v93;
        v2 = 0LL;
      }
      if ( v22 > 1 )
      {
        v78 = v2;
        *(_QWORD *)&v77 = v19;
        *((_QWORD *)&v77 + 1) = v21;
        v86 = (__int64)v2;
        v64 = v21 < 0;
        if ( v21 )
        {
          if ( !v19 )
            goto LABEL_113;
          v64 = v21 < 0;
        }
        if ( v64 && v21 )
        {
LABEL_113:
          _o__invalid_parameter_noinfo_noreturn(v7, a2, v21, v22);
          JUMPOUT(0x18010FC55LL);
        }
        v86 = v21;
        v87 = v77;
        v88 = v21;
        std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
          v91,
          &v19[8 * v20],
          &v19[8 * v21 - 8],
          &v87);
        v18 = v93;
        v2 = 0LL;
      }
      v93 = v18 + 1;
      *(_QWORD *)&v19[8 * v20] = v8;
    }
    v3 = v76;
LABEL_39:
    ++v6;
  }
  while ( v6 < *((_DWORD *)this + 8) );
  if ( !v74 )
    goto LABEL_80;
  a2 = *((_QWORD *)this + 33);
  if ( *(_BYTE *)(a2 + 2883) )
    goto LABEL_44;
  if ( !*(_BYTE *)(a2 + 2886) )
  {
    v65 = (unsigned int)v2;
    while ( IsEmpty((const struct D2D_RECT_F *)(16LL * v65 + a2 + 24)) )
    {
      v65 = v66 + 1;
      if ( v65 >= 8 )
        goto LABEL_80;
    }
LABEL_44:
    v24 = *((_QWORD *)this - 19);
    v25 = (unsigned int)v2;
    if ( *(_DWORD *)(*(_QWORD *)(v24 + 64) + 100LL) && *(_DWORD *)(v24 + 1000) )
    {
      do
      {
        v7 = *(char **)(*(_QWORD *)(v24 + 976) + 8LL * v25);
        v67 = *((_QWORD *)v7 + 2);
        if ( v67 )
        {
          *(_BYTE *)(v67 + 94) |= 8u;
          ++v25;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v24 + 976, v25);
        }
      }
      while ( v25 < *(_DWORD *)(v24 + 1000) );
      v2 = 0LL;
    }
    v26 = 1;
    v73 = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xq(v7, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)this - 168, 0LL);
      v2 = 0LL;
    }
    if ( !*((_QWORD *)this + 34) )
    {
      v5 = COcclusionContext::Create(*((struct CComposition **)this - 19), (struct COcclusionContext **)this + 34);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v5, 0x842u, 0LL);
        v2 = 0LL;
        goto LABEL_75;
      }
      v2 = 0LL;
    }
    v27 = (v93 - (_BYTE *)lpMem) >> 3;
    if ( v27 < 0 )
    {
      gsl::details::throw_exception<gsl::narrowing_error>();
      JUMPOUT(0x18005581CLL);
    }
    v79[0] = (v93 - (_BYTE *)lpMem) >> 3;
    v79[1] = (__int64)lpMem;
    if ( !lpMem && v27 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v28 = *((_QWORD *)this + 33);
    v29 = 0;
    v30 = *(_BYTE *)(v28 + 2883);
    if ( !v30
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v28 + 2876) - 1.0)) & _xmm) >= 0.0000011920929
       || *(_BYTE *)(v28 + 2885)) )
    {
      v29 = *(_DWORD *)(v28 + 2876);
    }
    v31 = 2860LL;
    if ( !v30 )
      v31 = 1116LL;
    v32 = COcclusionContext::Compute(
            *((COcclusionContext **)this + 34),
            *((_QWORD *)this - 6),
            *(_DWORD *)(v28 + 1276),
            (struct D2D_RECT_F *)(v28 + v31),
            v29,
            0,
            (struct CMILMatrix *)v2,
            v79);
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v32, 0x852u, 0LL);
      SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 34, v68);
    }
    v2 = 0LL;
    v5 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0xq(v33, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)this - 168, 0LL);
      v2 = 0LL;
    }
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 1276) )
    goto LABEL_44;
LABEL_80:
  v26 = 0;
LABEL_59:
  v34 = (unsigned int)v2;
  if ( !*((_DWORD *)this + 8) )
    goto LABEL_74;
  while ( 2 )
  {
    v35 = (COcclusionContext *)*((_QWORD *)this + 34);
    v36 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v34);
    v37 = (struct CDrawingContext **)(v36 + 112);
    if ( !*(_QWORD *)(v36 + 112) )
    {
      v52 = CDrawingContext::Create(*(struct CComposition **)(v36 + 16), v37);
      if ( v52 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v52, 0x3Du, 0LL);
      v2 = 0LL;
    }
    v38 = *v37;
    v39 = (COcclusionContext *)*((_QWORD *)v38 + 785);
    if ( v35 != v39 && v39 )
    {
      COcclusionContext::`scalar deleting destructor'(v39, (unsigned __int8)a2);
      v2 = 0LL;
      *((_QWORD *)v38 + 785) = 0LL;
    }
    *((_QWORD *)v38 + 784) = v35;
    if ( !v35 )
      *((_BYTE *)v38 + 6347) = 0;
    v5 = (int)v2;
    if ( !v3 )
      goto LABEL_70;
    v40 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v34);
    v41 = (COverlayContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 264LL))(v40);
    if ( !v41 )
    {
      v2 = 0LL;
      goto LABEL_70;
    }
    v42 = (struct COcclusionContext *)*((_QWORD *)this + 34);
    v43 = (const struct CDirtyRegion *)*((_QWORD *)this + 33);
    v44 = *((_QWORD *)this - 6);
    v74 = 0;
    v5 = COverlayContext::EndOverlayCandidateCollection(v41, v44, v43, v42, &v74);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v5, 0x878u, 0LL);
LABEL_135:
      v2 = 0LL;
      goto LABEL_73;
    }
    v2 = 0LL;
    if ( v74 )
    {
      v46 = 1;
      v75 = 1;
    }
    else
    {
LABEL_70:
      v46 = v75;
    }
    if ( ++v34 < *((_DWORD *)this + 8) )
      continue;
    break;
  }
  if ( v46 )
  {
    v69 = (CDirtyRegion *)*((_QWORD *)this + 33);
    if ( !*((_BYTE *)v69 + 2883) )
    {
      CDirtyRegion::SetFullDirty(v69);
      v5 = CDesktopRenderTarget::CalculateOcclusion(this, 0);
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v5, 0x88Au, 0LL);
      goto LABEL_135;
    }
  }
LABEL_73:
  v26 = v73;
LABEL_74:
  if ( v26 )
  {
LABEL_75:
    v47 = *((_QWORD *)this - 19);
    v48 = (unsigned int)v2;
    if ( *(_DWORD *)(*(_QWORD *)(v47 + 64) + 100LL) && *(_DWORD *)(v47 + 1000) )
    {
      do
      {
        v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 976) + 8LL * v48) + 16LL);
        if ( v71 )
        {
          *(_BYTE *)(v71 + 94) &= ~8u;
          ++v48;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v47 + 976, v48);
        }
      }
      while ( v48 < *(_DWORD *)(v47 + 1000) );
LABEL_141:
      v2 = 0LL;
    }
  }
LABEL_76:
  v49 = (v93 - (_BYTE *)lpMem) >> 3;
  if ( v49 )
    v93 -= 8 * v49;
  v50 = lpMem;
  lpMem = v2;
  if ( v50 != v95 && v50 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v50);
  }
  return (unsigned int)v5;
}
