/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18004D064 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z @ 0x18016A8F8 (-DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x18016B488 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18016C5F0 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801BC5DC (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COverlayContext::SetMultiplaneOverlayPresentInfo(COverlayContext *this)
{
  __int64 v2; // r12
  _DWORD *v3; // rsi
  unsigned __int64 v4; // r15
  void *v5; // r13
  __int64 v6; // kr00_8
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  char v9; // al
  int v10; // r13d
  SIZE_T v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // eax
  _DWORD *v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int128 v18; // xmm0
  enum DXGI_COLOR_SPACE_TYPE v19; // r14d
  float v20; // xmm0_4
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // r13
  int v25; // r14d
  unsigned int v26; // r12d
  unsigned int v27; // r9d
  __int64 v28; // r8
  char *v29; // r9
  int v30; // r10d
  unsigned int v31; // r14d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // r12d
  __int64 v35; // r8
  char *i; // r9
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // r9d
  unsigned int v43; // ecx
  int v44; // r8d
  int v45; // r12d
  unsigned int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm0
  __int64 v53; // r14
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v55; // rcx
  char v56; // r9
  char v57; // r8
  int v58; // r10d
  __int64 v59; // rdx
  bool v60; // cf
  __int64 v61; // rcx
  bool v62; // r8
  int SingleDXGIResourceAndSubResourceIndex; // eax
  unsigned int v64; // ecx
  __int64 v65; // rax
  unsigned int v66; // r12d
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // r8d
  char v72; // r9
  unsigned int v73; // ecx
  _DWORD *v74; // rax
  unsigned int v75; // ecx
  _DWORD *v76; // rax
  __int64 v77; // rcx
  bool v78; // al
  unsigned int v79; // r8d
  int v80; // r9d
  __int64 v81; // r10
  __int64 v82; // r11
  __int64 v83; // xmm1_8
  __int64 v84; // r11
  __int64 v85; // rax
  unsigned __int64 v86; // r10
  char *v87; // rcx
  __int128 v88; // xmm0
  _QWORD *v89; // rbx
  __int64 v90; // r14
  unsigned int v91; // [rsp+28h] [rbp-69h]
  unsigned int v92; // [rsp+28h] [rbp-69h]
  bool v93; // [rsp+48h] [rbp-49h]
  unsigned int v94; // [rsp+4Ch] [rbp-45h]
  unsigned int v95; // [rsp+4Ch] [rbp-45h]
  bool v96; // [rsp+50h] [rbp-41h]
  unsigned int v97; // [rsp+54h] [rbp-3Dh]
  LPVOID v98; // [rsp+58h] [rbp-39h]
  int v99; // [rsp+60h] [rbp-31h]
  __int64 v100; // [rsp+60h] [rbp-31h]
  unsigned int v101; // [rsp+68h] [rbp-29h]
  int v102; // [rsp+70h] [rbp-21h]
  unsigned int v103; // [rsp+78h] [rbp-19h]
  int v104; // [rsp+80h] [rbp-11h]
  _DWORD *v105; // [rsp+88h] [rbp-9h]
  struct CBitmapRealization *v106; // [rsp+90h] [rbp-1h]
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = (__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8;
  v3 = 0LL;
  v97 = 0;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 1570) - *((_QWORD *)this + 1569);
  v105 = 0LL;
  v98 = 0LL;
  v101 = v2;
  v99 = 0;
  v103 = 0;
  v7 = v6 / 120;
  v104 = v7;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( !(_DWORD)v2 && !*((_BYTE *)this + 13423) )
  {
    v9 = *((_BYTE *)this + 13418);
    if ( v9 )
    {
      *((_BYTE *)this + 13419) = 1;
    }
    else
    {
      v10 = 1;
      if ( *((_DWORD *)this + 3351) > 1u )
        v10 = *((_DWORD *)this + 3351);
      LODWORD(v5) = *((_DWORD *)this + 3350) + v10;
      v99 = (int)v5;
      v11 = 136LL * (unsigned int)v5;
      if ( !is_mul_ok((unsigned int)v5, 0x88uLL) )
        v11 = -1LL;
      if ( !v11 )
        v11 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
      v3 = v12;
      if ( !v12 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      memset_0(v12, 0, 136LL * (unsigned int)v5);
      v13 = 0;
      if ( (_DWORD)v5 )
      {
        v14 = v3;
        do
        {
          *v14 = v13++;
          v14 += 34;
        }
        while ( v13 < (unsigned int)v5 );
      }
      *(_QWORD *)(v3 + 7) = 0LL;
      v3[1] = 1;
      v15 = (float)(*((float *)this + 12) - *((float *)this + 10)) + 6291456.25;
      v3[9] = (int)(LODWORD(v15) << 10) >> 11;
      v16 = *((float *)this + 13) - *((float *)this + 11);
      *(_QWORD *)(v3 + 19) = 1LL;
      v3[24] = 0;
      v17 = v16 + 6291456.25;
      v3[10] = (int)(LODWORD(v17) << 10) >> 11;
      v18 = *(_OWORD *)(v3 + 7);
      *(_OWORD *)(v3 + 11) = v18;
      *(_OWORD *)(v3 + 15) = v18;
      v3[25] = *((_DWORD *)this + 25);
      v3[26] = 0;
      v3[30] = 2;
      v19 = *((_DWORD *)this + 25);
      v20 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - 1.0)) & _xmm) < 0.0000011920929
        || IsDXGIColorSpaceHDR(v19) )
      {
        v21 = 0;
      }
      else
      {
        v21 = (int)(float)(v20 * 80.0);
      }
      v3[32] = v21;
      if ( (unsigned int)v5 > 1 || !*((_BYTE *)this + 13420) )
        *((_BYTE *)this + 13417) = 1;
      v9 = *((_BYTE *)this + 13418);
      v104 = 1;
      *(_WORD *)((char *)this + 13419) = 256;
    }
    goto LABEL_19;
  }
  v96 = (_DWORD)v7 != 0;
  v38 = 1;
  if ( *((_DWORD *)this + 3351) > 1u )
    v38 = *((_DWORD *)this + 3351);
  v39 = 1;
  if ( (unsigned int)v7 > 1 )
    v39 = v7;
  v40 = *((_DWORD *)this + 3350) + v38;
  v41 = v2 + v39;
  if ( v41 <= v40 )
    v41 = v40;
  v4 = v41;
  v3 = operator new(saturated_mul(v41, 0x88uLL));
  if ( !v3 )
  {
    v91 = 2714;
LABEL_56:
    v42 = -2147024882;
    v34 = -2147024882;
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v42, v91);
    goto LABEL_33;
  }
  v105 = operator new(saturated_mul(v4, 4uLL));
  if ( !v105 )
  {
    v91 = 2717;
    goto LABEL_56;
  }
  v98 = operator new(saturated_mul(v4, 8uLL));
  if ( !v98 )
  {
    v34 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024882, 0xAA0u);
    goto LABEL_151;
  }
  memset_0(v3, 0, 136 * v4);
  memset_0(v98, 0, 8 * v4);
  if ( (_DWORD)v2
    && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 1054)) )
  {
    v44 = v2;
    v45 = 0;
  }
  else
  {
    v44 = 0;
    v45 = 1;
    if ( (unsigned int)v7 > 1 )
      v45 = v7;
  }
  if ( (_DWORD)v7 )
  {
    v46 = 0;
    v47 = 0LL;
    do
    {
      v48 = (unsigned int)v5;
      LODWORD(v5) = (_DWORD)v5 + 1;
      v49 = 34 * v48;
      LODWORD(v48) = v46 + v44;
      ++v46;
      v3[v49 + 4] = 0;
      v3[v49] = v48;
      v3[v49 + 1] = 1;
      v50 = *((_QWORD *)this + 1569);
      v51 = *(_OWORD *)(v47 + v50);
      v47 += 120LL;
      *(_OWORD *)&v3[v49 + 6] = v51;
      *(_OWORD *)&v3[v49 + 10] = *(_OWORD *)(v47 + v50 - 104);
      *(_OWORD *)&v3[v49 + 14] = *(_OWORD *)(v47 + v50 - 88);
      *(_OWORD *)&v3[v49 + 18] = *(_OWORD *)(v47 + v50 - 72);
      *(_OWORD *)&v3[v49 + 22] = *(_OWORD *)(v47 + v50 - 56);
      *(_OWORD *)&v3[v49 + 26] = *(_OWORD *)(v47 + v50 - 40);
      v52 = *(_OWORD *)(v47 + v50 - 24);
      *(_QWORD *)&v3[v49 + 2] = 0LL;
      *(_OWORD *)&v3[v49 + 30] = v52;
    }
    while ( v46 < (unsigned int)v7 );
    v99 = (int)v5;
  }
  else
  {
    v3[1] = 0;
    *((_QWORD *)v3 + 1) = 0LL;
    v3[4] = 0;
    LODWORD(v5) = 1;
    *v3 = v44;
    v99 = 1;
  }
  if ( v101 )
  {
    v53 = 0LL;
    v102 = -v45;
    do
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v53 + *((_QWORD *)this + 1054) + 24));
      v55 = *((_QWORD *)this + 1054);
      v56 = 0;
      v57 = 0;
      v106 = RenderingRealizationNoRef;
      v93 = 0;
      v58 = *((_DWORD *)RenderingRealizationNoRef + 69);
      v59 = *(_QWORD *)(v53 + v55 + 24);
      if ( *(_BYTE *)(v53 + v55 + 224) && (*(int *)(v59 + 76) < 3 || !*(_BYTE *)(v53 + v55 + 225))
        || *(_DWORD *)(v53 + v55 + 228) != v45 )
      {
        v57 = 1;
      }
      if ( *((_BYTE *)this + 13421)
        || v57
        || *(_BYTE *)(v53 + v55 + 236)
        || *(_DWORD *)(v53 + v55 + 240) != *(_DWORD *)(v59 + 72) && *(int *)(v59 + 76) < 3 )
      {
        v56 = 1;
        v93 = 1;
        *((_BYTE *)this + 13417) = 1;
      }
      v60 = CCommonRegistryData::m_dwOverlayTestMode < 3;
      *(_DWORD *)(v53 + v55 + 204) = v58;
      *(_DWORD *)(v53 + *((_QWORD *)this + 1054) + 228) = v45;
      *(_BYTE *)(v53 + *((_QWORD *)this + 1054) + 224) = 0;
      *(_BYTE *)(v53 + *((_QWORD *)this + 1054) + 236) = v56;
      *(_DWORD *)(v53 + *((_QWORD *)this + 1054) + 240) = *(_DWORD *)(*(_QWORD *)(v53 + *((_QWORD *)this + 1054) + 24)
                                                                    + 72LL);
      if ( v60 )
      {
        if ( v57
          || (v61 = *((_QWORD *)this + 1054), *(_DWORD *)(*(_QWORD *)(v53 + v61 + 24) + 76LL) == -1)
          || *((_BYTE *)this + 13421) )
        {
          v61 = *((_QWORD *)this + 1054);
          v62 = 0;
        }
        else
        {
          v62 = 1;
        }
        v94 = v45 + v102;
        SingleDXGIResourceAndSubResourceIndex = COverlayContext::EnsureIndependentFlipState(
                                                  this,
                                                  (struct COverlayContext::OverlayPlaneInfo *)(v61
                                                                                             + ((unsigned __int64)(unsigned int)(v45 + v102) << 8)),
                                                  v62,
                                                  0);
        v97 = SingleDXGIResourceAndSubResourceIndex;
        if ( SingleDXGIResourceAndSubResourceIndex < 0 )
        {
          v92 = 2840;
LABEL_63:
          v34 = SingleDXGIResourceAndSubResourceIndex;
          MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, SingleDXGIResourceAndSubResourceIndex, v92);
          goto LABEL_151;
        }
        v56 = v93;
      }
      else
      {
        v94 = v45 + v102;
      }
      if ( v56 )
      {
        v100 = 34LL * (unsigned int)v5;
        v3[v100] = v45;
        v3[v100 + 1] = 1;
        SingleDXGIResourceAndSubResourceIndex = COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                                                  *(struct CCompositionSurfaceInfo **)(v53
                                                                                     + *((_QWORD *)this + 1054)
                                                                                     + 24),
                                                  (struct IDXGIResource **)&v3[v100 + 2],
                                                  &v3[v100 + 4]);
        v97 = SingleDXGIResourceAndSubResourceIndex;
        if ( SingleDXGIResourceAndSubResourceIndex < 0 )
        {
          v92 = 2853;
          goto LABEL_63;
        }
        v65 = *((_QWORD *)this + 1054);
        *(_OWORD *)&v3[v100 + 6] = *(_OWORD *)(v53 + v65 + 40);
        *(_OWORD *)&v3[v100 + 10] = *(_OWORD *)(v53 + v65 + 56);
        *(_OWORD *)&v3[v100 + 14] = *(_OWORD *)(v53 + v65 + 72);
        *(_OWORD *)&v3[v100 + 18] = *(_OWORD *)(v53 + v65 + 88);
        *(_OWORD *)&v3[v100 + 22] = *(_OWORD *)(v53 + v65 + 104);
        *(_OWORD *)&v3[v100 + 26] = *(_OWORD *)(v53 + v65 + 120);
        *(_OWORD *)&v3[v100 + 30] = *(_OWORD *)(v53 + v65 + 136);
        *((_QWORD *)v98 + (unsigned int)v5) = v106;
        COverlayContext::DbgSaveOverlayPlaneNeedsPresent(this, v94, v93);
        LODWORD(v5) = (_DWORD)v5 + 1;
        v99 = (int)v5;
      }
      else
      {
        v105[v103++] = v45;
      }
      ++v45;
      v53 += 256LL;
    }
    while ( v45 + v102 < v101 );
    v66 = v101;
    v67 = 0LL;
    v68 = v101;
    do
    {
      v69 = *((_QWORD *)this + 1054);
      if ( *(_BYTE *)(v67 + v69 + 236) && !*((_BYTE *)this + 13418) )
        *(_BYTE *)(v67 + v69 + 236) = 0;
      v67 += 256LL;
      --v68;
    }
    while ( v68 );
    LODWORD(v7) = v104;
  }
  else
  {
    v66 = 0;
  }
  v8 = 0LL;
  v70 = 1;
  if ( (unsigned int)v7 > 1 )
    v70 = v7;
  v71 = v70 + v66;
  if ( v70 + v66 < (unsigned int)v4 )
  {
    while ( 1 )
    {
      v72 = 0;
      v73 = 0;
      if ( (_DWORD)v5 )
      {
        v74 = v3;
        while ( *v74 != (_DWORD)v8 )
        {
          ++v73;
          v74 += 34;
          if ( v73 >= (unsigned int)v5 )
            goto LABEL_118;
        }
        v8 = (unsigned int)(v8 + 1);
        v72 = 1;
      }
LABEL_118:
      v75 = 0;
      if ( v103 )
      {
        v76 = v105;
        while ( *v76 != (_DWORD)v8 )
        {
          ++v75;
          ++v76;
          if ( v75 >= v103 )
            goto LABEL_124;
        }
        v8 = (unsigned int)(v8 + 1);
        v72 = 1;
      }
LABEL_124:
      if ( !v72 )
      {
        ++v71;
        v77 = 34LL * (unsigned int)v5;
        LODWORD(v5) = (_DWORD)v5 + 1;
        v3[v77 + 1] = 0;
        v3[v77] = v8;
        *((_BYTE *)this + 13417) = 1;
        if ( v71 >= (unsigned int)v4 )
          break;
      }
    }
    LODWORD(v7) = v104;
    v99 = (int)v5;
  }
  v78 = (unsigned int)v5 <= 1 && !*((_BYTE *)this + 13420) && !(_DWORD)v7;
  *((_BYTE *)this + 13419) = v78;
  v9 = *((_BYTE *)this + 13418);
  if ( !v9 )
    *((_BYTE *)this + 13420) = v96;
  *((_BYTE *)this + 13421) = 0;
