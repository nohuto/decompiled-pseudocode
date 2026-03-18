/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005CBF0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180053AB4 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D110 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005ECA0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008812C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x180088200 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        COcclusionContext *a4,
        ...)
{
  COcclusionContext *v4; // rbp
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r12
  int v12; // ebx
  void *v13; // r14
  CVisual *v14; // rdi
  int v15; // eax
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  __int64 v24; // r11
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r10
  bool v28; // zf
  char v29; // al
  unsigned __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // rcx
  _QWORD *Value; // r15
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 *v40; // r14
  unsigned __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  __int64 v45; // rdx
  __int64 v46; // r11
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rdx
  unsigned int v50; // r12d
  int v51; // eax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  void *v54; // rbx
  unsigned __int64 v55; // rdi
  __int64 v56; // rdi
  void *v57; // rbx
  HANDLE ProcessHeap; // rax
  int v59; // r11d
  CThreadContext *v60; // rax
  unsigned int v61; // ecx
  CThreadContext *v62; // rax
  int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // [rsp+20h] [rbp-88h]
  struct CTreeData *v66; // [rsp+30h] [rbp-78h] BYREF
  __int128 v67; // [rsp+38h] [rbp-70h]
  __int128 v68; // [rsp+48h] [rbp-60h]
  void *v69; // [rsp+B0h] [rbp+8h] BYREF
  void *v70; // [rsp+B8h] [rbp+10h]
  void *lpMem; // [rsp+C0h] [rbp+18h] BYREF
  COcclusionContext *v72; // [rsp+C8h] [rbp+20h]
  __int64 v73; // [rsp+D0h] [rbp+28h] BYREF
  va_list va; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v73 = va_arg(va1, _QWORD);
  v72 = a4;
  v4 = a4;
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService();
  v8 = 0;
  *(_QWORD *)(a1 + 64) = a2;
  v70 = 0LL;
  *(_DWORD *)(a1 + 72) = 2;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v11 = 64LL;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x40u, 0LL);
    v13 = 0LL;
  }
  else
  {
    v13 = a3;
    v70 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0xC5u, 0LL);
    goto LABEL_47;
  }
  v14 = *(CVisual **)(a1 + 8);
  while ( 1 )
  {
    if ( (*((_BYTE *)v14 + 95) & 4) == 0 && v14 != *((CVisual **)a2 + 3) )
    {
      while ( 1 )
      {
LABEL_32:
        v28 = (*((_BYTE *)v14 + 95) & 4) == 0;
        v29 = 1;
        LOBYTE(v73) = 1;
        if ( !v28 || v14 == *((CVisual **)a2 + 3) )
        {
          v15 = COcclusionContext::PostSubgraph(v4, a2, (bool *)va);
          v12 = v15;
          if ( v15 < 0 )
          {
            v65 = 262;
            goto LABEL_116;
          }
          v29 = v73;
        }
        v30 = *(_QWORD *)(a1 + 16);
        if ( v29 )
          break;
LABEL_42:
        v33 = *(_DWORD *)(a1 + 4);
        if ( v33 )
        {
          LODWORD(v30) = *(_DWORD *)(a1 + 32);
          v34 = 0LL;
          v35 = 0;
          if ( (_DWORD)v30 )
          {
            v36 = (unsigned int)(v30 - 1);
            *(_DWORD *)(a1 + 32) = v36;
            v30 = 2 * v36;
            v33 = *(_DWORD *)(a1 + 4);
            v68 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * v30);
            v35 = DWORD2(v68);
            v34 = v68;
          }
          v14 = *(CVisual **)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v14;
          *(_QWORD *)(a1 + 16) = v34;
          *(_DWORD *)(a1 + 24) = v35;
          *(_DWORD *)(a1 + 4) = v33 - 1;
          if ( v14 )
            continue;
        }
        goto LABEL_46;
      }
      v12 = 0;
      v14 = 0LL;
      if ( !v30 )
        goto LABEL_40;
      v31 = *(_DWORD *)(a1 + 28);
      if ( v31 == 1 )
      {
        v59 = *(_DWORD *)(a1 + 24);
        if ( v59 == -1 )
          goto LABEL_40;
        v45 = *(_QWORD *)(v30 + 72);
        if ( (v45 & 2) != 0 )
          v30 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v30) = v45 & 1;
        v46 = (unsigned int)(v59 + 1);
        if ( (unsigned int)v46 >= (unsigned int)v30 )
          goto LABEL_40;
      }
      else
      {
        if ( v31 || (v32 = *(_DWORD *)(a1 + 24)) == 0 )
        {
LABEL_40:
          v12 = 1;
          goto LABEL_41;
        }
        v45 = *(_QWORD *)(v30 + 72);
        v46 = (unsigned int)(v32 - 1);
      }
      if ( (v45 & 2) != 0 )
      {
        v30 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
        v47 = v45 & 1;
        v48 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v48 = v45 & 1;
        v47 = v48;
        v30 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v48 <= (unsigned int)v46 )
        goto LABEL_113;
      if ( (v45 & 2) != 0 )
        v47 = *(_QWORD *)v30;
      if ( (unsigned int)v46 >= v47 )
      {
LABEL_113:
        v49 = 0LL;
      }
      else if ( v47 == 1 )
      {
        v49 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v49 = *(_QWORD *)(v30 + 8 * v46 + 16);
      }
      *(_QWORD *)(a1 + 8) = v49;
      v14 = (CVisual *)v49;
      *(_DWORD *)(a1 + 24) = v46;
