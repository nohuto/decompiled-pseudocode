/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18003C2F0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180031EFC (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180032028 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088654 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        COcclusionContext *a4,
        ...)
{
  COcclusionContext *v5; // r15
  LPVOID v6; // rsi
  const struct CVisualTree *v7; // r14
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  __int64 v11; // r13
  LPVOID v12; // r12
  CVisual *v13; // rsi
  int v14; // r12d
  int v15; // eax
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  void *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  bool v29; // zf
  char v30; // al
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned __int64 *v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rdx
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  int v45; // eax
  unsigned int v47; // ecx
  unsigned int v48; // r13d
  SIZE_T v49; // r8
  unsigned __int64 v50; // rax
  int v51; // r11d
  __int64 v52; // rcx
  SIZE_T v53; // r8
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-48h]
  LPVOID v56; // [rsp+30h] [rbp-38h]
  struct CTreeData *v57; // [rsp+38h] [rbp-30h] BYREF
  __int128 v58; // [rsp+40h] [rbp-28h]
  __int128 v59; // [rsp+50h] [rbp-18h]
  int v60; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v61; // [rsp+B4h] [rbp+4Ch]
  const struct CVisualTree *v62; // [rsp+B8h] [rbp+50h]
  LPVOID lpMem; // [rsp+C0h] [rbp+58h] BYREF
  COcclusionContext *v64; // [rsp+C8h] [rbp+60h]
  __int64 v65; // [rsp+D0h] [rbp+68h] BYREF
  va_list va; // [rsp+D0h] [rbp+68h]
  va_list va1; // [rsp+D8h] [rbp+70h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v65 = va_arg(va1, _QWORD);
  v64 = a4;
  v62 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 72) = 2;
  v56 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v8;
  v11 = 64LL;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x40u);
    v12 = 0LL;
    LODWORD(v6) = 0;
  }
  else
  {
    v56 = v6;
    v12 = v6;
    *(_QWORD *)(a1 + 8) = v6;
    LODWORD(v6) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC3u);
    goto LABEL_58;
  }
  v13 = *(CVisual **)(a1 + 8);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState();
  v14 = 0;
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
LABEL_34:
        v29 = (*((_BYTE *)v13 + 95) & 8) == 0;
        v30 = 1;
        LOBYTE(v65) = 1;
        if ( !v29 || v13 == *((CVisual **)v7 + 3) )
        {
          v15 = COcclusionContext::PostSubgraph(v5, v7, (bool *)va);
          v10 = v15;
          if ( v15 < 0 )
          {
            v55 = 262;
            goto LABEL_113;
          }
          v30 = v65;
        }
        v31 = *(_QWORD *)(a1 + 16);
        if ( v30 )
          break;