LABEL_19:
  if ( !*((_BYTE *)this + 13419) && !v9 )
  {
    v22 = *((_QWORD *)this + 1054);
    v23 = *((_QWORD *)this + 1055);
    v24 = (_DWORD)v5 != 0;
    v25 = 0;
    memset(&Buf1, 0, sizeof(Buf1));
    v26 = 0;
    v27 = 0;
    if ( (unsigned int)((v23 - v22) >> 8) )
    {
      while ( 1 )
      {
        if ( CCompositionSurfaceInfo::GetHDR10MetaData(
               *(CCompositionSurfaceInfo **)(((unsigned __int64)v27 << 8) + v22 + 24),
               &Buf1) )
        {
          if ( v82 && v82 != v81 )
          {
            v26 = 0;
            memset(&Buf1, 0, sizeof(Buf1));
            goto LABEL_22;
          }
          v26 = 1;
        }
        v27 = v80 + 1;
        if ( v27 >= v79 )
          break;
        v22 = *((_QWORD *)this + 1054);
      }
      v25 = *(_DWORD *)&Buf1.MaxContentLightLevel;
    }
LABEL_22:
    v28 = *((unsigned int *)this + 28);
    if ( v26 == (_DWORD)v28 )
    {
      if ( v26 != 1 )
        goto LABEL_24;
      v95 = *((_DWORD *)this + 28);
      if ( !memcmp_0(&Buf1, (char *)this + 116, 0x1CuLL) )
      {
        v28 = v95;
        goto LABEL_24;
      }
    }
    v83 = *(_QWORD *)&Buf1.MaxMasteringLuminance;
    v28 = v26;
    *((_DWORD *)this + 28) = v26;
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)Buf1.RedPrimary;
    *(_QWORD *)((char *)this + 132) = v83;
    *((_DWORD *)this + 35) = v25;
    if ( v26 == 1 )
    {
      v29 = (char *)this + 116;
      v28 = 1LL;
      goto LABEL_25;
    }
