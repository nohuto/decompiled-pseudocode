/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180169BEC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800713A0 (--9details@gsl@@YA_NV-$span_iterator@V-$span@PEBUShaderLinkingBody@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180094484 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     MIDL_user_free @ 0x1800BAE70 (MIDL_user_free.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE290 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18016B3E4 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x18016B488 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18016C5F0 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0dd @ 0x18016CF18 (McTemplateU0dd.c)
 *     McTemplateU0xqddddddddddddqqq @ 0x18016D4B0 (McTemplateU0xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned __int64 a1, unsigned int *a2, _BYTE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned int *v6; // rbx
  _BYTE *v7; // r12
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  char *v14; // r13
  __int128 v15; // xmm6
  int v16; // edx
  gsl::details *v17; // rcx
  __int64 v18; // r15
  _BYTE *v19; // r8
  __int64 v20; // r10
  _BYTE *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rcx
  unsigned int v25; // r9d
  struct IDXGIResource **v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  int DXGIResource; // eax
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rcx
  int v38; // ecx
  int *v39; // r12
  int SingleDXGIResourceAndSubResourceIndex; // eax
  unsigned __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // r8
  COverlayContext::OverlayPlaneInfo **v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  _DWORD *v49; // rbx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int128 v53; // xmm6
  __int64 v54; // rsi
  _QWORD *v55; // rbx
  char v57[4]; // [rsp+A8h] [rbp-80h] BYREF
  int v58; // [rsp+ACh] [rbp-7Ch] BYREF
  int v59; // [rsp+B0h] [rbp-78h]
  __int128 v60; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v61; // [rsp+C8h] [rbp-60h]
  unsigned int v62; // [rsp+CCh] [rbp-5Ch]
  __int128 v63; // [rsp+D8h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+E8h] [rbp-40h]
  __int128 v65; // [rsp+F8h] [rbp-30h] BYREF
  CD3DSurface *v66[2]; // [rsp+108h] [rbp-20h] BYREF
  __int128 v67; // [rsp+118h] [rbp-10h] BYREF
  __int128 v68; // [rsp+128h] [rbp+0h] BYREF
  unsigned int *v69; // [rsp+138h] [rbp+10h]
  COverlayContext::OverlayPlaneInfo **v70; // [rsp+140h] [rbp+18h] BYREF
  _BYTE *v71; // [rsp+148h] [rbp+20h]
  __int64 *v72; // [rsp+150h] [rbp+28h]
  _BYTE v73[128]; // [rsp+158h] [rbp+30h] BYREF
  __int64 v74; // [rsp+1D8h] [rbp+B0h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = *a2;
  v65 = a1;
  v6 = a2;
  *(_QWORD *)&v60 = a1;
  v7 = a3;
  *((_QWORD *)&v60 + 1) = v3;
  v8 = 0;
  v69 = a2;
  v63 = v60;
  v67 = a1;
  *(_QWORD *)&v68 = a3;
  v57[0] = 0;
  v59 = 0;
  v66[0] = 0LL;
  v62 = v4;
  if ( gsl::details::operator!=(&v67, &v63) )
  {
    v63 = v60;
    do
    {
      v11 = gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&v65);
      v4 += (*(_QWORD *)(*(_QWORD *)v11 + 12560LL) - *(_QWORD *)(*(_QWORD *)v11 + 12552LL)) / 120LL;
      gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v65);
      v67 = v65;
    }
    while ( gsl::details::operator!=(&v67, &v63) );
    v62 = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0dd(v10, v9, CCommonRegistryData::m_dwOverlayTestMode < 4, v4);
  *v7 = 0;
  v12 = v4;
  *(_QWORD *)&v67 = v4;
  v14 = (char *)operator new(saturated_mul(v4, 0x90uLL));
  if ( !v14 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x98Eu);
    goto LABEL_70;
  }
  *((_QWORD *)&v60 + 1) = *(_QWORD *)a1;
  *(_QWORD *)&v60 = a1;
  v15 = v60;
  v63 = a1;
  v65 = a1;
  if ( gsl::details::operator!=(&v65, &v60) )
  {
    v60 = v15;
    while ( 1 )
    {
      v18 = *(_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&v63);
      v70 = (COverlayContext::OverlayPlaneInfo **)v73;
      v71 = v73;
      v72 = &v74;
      COverlayContext::GetContextCandidates(v18, v6, &v70);
      v19 = v71;
      v20 = 0LL;
      v21 = v70;
      v22 = (v71 - (_BYTE *)v70) >> 3;
      if ( !v22 )
        goto LABEL_14;
      if ( COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v70) )
      {
        LODWORD(v23) = v20;
      }
      else
      {
LABEL_14:
        LODWORD(v22) = v20;
        v23 = (*(_QWORD *)(v18 + 12560) - *(_QWORD *)(v18 + 12552)) / 120LL;
      }
      v24 = *(_QWORD *)(v18 + 12560) - *(_QWORD *)(v18 + 12552);
      v25 = v20;
      v61 = v20;
      if ( (unsigned int)(v24 / 120) )
        break;
LABEL_22:
      if ( (v19 - v21) >> 3 )
      {
        v38 = v23;
        v64 = v20;
        v58 = v23;
        while ( 1 )
        {
          v39 = (int *)&v14[144 * (v38 + v59)];
          memset_0(v39, 0, 0x90uLL);
          SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                    *(struct CCompositionSurfaceInfo **)(*(_QWORD *)&v21[8 * v64] + 24LL),
                                                    (struct IDXGIResource **)v39 + 1,
                                                    (unsigned int *)v39 + 7);
          v20 = 0LL;
          if ( SingleDXGIResourceAndSubResourceIndex < 0 )
            break;
          v41 = v64;
          v21 = v70;
          v19 = v71;
          v42 = v58;
          *(_QWORD *)(v39 + 5) = *(_QWORD *)(*((_QWORD *)v70[v64] + 3) + 40LL);
          v39[7] = 0;
          v43 = *(_QWORD *)&v21[8 * v41];
          *((_OWORD *)v39 + 2) = *(_OWORD *)(v43 + 40);
          *((_OWORD *)v39 + 3) = *(_OWORD *)(v43 + 56);
          *((_OWORD *)v39 + 4) = *(_OWORD *)(v43 + 72);
          *((_OWORD *)v39 + 5) = *(_OWORD *)(v43 + 88);
          *((_OWORD *)v39 + 6) = *(_OWORD *)(v43 + 104);
          *((_OWORD *)v39 + 7) = *(_OWORD *)(v43 + 120);
          v44 = *(_OWORD *)(v43 + 136);
          *v39 = v42;
          v38 = v42 + 1;
          v58 = v38;
          *((_OWORD *)v39 + 8) = v44;
          v39[4] = *(_DWORD *)(v18 + 96);
          v64 = (unsigned int)(v38 - v23);
          if ( v64 >= (v19 - v21) >> 3 )
            goto LABEL_26;
        }
        v46 = v70;
        v48 = (v71 - (_BYTE *)v70) >> 3;
        if ( v48 )
        {
          detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&v70,
            0LL,
            v48);
          v46 = v70;
        }
        v70 = 0LL;
        if ( v46 == (COverlayContext::OverlayPlaneInfo **)v73 )
          v46 = 0LL;
LABEL_38:
        WPF::ProcessHeapImpl::Free(v46);
        goto LABEL_64;
      }