LABEL_41:
      if ( v14 )
        continue;
      goto LABEL_42;
    }
    v15 = CVisual::EnsureTreeData(v14, a2, &v66);
    v12 = v15;
    if ( v15 < 0 )
    {
      v65 = 215;
      goto LABEL_116;
    }
    v15 = COcclusionContext::PreSubgraph(v4, a2, (bool *)&v69);
    v12 = v15;
    if ( v15 < 0 )
    {
      v65 = 219;
LABEL_116:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v15, v65, 0LL);
      goto LABEL_46;
    }
    if ( !(_BYTE)v69 )
      goto LABEL_32;
    v17 = 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    if ( !(_DWORD)v18 )
    {
      v12 = 1;
      goto LABEL_28;
    }
    v19 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v67 = *(_QWORD *)(a1 + 16);
    DWORD2(v67) = *(_DWORD *)(a1 + 24);
    v20 = *(_DWORD *)(a1 + 32);
    lpMem = 0LL;
    if ( v20 != (_DWORD)v19 )
      goto LABEL_13;
    v50 = 2 * v19;
    if ( (unsigned __int64)(2 * v19) > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v12 = -2147024362;
LABEL_102:
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v8, 0x8Bu, 0LL);
      v8 = 0;
      goto LABEL_28;
    }
    if ( v50 <= 0x40 )
      v50 = 64;
    v51 = HrMalloc(0x10uLL, v50, &lpMem);
    v8 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x53u, 0LL);
    }
    else
    {
      v53 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v53 <= 0xFFFFFFFF )
      {
        v54 = lpMem;
        memcpy_0(lpMem, *(const void **)(a1 + 48), (unsigned int)v53);
        operator delete(*(void **)(a1 + 48));
        v20 = *(_DWORD *)(a1 + 32);
        v8 = 0;
        *(_QWORD *)(a1 + 48) = v54;
        *(_DWORD *)(a1 + 36) = v50;
LABEL_13:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v20) = v67;
        v21 = *(_DWORD *)(a1 + 56);
        v22 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v22;
        if ( v21 <= v22 )
          v21 = v22;
        *(_DWORD *)(a1 + 56) = v21;
        goto LABEL_16;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v57 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v57);
    }
LABEL_16:
    v12 = v8;
    if ( v8 < 0 )
      goto LABEL_102;
    v8 = 0;
    v23 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v18 - 1;
    *(_DWORD *)(a1 + 24) = v23;
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(_QWORD *)(v24 + 72) & 2LL;
    v26 = *(_QWORD *)(v24 + 72) & 1LL;
    v16 = (unsigned __int64 *)(*(_QWORD *)(v24 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v27 = v25 ? *v16 : (unsigned int)v26;
    if ( v27 <= v23 )
      goto LABEL_104;
    if ( v25 )
      v26 = *v16;
    if ( v23 >= v26 )
LABEL_104:
      v17 = 0LL;
    else
      v17 = v26 == 1 ? *(_QWORD *)(v24 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v16[v23 + 2];
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v24;
    *(_QWORD *)(a1 + 8) = v17;
LABEL_28:
    if ( v12 < 0 )
      break;
    if ( !v17 )
    {
      v4 = v72;
      goto LABEL_32;
    }
    v14 = (CVisual *)v17;
    v4 = v72;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v12, 0xEAu, 0LL);
LABEL_46:
  v13 = v70;
  v11 = 64LL;
LABEL_47:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  if ( v13 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v60 = (CThreadContext *)operator new(0x138uLL);
      if ( !v60 || (v62 = CThreadContext::CThreadContext(v60), (Value = v62) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, -2147024882, 0x42u, 0LL);
        goto LABEL_58;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v62);
    }
    v38 = *Value & 2LL;
    v39 = *Value & 1LL;
    v40 = (unsigned __int64 *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v38 )
      v30 = *v40;
    else
      v30 = (unsigned int)v39;
    v41 = v30 - 1;
    if ( v38 )
      v39 = *v40;
    if ( v41 < v39 )
    {
      if ( v39 == 1 )
      {
        *Value = 0LL;
      }
      else
      {
        v55 = v39 - 1;
        v30 = (unsigned __int64)(v40 + 2);
        if ( v55 == 1 )
        {
          v56 = *(_QWORD *)(v30 - 8 * v41 + 8);
          operator delete((void *)(*Value & 0xFFFFFFFFFFFFFFFCuLL));
          *Value = v56 | 1;
        }
        else
        {
          if ( v41 < v55 )
            memmove_0((void *)(v30 + 8 * v41), (const void *)(v30 + 8 * v41 + 8), 8 * (v55 - v41));
          *v40 = v55;
        }
      }
    }
  }
LABEL_58:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v42 = *(_DWORD *)(a1 + 40);
  if ( v42 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v11 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v11) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v11) <= *(_DWORD *)(a1 + 36) )
    {
      v69 = 0LL;
      v63 = HrMalloc(0x10uLL, (unsigned int)v11, &v69);
      if ( v63 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v69;
        *(_DWORD *)(a1 + 36) = v11;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0xFEu, 0LL);
      }
    }
    v43 = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v43 = v42 + 1;
  }
  *(_DWORD *)(a1 + 40) = v43;
  return (unsigned int)v12;
}