LABEL_24:
    v29 = 0LL;
LABEL_25:
    if ( *((int *)this + 3352) < 2200 || (LOBYTE(v8) = v24, *((_BYTE *)this + 13415)) )
    {
      v30 = v99;
      LOBYTE(v8) = v24;
      if ( v99 && v3[1] == 1 )
      {
        v31 = v101;
        if ( !*((_QWORD *)v3 + 1) && !v101 )
          LOBYTE(v8) = *((_BYTE *)this + 13423) != 0 && v24;
        goto LABEL_31;
      }
    }
    else
    {
      v30 = v99;
    }
    v31 = v101;
LABEL_31:
    v5 = v98;
    v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, char *, int, _DWORD *, LPVOID))(**((_QWORD **)this + 2) + 456LL))(
            *((_QWORD *)this + 2),
            v8,
            v28,
            v29,
            v30,
            v3,
            v98);
    v34 = v32;
    if ( v32 >= 0 )
    {
      *((_DWORD *)this + 3351) = v104;
      *((_BYTE *)this + 13424) = *((_BYTE *)this + 13423);
      *((_DWORD *)this + 3350) = v31;
      goto LABEL_33;
    }
    v91 = 3031;
    v42 = v32;
    goto LABEL_58;
  }
  v34 = v97;
