/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180083600
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18005C8C8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18007B0E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AFA64 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        CPreComputeContext *a4,
        bool a5)
{
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // esi
  void *v12; // rbp
  signed int v13; // edi
  CVisual *i; // rbp
  signed int v15; // eax
  unsigned __int64 *v16; // rcx
  bool v17; // zf
  bool v18; // al
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rcx
  _QWORD *Value; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  unsigned __int64 *v37; // r14
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // r11
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r10
  __int64 v53; // rdi
  unsigned int v54; // esi
  signed int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  void *v58; // rdi
  unsigned __int64 v59; // rdi
  _QWORD *v60; // rcx
  __int64 v61; // rdi
  void *v62; // rsi
  HANDLE ProcessHeap; // rax
  int v64; // r8d
  CThreadContext *v65; // rax
  __int64 v66; // rcx
  CThreadContext *v67; // rax
  signed int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // [rsp+20h] [rbp-78h]
  struct CTreeData *v71; // [rsp+30h] [rbp-68h] BYREF
  __int128 v72; // [rsp+38h] [rbp-60h]
  __int128 v73; // [rsp+48h] [rbp-50h]
  void *v74; // [rsp+A0h] [rbp+8h] BYREF
  void *v75; // [rsp+A8h] [rbp+10h]
  void *lpMem; // [rsp+B0h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService();
  *(_QWORD *)(a1 + 64) = a2;
  v75 = 0LL;
  *(_DWORD *)(a1 + 72) = 1;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    v13 = 0;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x40u, 0LL);
    v12 = 0LL;
  }
  else
  {
    v12 = a3;
    v75 = a3;
    *(_QWORD *)(a1 + 8) = a3;
    v13 = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC5u, 0LL);
    goto LABEL_34;
  }
  for ( i = *(CVisual **)(a1 + 8); ; i = (CVisual *)v42 )
  {
    while ( 2 )
    {
      if ( (*((_BYTE *)i + 95) & 4) == 0 && i != *((CVisual **)a2 + 3) )
      {
        while ( 1 )
        {
LABEL_9:
          v17 = (*((_BYTE *)i + 95) & 4) == 0;
          v18 = 1;
          a5 = 1;
          if ( !v17 || i == *((CVisual **)a2 + 3) )
          {
            v15 = CPreComputeContext::PostSubgraph(a4, a2, &a5);
            v11 = v15;
            if ( v15 < 0 )
            {
              v70 = 262;
              goto LABEL_112;
            }
            v18 = a5;
          }
          v19 = *(_QWORD *)(a1 + 16);
          if ( v18 )
            break;
LABEL_29:
          v29 = *(_DWORD *)(a1 + 4);
          if ( v29 )
          {
            v30 = *(_DWORD *)(a1 + 32);
            v31 = 0LL;
            v32 = 0;
            if ( v30 )
            {
              v33 = (unsigned int)(v30 - 1);
              *(_DWORD *)(a1 + 32) = v33;
              v29 = *(_DWORD *)(a1 + 4);
              v73 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v33);
              v32 = DWORD2(v73);
              v31 = v73;
            }
            i = *(CVisual **)(a1 + 16);
            *(_QWORD *)(a1 + 8) = i;
            *(_QWORD *)(a1 + 16) = v31;
            *(_DWORD *)(a1 + 24) = v32;
            *(_DWORD *)(a1 + 4) = v29 - 1;
            if ( i )
              continue;
          }
          goto LABEL_33;
        }
        v11 = 0;
        i = 0LL;
        if ( v19 )
        {
          v20 = *(_DWORD *)(a1 + 28);
          if ( v20 == 1 )
          {
            v21 = *(_DWORD *)(a1 + 24);
            if ( v21 != -1 )
            {
              v22 = *(_QWORD *)(v19 + 72);
              if ( (v22 & 2) != 0 )
                v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                LODWORD(v23) = v22 & 1;
              v24 = (unsigned int)(v21 + 1);
              if ( (unsigned int)v24 < (unsigned int)v23 )
              {
LABEL_19:
                if ( (v22 & 2) != 0 )
                {
                  v25 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
                  v26 = v22 & 1;
                  v27 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
                }
                else
                {
                  v27 = v22 & 1;
                  v26 = v27;
                  v25 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
                }
                if ( v27 <= (unsigned int)v24 )
                  goto LABEL_109;
                if ( (v22 & 2) != 0 )
                  v26 = *v25;
                if ( (unsigned int)v24 >= v26 )
                {
LABEL_109:
                  v28 = 0LL;
                }
                else if ( v26 == 1 )
                {
                  v28 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  v28 = v25[v24 + 2];
                }
                *(_QWORD *)(a1 + 8) = v28;
                i = (CVisual *)v28;
                *(_DWORD *)(a1 + 24) = v24;
LABEL_28:
                if ( i )
                  continue;
                goto LABEL_29;
              }
            }
          }
          else if ( !v20 )
          {
            v64 = *(_DWORD *)(a1 + 24);
            if ( v64 )
            {
              v22 = *(_QWORD *)(v19 + 72);
              v24 = (unsigned int)(v64 - 1);
              goto LABEL_19;
            }
          }
        }
        v11 = 1;
        goto LABEL_28;
      }
      break;
    }
    v15 = CVisual::EnsureTreeData(i, a2, &v71);
    v11 = v15;
    if ( v15 < 0 )
    {
      v70 = 215;
      goto LABEL_112;
    }
    v15 = CPreComputeContext::PreSubgraph(a4, a2, (bool *)&v74);
    v11 = v15;
    if ( v15 < 0 )
    {
      v70 = 219;
LABEL_112:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, v70, 0LL);
      goto LABEL_33;
    }
    if ( !(_BYTE)v74 )
      goto LABEL_9;
    v42 = 0LL;
    v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v43 & 2) != 0 )
      v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v43) = v43 & 1;
    if ( !(_DWORD)v43 )
    {
      v11 = 1;
      goto LABEL_67;
    }
    v44 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v72 = *(_QWORD *)(a1 + 16);
    DWORD2(v72) = *(_DWORD *)(a1 + 24);
    v45 = *(_DWORD *)(a1 + 32);
    lpMem = 0LL;
    if ( v45 != (_DWORD)v44 )
      goto LABEL_52;
    v54 = 2 * v44;
    if ( (unsigned __int64)(2 * v44) > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      v11 = -2147024362;
LABEL_101:
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v13, 0x8Bu, 0LL);
      v13 = 0;
      goto LABEL_67;
    }
    if ( v54 <= 0x40 )
      v54 = 64;
    v55 = HrMalloc(0x10uLL, v54, &lpMem);
    v13 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x53u, 0LL);
    }
    else
    {
      v57 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v57 <= 0xFFFFFFFF )
      {
        v58 = lpMem;
        memcpy_0(lpMem, *(const void **)(a1 + 48), (unsigned int)v57);
        operator delete(*(void **)(a1 + 48));
        v45 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v58;
        v13 = 0;
        *(_DWORD *)(a1 + 36) = v54;
LABEL_52:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v45) = v72;
        v46 = *(_DWORD *)(a1 + 56);
        v47 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
        *(_DWORD *)(a1 + 32) = v47;
        if ( v46 <= (unsigned int)v47 )
          v46 = v47;
        *(_DWORD *)(a1 + 56) = v46;
        goto LABEL_55;
      }
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, 0x80070216, 0x55u, 0LL);
    }
    v62 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v62);
    }