LABEL_26:
      v45 = (v19 - v21) >> 3;
      v59 += v45 + (*(_DWORD *)(v18 + 12560) - *(_DWORD *)(v18 + 12552)) / 120;
      if ( v45 )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v70,
          0LL,
          v45);
        v21 = v70;
        v20 = 0LL;
      }
      v70 = (COverlayContext::OverlayPlaneInfo **)v20;
      if ( v21 == v73 )
        v21 = (_BYTE *)v20;
      WPF::ProcessHeapImpl::Free(v21);
      gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v63);
      v65 = v63;
      if ( !gsl::details::operator!=(&v65, &v60) )
      {
        v4 = v62;
        v12 = v67;
        v7 = (_BYTE *)v68;
        goto LABEL_45;
      }
      v6 = v69;
    }
    while ( 1 )
    {
      LODWORD(v64) = v25 + v22;
      v26 = (struct IDXGIResource **)&v14[144 * v59 + 144 * v25 + 144 * (unsigned int)v22];
      *(_QWORD *)&v65 = v26;
      memset_0(v26, 0, 0x90uLL);
      v27 = (*(__int64 (__fastcall **)(_QWORD, CD3DSurface **))(**(_QWORD **)(v18 + 16) + 528LL))(
              *(_QWORD *)(v18 + 16),
              v66);
      v8 = v27;
      if ( v27 < 0 )
        break;
      DXGIResource = CD3DSurface::GetDXGIResource(v66[0], v26 + 1);
      v58 = DXGIResource;
      v31 = DXGIResource;
      if ( DXGIResource < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, DXGIResource, 0x9C0u);
      TranslateDXGIorD3DErrorInContext(v31, 14, &v58);
      v8 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v58, 0x9C6u);
        goto LABEL_34;
      }
      v33 = v65;
      v34 = 120LL * v61;
      *(_DWORD *)(v65 + 28) = 0;
      v35 = *(_QWORD *)(v18 + 12552);
      *(_OWORD *)(v33 + 32) = *(_OWORD *)(v34 + v35);
      *(_OWORD *)(v33 + 48) = *(_OWORD *)(v34 + v35 + 16);
      *(_OWORD *)(v33 + 64) = *(_OWORD *)(v34 + v35 + 32);
      *(_OWORD *)(v33 + 80) = *(_OWORD *)(v34 + v35 + 48);
      *(_OWORD *)(v33 + 96) = *(_OWORD *)(v34 + v35 + 64);
      *(_OWORD *)(v33 + 112) = *(_OWORD *)(v34 + v35 + 80);
      v36 = *(_OWORD *)(v34 + v35 + 96);
      *(_DWORD *)v33 = v64;
      *(_OWORD *)(v33 + 128) = v36;
      *(_DWORD *)(v33 + 16) = *(_DWORD *)(v18 + 96);
      ReleaseInterface<CD3DSurface>((__int64 *)v66);
      v25 = v61 + 1;
      v37 = *(_QWORD *)(v18 + 12560) - *(_QWORD *)(v18 + 12552);
      v61 = v25;
      if ( v25 >= (unsigned int)(v37 / 120) )
      {
        v19 = v71;
        v20 = 0LL;
        v21 = v70;
        goto LABEL_22;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x9BEu);
