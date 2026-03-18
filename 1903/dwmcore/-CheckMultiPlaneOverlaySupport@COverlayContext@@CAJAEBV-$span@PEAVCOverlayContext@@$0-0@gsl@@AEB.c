/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180184BD8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092EC4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180039EF8 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180183958 (--A-$span@PEAVCOverlayContext@@$0-0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180186284 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180186310 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180187458 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180187858 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     McTemplateU0dd @ 0x1801883A4 (McTemplateU0dd.c)
 *     McTemplateU0xqddddddddddddqqq @ 0x18018893C (McTemplateU0xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 *v3; // r9
  unsigned int v4; // r13d
  _BYTE *v5; // r15
  _QWORD *v6; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // r8
  __int64 v9; // r10
  __int64 *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // edx
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // r14
  unsigned int v19; // r9d
  __int64 v20; // r15
  __int64 v21; // rsi
  unsigned int i; // r8d
  __int64 v23; // rcx
  struct IDXGIResource **v24; // rbx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int DXGIResource; // eax
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int128 v33; // xmm0
  _BYTE *v34; // r8
  COverlayContext::OverlayPlaneInfo **v35; // rbx
  _QWORD *v36; // r15
  signed int v37; // edx
  unsigned __int64 v38; // rdx
  char *v39; // rcx
  COverlayContext::OverlayPlaneInfo *v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // r8
  _DWORD *v43; // rbx
  __int64 v44; // rax
  _BYTE *v45; // r9
  signed int v46; // eax
  __int64 v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r9
  COverlayContext::OverlayPlaneInfo **v53; // rcx
  __int64 v54; // r8
  COverlayContext::OverlayPlaneInfo **v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rsi
  _QWORD *v58; // rbx
  char v60[4]; // [rsp+A0h] [rbp-80h] BYREF
  signed int v61; // [rsp+A4h] [rbp-7Ch] BYREF
  int v62; // [rsp+A8h] [rbp-78h]
  void *lpMem; // [rsp+B0h] [rbp-70h]
  char *v64; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v65; // [rsp+C0h] [rbp-60h]
  CD3DSurface *v66; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int8 *v67; // [rsp+D0h] [rbp-50h]
  __int64 v68; // [rsp+D8h] [rbp-48h]
  __int64 *v69; // [rsp+E0h] [rbp-40h]
  _QWORD *v70; // [rsp+E8h] [rbp-38h]
  __int64 v71; // [rsp+F0h] [rbp-30h]
  COverlayContext::OverlayPlaneInfo **v72; // [rsp+F8h] [rbp-28h] BYREF
  _BYTE *v73; // [rsp+100h] [rbp-20h]
  __int64 *v74; // [rsp+108h] [rbp-18h]
  _BYTE v75[128]; // [rsp+110h] [rbp-10h] BYREF
  __int64 v76; // [rsp+190h] [rbp+70h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v4 = *(_DWORD *)a2;
  v5 = a3;
  v67 = a3;
  v6 = (_QWORD *)a1;
  v7 = 0;
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  v68 = a2;
  v70 = (_QWORD *)a1;
  v60[0] = 0;
  v10 = &v3[v8];
  v62 = 0;
  v11 = (v8 * 8) >> 3;
  v66 = 0LL;
  if ( v3 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *v3;
      ++v9;
      ++v3;
      a1 = *(_QWORD *)(v12 + 12560) - *(_QWORD *)(v12 + 12552);
      a2 = a1 / 120;
      v4 += a1 / 120;
    }
    while ( v9 != v11 );
    v5 = v67;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0dd(a1, a2, CCommonRegistryData::m_dwOverlayTestMode < 4, v4);
  v13 = v4;
  *v5 = 0;
  v71 = v4;
  lpMem = operator new(saturated_mul(v4, 0x90uLL));
  v16 = (char *)lpMem;
  if ( !lpMem )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x8007000E, 0x991u, 0LL);
    goto LABEL_70;
  }
  v17 = (__int64 *)v6[1];
  v69 = &v17[*v6];
  if ( v17 != v69 )
  {
    while ( 1 )
    {
      v18 = *v17;
      v72 = (COverlayContext::OverlayPlaneInfo **)v75;
      v73 = v75;
      v74 = &v76;
      COverlayContext::GetContextCandidates(v18, v68, &v72);
      v19 = 0;
      v20 = (v73 - (_BYTE *)v72) >> 3;
      if ( v20 && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v72) )
      {
        LODWORD(v21) = v19;
      }
      else
      {
        LODWORD(v20) = v19;
        v21 = (*(_QWORD *)(v18 + 12560) - *(_QWORD *)(v18 + 12552)) / 120LL;
      }
      for ( i = v19; ; i = (_DWORD)v64 + 1 )
      {
        v23 = *(_QWORD *)(v18 + 12560) - *(_QWORD *)(v18 + 12552);
        LODWORD(v64) = i;
        if ( i >= (unsigned int)(v23 / 120) )
          break;
        LODWORD(v65) = i + v20;
        v24 = (struct IDXGIResource **)&v16[144 * v62 + 144 * i + 144 * (unsigned int)v20];
        memset_0(v24, 0, 0x90uLL);
        v25 = (*(__int64 (__fastcall **)(_QWORD, CD3DSurface **))(**(_QWORD **)(v18 + 16) + 536LL))(
                *(_QWORD *)(v18 + 16),
                &v66);
        v7 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x9C1u, 0LL);
          goto LABEL_48;
        }
        DXGIResource = CD3DSurface::GetDXGIResource(v66, v24 + 1);
        v61 = DXGIResource;
        v29 = DXGIResource;
        if ( DXGIResource < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, DXGIResource, 0x9C3u, 0LL);
        TranslateDXGIorD3DErrorInContext(v29, 14, &v61);
        v7 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v61, 0x9C9u, 0LL);