LABEL_55:
    v11 = v13;
    if ( v13 < 0 )
      goto LABEL_101;
    v13 = 0;
    v48 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v43 - 1;
    *(_DWORD *)(a1 + 24) = v48;
    v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(v49 + 72) & 2LL;
    v51 = *(_QWORD *)(v49 + 72) & 1LL;
    v16 = (unsigned __int64 *)(*(_QWORD *)(v49 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v52 = v50 ? *v16 : (unsigned int)v51;
    if ( v52 <= v48 )
      goto LABEL_103;
    if ( v50 )
      v51 = *v16;
    if ( v48 >= v51 )
LABEL_103:
      v42 = 0LL;
    else
      v42 = v51 == 1 ? *(_QWORD *)(v49 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v16[v48 + 2];
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v49;
    *(_QWORD *)(a1 + 8) = v42;
LABEL_67:
    if ( v11 < 0 )
      break;
    if ( !v42 )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v11, 0xEAu, 0LL);
LABEL_33:
  v12 = v75;
LABEL_34:
  if ( v11 == 1 || v11 == -2147467260 )
    v11 = 0;
  if ( v12 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v65 = (CThreadContext *)operator new(0x138uLL);
      if ( !v65 || (v67 = CThreadContext::CThreadContext(v65), (Value = v67) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, 0x8007000E, 0x42u, 0LL);
        goto LABEL_45;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v67);
    }
    v35 = *Value & 2LL;
    v36 = *Value & 1LL;
    v37 = (unsigned __int64 *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v35 )
      v38 = *v37;
    else
      v38 = (unsigned int)v36;
    v39 = v38 - 1;
    if ( v35 )
      v36 = *v37;
    if ( v39 < v36 )
    {
      if ( v36 == 1 )
      {
        *Value = 0LL;
      }
      else
      {
        v59 = v36 - 1;
        v60 = v37 + 2;
        if ( v59 == 1 )
        {
          v61 = v60[-v39 + 1];
          operator delete((void *)(*Value & 0xFFFFFFFFFFFFFFFCuLL));
          *Value = v61 | 1;
        }
        else
        {
          if ( v39 < v59 )
            memmove_0(&v60[v39], &v60[v39 + 1], 8 * (v59 - v39));
          *v37 = v59;
        }
      }
    }
  }
LABEL_45:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v40 = *(_DWORD *)(a1 + 40);
  if ( v40 == 10 )
  {
    v53 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v53 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v53) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, 0x80070216, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v53) <= *(_DWORD *)(a1 + 36) )
    {
      v74 = 0LL;
      v68 = HrMalloc(0x10uLL, (unsigned int)v53, &v74);
      if ( v68 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v74;
        *(_DWORD *)(a1 + 36) = v53;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0xFEu, 0LL);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v40 + 1;
  }
  return (unsigned int)v11;
}