LABEL_34:
    v46 = v70;
    v47 = (v71 - (_BYTE *)v70) >> 3;
    if ( v47 )
    {
      detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v70,
        0LL,
        v47);
      v46 = v70;
    }
    v70 = 0LL;
    if ( v46 == (COverlayContext::OverlayPlaneInfo **)v73 )
      v46 = 0LL;
    goto LABEL_38;
  }
LABEL_45:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v4 )
  {
    v49 = v14 + 88;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xqddddddddddddqqq(
          (_DWORD)v17,
          v16,
          *((_QWORD *)v49 - 10),
          *(v49 - 14),
          *(v49 - 13),
          *(v49 - 12),
          *(v49 - 11),
          *(v49 - 10),
          *(v49 - 9),
          *(v49 - 8),
          *(v49 - 7),
          *(v49 - 6),
          *(v49 - 5),
          *(v49 - 4),
          *(v49 - 3),
          *(v49 - 2),
          *(v49 - 1),
          *v49,
          v49[5]);
      v49 += 36;
      --v12;
    }
    while ( v12 );
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
      *v7 = 1;
    goto LABEL_62;
  }
  if ( *(__int64 *)a1 <= 0 )
  {
    gsl::details::terminate(v17);
    JUMPOUT(0x18016A448LL);
  }
  v50 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16LL);
  v51 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _BYTE *, char *))(*(_QWORD *)v50 + 448LL))(
          v50,
          v4,
          v14,
          v7,
          v57);
  v8 = v51;
  if ( v51 >= 0 )
  {
    if ( v57[0] )
    {
      *((_QWORD *)&v60 + 1) = *(_QWORD *)a1;
      *(_QWORD *)&v60 = a1;
      v53 = v60;
      v63 = a1;
      v68 = a1;
      if ( gsl::details::operator!=(&v68, &v60) )
      {
        v60 = v53;
        do
        {
          *(_BYTE *)(*(_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&v63)
                   + 13429LL) = 1;
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v63);
          v68 = v63;
        }
        while ( gsl::details::operator!=(&v68, &v60) );
      }
    }
LABEL_62:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CHECKSUPPORT_Stop,
        (unsigned __int8)*v7);
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0xA11u);
LABEL_64:
  if ( v62 )
  {
    v54 = v67;
    v55 = v14 + 8;
    do
    {
      if ( *v55 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 16LL))(*v55);
      v55 += 18;
      --v54;
    }
    while ( v54 );
  }
  MIDL_user_free(v14);
LABEL_70:
  if ( v66[0] )
    (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v66[0] + 8LL))(v66[0]);
  return v8;
}