LABEL_151:
  v5 = v98;
LABEL_33:
  v35 = 0LL;
  for ( i = (char *)this + 1352 * *((int *)this + 5394);
        (unsigned int)v35 < (unsigned int)((__int64)(*((_QWORD *)this + 1055) - *((_QWORD *)this + 1054)) >> 8);
        *(_DWORD *)&i[v84 + 14004] = *(_DWORD *)(*(_QWORD *)(v86 + *((_QWORD *)this + 1054) + 24) + 76LL) )
  {
    if ( (unsigned int)v35 >= 2 )
      break;
    v84 = 544LL * (unsigned int)v35;
    v85 = 2LL;
    v86 = (unsigned __int64)(unsigned int)v35 << 8;
    v87 = &i[v84 + 13728];
    v8 = v86 + *((_QWORD *)this + 1054);
    do
    {
      v88 = *(_OWORD *)v8;
      v8 += 128LL;
      *(_OWORD *)v87 = v88;
      v87 += 128;
      *((_OWORD *)v87 - 7) = *(_OWORD *)(v8 - 112);
      *((_OWORD *)v87 - 6) = *(_OWORD *)(v8 - 96);
      *((_OWORD *)v87 - 5) = *(_OWORD *)(v8 - 80);
      *((_OWORD *)v87 - 4) = *(_OWORD *)(v8 - 64);
      *((_OWORD *)v87 - 3) = *(_OWORD *)(v8 - 48);
      *((_OWORD *)v87 - 2) = *(_OWORD *)(v8 - 32);
      *((_OWORD *)v87 - 1) = *(_OWORD *)(v8 - 16);
      --v85;
    }
    while ( v85 );
    *(_QWORD *)&i[v84 + 13992] = &i[v84 + 13728];
    v35 = (unsigned int)(v35 + 1);
  }
  i[14813] = *((_BYTE *)this + 13418);
  if ( v3 )
  {
    if ( (_DWORD)v4 )
    {
      v89 = v3 + 2;
      v90 = (unsigned int)v4;
      do
      {
        if ( *v89 )
          (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)*v89 + 16LL))(*v89, v8, v35);
        v89 += 17;
        --v90;
      }
      while ( v90 );
    }
    HeapFree(WPF::g_processHeap, 0, v3);
  }
  if ( v105 )
    WPF::ProcessHeapImpl::Free(v105);
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
  return v34;
}
