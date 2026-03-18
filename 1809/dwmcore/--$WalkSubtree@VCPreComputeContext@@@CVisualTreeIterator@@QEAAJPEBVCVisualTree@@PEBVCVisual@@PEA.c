/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800431B0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180031EFC (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180032028 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088654 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        CPreComputeContext *a4,
        ...)
{
  CPreComputeContext *v5; // r15
  LPVOID v6; // rsi
  const struct CVisualTree *v7; // r14
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // edi
  LPVOID v11; // r12
  int v12; // r13d
  CVisual *v13; // rsi
  int v14; // eax
  unsigned __int64 *v15; // rcx
  bool v16; // zf
  char v17; // al
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v35; // r15
  __int64 v36; // r14
  void *v37; // rdi
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // r12d
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // r8d
  __int64 v44; // r11
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r10
  __int64 v48; // r14
  unsigned int v49; // ecx
  unsigned int v50; // r13d
  SIZE_T v51; // r8
  unsigned __int64 v52; // rax
  int v53; // r8d
  SIZE_T v54; // r8
  unsigned int v55; // [rsp+20h] [rbp-48h]
  LPVOID v56; // [rsp+30h] [rbp-38h]
  struct CTreeData *v57; // [rsp+38h] [rbp-30h] BYREF
  __int128 v58; // [rsp+40h] [rbp-28h]
  __int128 v59; // [rsp+50h] [rbp-18h]
  int v60; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v61; // [rsp+B4h] [rbp+4Ch]
  const struct CVisualTree *v62; // [rsp+B8h] [rbp+50h]
  LPVOID lpMem; // [rsp+C0h] [rbp+58h] BYREF
  CPreComputeContext *v64; // [rsp+C8h] [rbp+60h]
  __int64 v65; // [rsp+D0h] [rbp+68h] BYREF
  va_list va; // [rsp+D0h] [rbp+68h]
  va_list va1; // [rsp+D8h] [rbp+70h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v65 = va_arg(va1, _QWORD);
  v64 = a4;
  v62 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 72) = 1;
  v5 = a4;
  v56 = 0LL;
  v6 = a3;
  v7 = a2;
  v8 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x40u);
    LODWORD(v6) = 0;
    v11 = 0LL;
  }
  else
  {
    v11 = v6;
    v56 = v6;
    *(_QWORD *)(a1 + 8) = v6;
    LODWORD(v6) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v12 = -2147024882;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC3u);
    goto LABEL_36;
  }
  v13 = *(CVisual **)(a1 + 8);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState();
  LOBYTE(v61) = 0;
  LODWORD(lpMem) = 0;
  WORD2(lpMem) = v61;
  v60 = 0;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data,
    13818272LL,
    &lpMem,
    0LL,
    0);
  while ( 1 )
  {
    if ( (*((_BYTE *)v13 + 95) & 8) == 0 && v13 != *((CVisual **)v7 + 3) )
    {
      while ( 1 )
      {
LABEL_11:
        v16 = (*((_BYTE *)v13 + 95) & 8) == 0;
        v17 = 1;
        LOBYTE(v65) = 1;
        if ( !v16 || v13 == *((CVisual **)v7 + 3) )
        {
          v14 = CPreComputeContext::PostSubgraph(v5, v7, (bool *)va);
          v10 = v14;
          if ( v14 < 0 )
          {
            v55 = 262;
            goto LABEL_112;
          }
          v17 = v65;
        }
        v18 = *(_QWORD *)(a1 + 16);
        if ( v17 )
          break;
LABEL_31:
        v28 = *(_DWORD *)(a1 + 4);
        if ( v28 )
        {
          v29 = *(_DWORD *)(a1 + 32);
          v30 = 0LL;
          v31 = 0;
          if ( v29 )
          {
            v32 = (unsigned int)(v29 - 1);
            *(_DWORD *)(a1 + 32) = v32;
            v28 = *(_DWORD *)(a1 + 4);
            v59 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v32);
            v31 = DWORD2(v59);
            v30 = v59;
          }
          v13 = *(CVisual **)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v13;
          *(_QWORD *)(a1 + 16) = v30;
          *(_DWORD *)(a1 + 24) = v31;
          *(_DWORD *)(a1 + 4) = v28 - 1;
          if ( v13 )
            continue;
        }
        goto LABEL_35;
      }
      v10 = 0;
      v13 = 0LL;
      if ( v18 )
      {
        v19 = *(_DWORD *)(a1 + 28);
        if ( v19 == 1 )
        {
          v20 = *(_DWORD *)(a1 + 24);
          if ( v20 != -1 )
          {
            v21 = *(_QWORD *)(v18 + 72);
            if ( (v21 & 2) != 0 )
              v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v22) = v21 & 1;
            v23 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v23 < (unsigned int)v22 )
            {
LABEL_21:
              if ( (v21 & 2) != 0 )
              {
                v24 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
                v25 = v21 & 1;
                v26 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              else
              {
                v26 = v21 & 1;
                v25 = v26;
                v24 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              if ( v26 <= (unsigned int)v23 )
                goto LABEL_109;
              if ( (v21 & 2) != 0 )
                v25 = *v24;
              if ( (unsigned int)v23 >= v25 )
              {
LABEL_109:
                v27 = 0LL;
              }
              else if ( v25 == 1 )
              {
                v27 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
              }
              else
              {
                v27 = v24[v23 + 2];
              }
              *(_QWORD *)(a1 + 8) = v27;
              v13 = (CVisual *)v27;
              *(_DWORD *)(a1 + 24) = v23;
LABEL_30:
              if ( v13 )
                continue;
              goto LABEL_31;
            }
          }
        }
        else if ( !v19 )
        {
          v53 = *(_DWORD *)(a1 + 24);
          if ( v53 )
          {
            v21 = *(_QWORD *)(v18 + 72);
            v23 = (unsigned int)(v53 - 1);
            goto LABEL_21;
          }
        }
      }
      v10 = 1;
      goto LABEL_30;
    }
    v14 = CVisual::EnsureTreeData(v13, v7, &v57);
    v10 = v14;
    if ( v14 < 0 )
    {
      v55 = 215;
      goto LABEL_112;
    }
    v14 = CPreComputeContext::PreSubgraph(v5, v7, (bool *)&v60);
    v10 = v14;
    if ( v14 < 0 )
    {
      v55 = 219;
LABEL_112:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, v14, v55);
      goto LABEL_35;
    }
    if ( !(_BYTE)v60 )
      goto LABEL_11;
    v35 = 0LL;
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v36 & 2) != 0 )
      v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v36) = v36 & 1;
    if ( !(_DWORD)v36 )
    {
      v10 = 1;
      goto LABEL_63;
    }
    v37 = 0LL;
    v38 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v58 = *(_QWORD *)(a1 + 16);
    DWORD2(v58) = *(_DWORD *)(a1 + 24);
    v39 = *(_DWORD *)(a1 + 32);
    if ( v39 != (_DWORD)v38 )
      goto LABEL_48;
    v50 = 2 * v38;
    if ( (unsigned __int64)(2 * v38) > 0xFFFFFFFF )
    {
      v40 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_101:
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v40, 0x8Bu);
      goto LABEL_63;
    }
    if ( v50 <= 0x40 )
      v50 = 64;
    v40 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v50 <= 0x10 )
    {
      v40 = -2147024809;
      goto LABEL_94;
    }
    v51 = 16LL * v50;
    if ( !v51 )
      v51 = 1LL;
    lpMem = HeapAlloc(WPF::g_processHeap, 0, v51);
    v37 = lpMem;
    if ( !lpMem )
    {
      v40 = -2147024882;
LABEL_94:
      lpMem = 0LL;
    }
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v40, 0x54u);
    }
    else
    {
      v52 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v52 <= 0xFFFFFFFF )
      {
        memcpy_0(v37, *(const void **)(a1 + 48), (unsigned int)v52);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        v39 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 36) = v50;
        *(_QWORD *)(a1 + 48) = v37;