LABEL_48:
          v53 = v72;
          v54 = (v73 - (_BYTE *)v72) >> 3;
          if ( v54 )
          {
            detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
              &v72,
              0LL,
              v54,
              v52);
            v53 = v72;
          }
          v72 = 0LL;
          if ( v53 == (COverlayContext::OverlayPlaneInfo **)v75 )
            v53 = 0LL;
          operator delete(v53);
          v36 = lpMem;
          goto LABEL_64;
        }
        *((_DWORD *)v24 + 7) = 0;
        v31 = 120LL * (unsigned int)v64;
        v32 = *(_QWORD *)(v18 + 12552);
        *((_OWORD *)v24 + 2) = *(_OWORD *)(v31 + v32);
        *((_OWORD *)v24 + 3) = *(_OWORD *)(v31 + v32 + 16);
        *((_OWORD *)v24 + 4) = *(_OWORD *)(v31 + v32 + 32);
        *((_OWORD *)v24 + 5) = *(_OWORD *)(v31 + v32 + 48);
        *((_OWORD *)v24 + 6) = *(_OWORD *)(v31 + v32 + 64);
        *((_OWORD *)v24 + 7) = *(_OWORD *)(v31 + v32 + 80);
        v33 = *(_OWORD *)(v31 + v32 + 96);
        *(_DWORD *)v24 = v65;
        *((_OWORD *)v24 + 8) = v33;
        *((_DWORD *)v24 + 4) = *(_DWORD *)(v18 + 96);
        ReleaseInterface<CD3DSurface>((__int64 *)&v66);
        v16 = (char *)lpMem;
      }
      v34 = v73;
      v35 = v72;
      if ( (v73 - (_BYTE *)v72) >> 3 )
        break;