LABEL_53:
        v40 = *(_DWORD *)(a1 + 4);
        if ( v40 )
        {
          v41 = *(_DWORD *)(a1 + 32);
          v42 = 0LL;
          v43 = 0;
          if ( v41 )
          {
            v44 = (unsigned int)(v41 - 1);
            *(_DWORD *)(a1 + 32) = v44;
            v40 = *(_DWORD *)(a1 + 4);
            v59 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v44);
            v43 = DWORD2(v59);
            v42 = v59;
          }
          v13 = *(CVisual **)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v13;
          *(_QWORD *)(a1 + 16) = v42;
          *(_DWORD *)(a1 + 24) = v43;
          *(_DWORD *)(a1 + 4) = v40 - 1;
          if ( v13 )
            continue;
        }
        goto LABEL_57;
      }
      v10 = 0;
      v13 = 0LL;
      if ( v31 )
      {
        v32 = *(_DWORD *)(a1 + 28);
        if ( v32 == 1 )
        {
          v51 = *(_DWORD *)(a1 + 24);
          if ( v51 != -1 )
          {
            v34 = *(_QWORD *)(v31 + 72);
            if ( (v34 & 2) != 0 )
              v52 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v52) = v34 & 1;
            v35 = (unsigned int)(v51 + 1);
            if ( (unsigned int)v35 < (unsigned int)v52 )
            {
LABEL_43:
              if ( (v34 & 2) != 0 )
              {
                v36 = (unsigned __int64 *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
                v37 = v34 & 1;
                v38 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              else
              {
                v38 = v34 & 1;
                v37 = v38;
                v36 = (unsigned __int64 *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              if ( v38 <= (unsigned int)v35 )
                goto LABEL_110;
              if ( (v34 & 2) != 0 )
                v37 = *v36;
              if ( (unsigned int)v35 >= v37 )
              {
LABEL_110:
                v39 = 0LL;
              }
              else if ( v37 == 1 )
              {
                v39 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
              }
              else
              {
                v39 = v36[v35 + 2];
              }
              *(_QWORD *)(a1 + 8) = v39;
              v13 = (CVisual *)v39;
              *(_DWORD *)(a1 + 24) = v35;
LABEL_52:
              if ( v13 )
                continue;
              goto LABEL_53;
            }
          }
        }
        else if ( !v32 )
        {
          v33 = *(_DWORD *)(a1 + 24);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v31 + 72);
            v35 = (unsigned int)(v33 - 1);
            goto LABEL_43;
          }
        }
      }
      v10 = 1;
      goto LABEL_52;
    }
    v15 = CVisual::EnsureTreeData(v13, v7, &v57);
    v10 = v15;
    if ( v15 < 0 )
    {
      v55 = 215;
      goto LABEL_113;
    }
    v15 = COcclusionContext::PreSubgraph(v5, v7, (bool *)&v60);
    v10 = v15;
    if ( v15 < 0 )
    {
      v55 = 219;
LABEL_113:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v15, v55);
      goto LABEL_57;
    }
    if ( !(_BYTE)v60 )
      goto LABEL_34;
    v17 = 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    if ( !(_DWORD)v18 )
    {
      v10 = 1;
      goto LABEL_30;
    }
    v19 = 0LL;
    v20 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v58 = *(_QWORD *)(a1 + 16);
    DWORD2(v58) = *(_DWORD *)(a1 + 24);
    v21 = *(_DWORD *)(a1 + 32);
    if ( v21 != (_DWORD)v20 )
      goto LABEL_15;
    v48 = 2 * v20;
    if ( (unsigned __int64)(2 * v20) > 0xFFFFFFFF )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_99:
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v14, 0x8Bu);
      v14 = 0;
      goto LABEL_30;
    }
    if ( v48 <= 0x40 )
      v48 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v48 <= 0x10 )
    {
      v14 = -2147024809;
      goto LABEL_92;
    }
    v49 = 16LL * v48;
    if ( !v49 )
      v49 = 1LL;
    lpMem = HeapAlloc(WPF::g_processHeap, 0, v49);
    v19 = lpMem;
    if ( !lpMem )
    {
      v14 = -2147024882;
LABEL_92:
      lpMem = 0LL;
    }
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v14, 0x54u);
    }
    else
    {
      v50 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v50 <= 0xFFFFFFFF )
      {
        memcpy_0(v19, *(const void **)(a1 + 48), (unsigned int)v50);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        v21 = *(_DWORD *)(a1 + 32);
        v14 = 0;
        *(_DWORD *)(a1 + 36) = v48;
        *(_QWORD *)(a1 + 48) = v19;
LABEL_15:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v21) = v58;
        v22 = *(_DWORD *)(a1 + 56);
        v23 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v23;
        if ( v22 <= v23 )
          v22 = v23;
        *(_DWORD *)(a1 + 56) = v22;
        goto LABEL_18;
      }
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( lpMem )
      HeapFree(WPF::g_processHeap, 0, lpMem);
LABEL_18:
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_99;
    v14 = 0;
    v24 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v18 - 1;
    *(_DWORD *)(a1 + 24) = v24;
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(_QWORD *)(v25 + 72) & 2LL;
    v27 = *(_QWORD *)(v25 + 72) & 1LL;
    v16 = (unsigned __int64 *)(*(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v28 = v26 ? *v16 : (unsigned int)v27;
    if ( v28 <= v24 )
      goto LABEL_101;
    if ( v26 )
      v27 = *v16;
    if ( v24 >= v27 )
LABEL_101:
      v17 = 0LL;
    else
      v17 = v27 == 1 ? *(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v16[v24 + 2];
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)(a1 + 8) = v17;
LABEL_30:
    if ( v10 < 0 )
      break;
    v7 = v62;
    if ( !v17 )
    {
      v5 = v64;
      goto LABEL_34;
    }
    v13 = (CVisual *)v17;
    v5 = v64;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v10, 0xEAu);
LABEL_57:
  v12 = v56;
  v11 = 64LL;
  LODWORD(v6) = 0;
LABEL_58:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v12 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v45 = *(_DWORD *)(a1 + 40);
  if ( v45 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v11 = *(unsigned int *)(a1 + 56);
    v47 = 3 * v11;
    if ( (unsigned __int64)(3 * v11) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024362, 0xEFu);
      goto LABEL_74;
    }
    if ( v47 > *(_DWORD *)(a1 + 36) )
    {
LABEL_74:
      *(_DWORD *)(a1 + 56) = (_DWORD)v6;
      *(_DWORD *)(a1 + 40) = (_DWORD)v6;
      return (unsigned int)v10;
    }
    if ( (_DWORD)v11 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 > 0x10 )
    {
      v53 = 16LL * (unsigned int)v11;
      if ( !v53 )
        v53 = 1LL;
      v6 = HeapAlloc(WPF::g_processHeap, 0, v53);
      if ( v6 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v6;
        LODWORD(v6) = 0;
        *(_DWORD *)(a1 + 36) = v11;
        goto LABEL_74;
      }
      v54 = -2147024882;
    }
    else
    {
      v54 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v54, 0x100u);
    goto LABEL_74;
  }
  *(_DWORD *)(a1 + 40) = v45 + 1;
  return (unsigned int)v10;
}