LABEL_48:
        v40 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v39) = v58;
        v41 = *(_DWORD *)(a1 + 56);
        v42 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v42;
        if ( v41 <= v42 )
          v41 = v42;
        *(_DWORD *)(a1 + 56) = v41;
        goto LABEL_51;
      }
      v40 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( lpMem )
      HeapFree(WPF::g_processHeap, 0, lpMem);
LABEL_51:
    v10 = v40;
    if ( v40 < 0 )
      goto LABEL_101;
    v43 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v36 - 1;
    *(_DWORD *)(a1 + 24) = v43;
    v44 = *(_QWORD *)(a1 + 8);
    v45 = *(_QWORD *)(v44 + 72) & 2LL;
    v46 = *(_QWORD *)(v44 + 72) & 1LL;
    v15 = (unsigned __int64 *)(*(_QWORD *)(v44 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v47 = v45 ? *v15 : (unsigned int)v46;
    if ( v47 <= v43 )
      goto LABEL_103;
    if ( v45 )
      v46 = *v15;
    if ( v43 >= v46 )
LABEL_103:
      v35 = 0LL;
    else
      v35 = v46 == 1 ? *(_QWORD *)(v44 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v15[v43 + 2];
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v44;
    *(_QWORD *)(a1 + 8) = v35;
LABEL_63:
    if ( v10 < 0 )
      break;
    v7 = v62;
    if ( !v35 )
    {
      v5 = v64;
      goto LABEL_11;
    }
    v13 = (CVisual *)v35;
    v5 = v64;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, v10, 0xEAu);
LABEL_35:
  v11 = v56;
  v12 = -2147024882;
  LODWORD(v6) = 0;
LABEL_36:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v33 = *(_DWORD *)(a1 + 40);
  if ( v33 == 10 )
  {
    v48 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v48 = *(unsigned int *)(a1 + 56);
    v49 = 3 * v48;
    if ( (unsigned __int64)(3 * v48) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, -2147024362, 0xEFu);
      goto LABEL_76;
    }
    if ( v49 > *(_DWORD *)(a1 + 36) )
    {
LABEL_76:
      *(_DWORD *)(a1 + 56) = (_DWORD)v6;
      *(_DWORD *)(a1 + 40) = (_DWORD)v6;
      return (unsigned int)v10;
    }
    if ( (_DWORD)v48 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 > 0x10 )
    {
      v54 = 16LL * (unsigned int)v48;
      if ( !v54 )
        v54 = 1LL;
      v6 = HeapAlloc(WPF::g_processHeap, 0, v54);
      if ( v6 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v6;
        LODWORD(v6) = 0;
        *(_DWORD *)(a1 + 36) = v48;
        goto LABEL_76;
      }
    }
    else
    {
      v12 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v12, 0x100u);
    goto LABEL_76;
  }
  *(_DWORD *)(a1 + 40) = v33 + 1;
  return (unsigned int)v10;
}