LABEL_26:
      v42 = (v34 - (_BYTE *)v35) >> 3;
      v62 += v42 + (*(_DWORD *)(v18 + 12560) - *(_DWORD *)(v18 + 12552)) / 120;
      if ( v42 )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v72,
          0LL,
          v42,
          0LL);
        v35 = v72;
      }
      v72 = 0LL;
      if ( v35 == (COverlayContext::OverlayPlaneInfo **)v75 )
        v35 = 0LL;
      operator delete(v35);
      v16 = (char *)lpMem;
      if ( ++v17 == v69 )
      {
        v6 = v70;
        v5 = v67;
        v13 = v4;
        goto LABEL_32;
      }
    }
    v36 = lpMem;
    v37 = v21;
    v61 = v21;
    v65 = 0LL;
    while ( 1 )
    {
      v64 = (char *)&v36[18 * (unsigned int)(v37 + v62)];
      memset_0(v64, 0, 0x90uLL);
      if ( (int)COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                  *((struct CCompositionSurfaceInfo **)v35[v65] + 3),
                  (struct IDXGIResource **)v64 + 1,
                  (unsigned int *)v64 + 7) < 0 )
        break;
      v38 = v65;
      v35 = v72;
      v34 = v73;
      v39 = v64;
      *(_QWORD *)(v64 + 20) = *(_QWORD *)(*((_QWORD *)v72[v65] + 3) + 40LL);
      *((_DWORD *)v39 + 7) = 0;
      v40 = v35[v38];
      LODWORD(v38) = v61;
      *((_OWORD *)v39 + 2) = *(_OWORD *)((char *)v40 + 40);
      *((_OWORD *)v39 + 3) = *(_OWORD *)((char *)v40 + 56);
      *((_OWORD *)v39 + 4) = *(_OWORD *)((char *)v40 + 72);
      *((_OWORD *)v39 + 5) = *(_OWORD *)((char *)v40 + 88);
      *((_OWORD *)v39 + 6) = *(_OWORD *)((char *)v40 + 104);
      *((_OWORD *)v39 + 7) = *(_OWORD *)((char *)v40 + 120);
      v41 = *(_OWORD *)((char *)v40 + 136);
      *(_DWORD *)v39 = v38;
      v37 = v38 + 1;
      v61 = v37;
      *((_OWORD *)v39 + 8) = v41;
      *((_DWORD *)v39 + 4) = *(_DWORD *)(v18 + 96);
      v65 = (unsigned int)(v37 - v21);
      if ( v65 >= (v34 - (_BYTE *)v35) >> 3 )
        goto LABEL_26;
    }
    v55 = v72;
    v56 = (v73 - (_BYTE *)v72) >> 3;
    if ( v56 )
    {
      detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
        &v72,
        0LL,
        v56,
        0LL);
      v55 = v72;
    }
    v72 = 0LL;
    if ( v55 == (COverlayContext::OverlayPlaneInfo **)v75 )
      v55 = 0LL;
    operator delete(v55);
    goto LABEL_64;
  }
LABEL_32:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v4 )
  {
    v43 = v16 + 88;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xqddddddddddddqqq(
          v15,
          v14,
          *((_QWORD *)v43 - 10),
          *(v43 - 14),
          *(v43 - 13),
          *(v43 - 12),
          *(v43 - 11),
          *(v43 - 10),
          *(v43 - 9),
          *(v43 - 8),
          *(v43 - 7),
          *(v43 - 6),
          *(v43 - 5),
          *(v43 - 4),
          *(v43 - 3),
          *(v43 - 2),
          *(v43 - 1),
          *v43,
          v43[5]);
      v43 += 36;
      --v13;
    }
    while ( v13 );
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
      *v5 = 1;
    v36 = lpMem;
    goto LABEL_62;
  }
  v44 = gsl::span<COverlayContext *,-1>::operator[](v6);
  v45 = v5;
  v36 = lpMem;
  v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _BYTE *, char *))(**(_QWORD **)(*(_QWORD *)v44 + 16LL) + 456LL))(
          *(_QWORD *)(*(_QWORD *)v44 + 16LL),
          v4,
          lpMem,
          v45,
          v60);
  v7 = v46;
  if ( v46 >= 0 )
  {
    if ( v60[0] )
    {
      v48 = (__int64 *)v6[1];
      v49 = 0LL;
      v50 = *v6 & 0x1FFFFFFFFFFFFFFFLL;
      if ( v48 > &v48[*v6] )
        v50 = 0LL;
      if ( v50 )
      {
        do
        {
          v51 = *v48;
          ++v49;
          ++v48;
          *(_BYTE *)(v51 + 13445) = 1;
        }
        while ( v49 != v50 );
      }
    }
LABEL_62:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, *v67);
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xA14u, 0LL);
LABEL_64:
  if ( v4 )
  {
    v57 = v71;
    v58 = v36 + 1;
    do
    {
      if ( *v58 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 16LL))(*v58);
      v58 += 18;
      --v57;
    }
    while ( v57 );
  }
  operator delete(v36);
LABEL_70:
  if ( v66 )
    (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v66 + 8LL))(v66);
  return v7;
}
