/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18002D180
 * Callers:
 *     ?HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z @ 0x18002C7B4 (-HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z.c)
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18002ADF4 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x18002C814 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18002C884 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002C92C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18002CA44 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180066EE0 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1801E24C8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  CVisual *v13; // rdi
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  void *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // r12d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r10
  bool v27; // bl
  __int64 *v28; // rdi
  __int64 v29; // r10
  unsigned __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // rcx
  bool v38; // r12
  bool v39; // r13
  bool v40; // al
  __int64 v41; // r11
  unsigned __int64 *v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r10
  struct CEffect *EffectInternal; // rax
  int WorldTransform; // eax
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  unsigned int v51; // r13d
  SIZE_T v52; // r8
  unsigned __int64 v53; // rax
  unsigned __int64 *TreeDataListHead; // rax
  __int64 v55; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v58; // eax
  int v59; // r11d
  __int64 v60; // rdx
  unsigned int v61; // [rsp+20h] [rbp-D8h]
  __int64 v62; // [rsp+30h] [rbp-C8h] BYREF
  struct D2D_POINT_2F v63; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+40h] [rbp-B8h]
  __int128 v65; // [rsp+50h] [rbp-A8h]
  struct CTreeData *v66; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v67[64]; // [rsp+70h] [rbp-88h] BYREF
  int v68; // [rsp+B0h] [rbp-48h]
  bool v69; // [rsp+100h] [rbp+8h] BYREF
  __int64 v70; // [rsp+108h] [rbp+10h]
  LPVOID lpMem; // [rsp+110h] [rbp+18h]

  v70 = a2;
  v7 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  v62 = a3;
  *(_DWORD *)(a1 + 72) = 4;
  v8 = CGraphWalker<CVisual>::BeginWalk(a1, (void **)&v62);
  v12 = v8;
  if ( v8 < 0 )
  {
    v61 = 195;
    goto LABEL_150;
  }
  v13 = *(CVisual **)(a1 + 8);
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService(v10, v9, v11);
  while ( 1 )
  {
LABEL_3:
    if ( (*((_BYTE *)v13 + 95) & 8) == 0 && v13 != *(CVisual **)(v7 + 24) )
    {
      while ( 1 )
      {
LABEL_29:
        v27 = 1;
        if ( (*((_BYTE *)v13 + 95) & 8) == 0 && v13 != *(CVisual **)(v7 + 24) )
          goto LABEL_39;
        v12 = 0;
        v28 = *(__int64 **)(a4 + 16);
        v27 = 1;
        v29 = *(_QWORD *)(a4 + 24);
        v30 = 0LL;
        if ( *(_BYTE *)(v7 + 32) )
        {
          v30 = (unsigned __int64)(v28 + 41);
        }
        else
        {
          TreeDataListHead = (unsigned __int64 *)CVisual::GetTreeDataListHead(*(CVisual **)(a4 + 16));
          if ( TreeDataListHead )
          {
            v10 = *TreeDataListHead;
            if ( (unsigned __int64 *)*TreeDataListHead != TreeDataListHead )
            {
              while ( *(_QWORD *)(v10 + 32) != v7 )
              {
                v10 = *(_QWORD *)v10;
                if ( (unsigned __int64 *)v10 == TreeDataListHead )
                  goto LABEL_32;
              }
              v30 = v10 - 224;
            }
          }
        }
LABEL_32:
        if ( *(_QWORD *)(a4 + 112) )
          goto LABEL_33;
        v38 = *((_DWORD *)v28 + 25) == 1;
        v39 = v29 && *(_DWORD *)(v29 + 100) == 1;
        v40 = 1;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v28 + 176))(v28) )
        {
          if ( (*(_DWORD *)v28[28] & 0x200000) == 0
            || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v28),
                !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
                   EffectInternal,
                   54LL)) )
          {
            v40 = 0;
          }
        }
        if ( v38 )
        {
          if ( v39 )
          {
            if ( v40 )
              goto LABEL_55;
          }
          else
          {
            v55 = v28[9];
            if ( (v55 & 2) != 0 )
              v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v55) = v55 & 1;
            if ( (_DWORD)v55 )
            {
LABEL_55:
              v7 = v70;
              goto LABEL_33;
            }
          }
        }
        if ( (*((_BYTE *)v28 + 93) & 4) == 0 )
          goto LABEL_55;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v28 + 216))(v28) )
          goto LABEL_55;
        if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(a4 + 120) == 1 )
        {
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v28);
          if ( Transform3DEffectNoRef )
          {
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)v28 + 132));
            if ( !CMILMatrix::IsFacingUser(Matrix) )
              goto LABEL_55;
          }
        }
        v7 = v70;
        v68 = 0;
        WorldTransform = CVisual::GetWorldTransform((struct _LIST_ENTRY *)v28, v70, 4, (__int64)v67, 0LL, 0LL);
        v12 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, WorldTransform, 0xE8u);
          goto LABEL_38;
        }
        if ( CHitTestContext::GetPointInLocalSpace(
               (const struct D2D_POINT_2F *)(a4 + 88),
               (const struct CMILMatrix *)v67,
               &v63) )
        {
          v48 = *v28;
          v49 = *(unsigned __int8 *)(a4 + 184);
          a5 = 0;
          v50 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct D2D_POINT_2F *, char *))(v48 + 280))(
                  v28,
                  v49,
                  &v63,
                  &a5);
          v12 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v50, 0xEFu);
            goto LABEL_38;
          }
          if ( a5 )
            *(_QWORD *)(a4 + 112) = v28;
        }
LABEL_33:
        if ( *((_DWORD *)v28 + 50) != -1 )
        {
          v31 = *(_DWORD *)(a4 + 120);
          if ( v31 )
            *(_DWORD *)(a4 + 120) = v31 - 1;
        }
        if ( (*(_BYTE *)(v30 + 224) & 1) != 0 )
        {
          v58 = *(_DWORD *)(a4 + 152);
          if ( v58 )
            *(_DWORD *)(a4 + 152) = v58 - 1;
        }
        v27 = *(_QWORD *)(a4 + 112) == 0LL;
LABEL_38:
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0x106u);
          goto LABEL_44;
        }
LABEL_39:
        v32 = *(_QWORD *)(a1 + 16);
        if ( v27 )
        {
          v12 = 0;
          v13 = 0LL;
          if ( v32 )
          {
            LODWORD(v10) = *(_DWORD *)(a1 + 28);
            if ( (_DWORD)v10 == 1 )
            {
              v59 = *(_DWORD *)(a1 + 24);
              LODWORD(v10) = -1;
              if ( v59 != -1 )
              {
                v10 = *(_QWORD *)(v32 + 72);
                if ( (v10 & 2) != 0 )
                  v60 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  LODWORD(v60) = v10 & 1;
                v41 = (unsigned int)(v59 + 1);
                if ( (unsigned int)v41 < (unsigned int)v60 )
                  goto LABEL_61;
              }
            }
            else if ( !(_DWORD)v10 )
            {
              LODWORD(v10) = *(_DWORD *)(a1 + 24);
              if ( (_DWORD)v10 )
              {
                v41 = (unsigned int)(v10 - 1);
                v10 = *(_QWORD *)(v32 + 72);
LABEL_61:
                if ( (v10 & 2) != 0 )
                {
                  v42 = (unsigned __int64 *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
                  v43 = v10 & 1;
                  v44 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
                }
                else
                {
                  v44 = v10 & 1;
                  v43 = v44;
                  v42 = (unsigned __int64 *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
                }
                if ( v44 <= (unsigned int)v41 )
                  goto LABEL_144;
                if ( (v10 & 2) != 0 )
                  v43 = *v42;
                if ( (unsigned int)v41 >= v43 )
                {
LABEL_144:
                  v10 = 0LL;
                }
                else if ( v43 == 1 )
                {
                  v10 &= 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  v10 = v42[v41 + 2];
                }
                *(_QWORD *)(a1 + 8) = v10;
                v13 = (CVisual *)v10;
                *(_DWORD *)(a1 + 24) = v41;
LABEL_70:
                if ( v13 )
                  goto LABEL_3;
                goto LABEL_40;
              }
            }
          }
          v12 = 1;
          goto LABEL_70;
        }
LABEL_40:
        v33 = *(_DWORD *)(a1 + 4);
        if ( v33 )
        {
          LODWORD(v10) = *(_DWORD *)(a1 + 32);
          v34 = 0LL;
          v35 = 0;
          if ( (_DWORD)v10 )
          {
            v36 = (unsigned int)(v10 - 1);
            *(_DWORD *)(a1 + 32) = v36;
            v10 = 2 * v36;
            v33 = *(_DWORD *)(a1 + 4);
            v65 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * v10);
            v35 = DWORD2(v65);
            v34 = v65;
          }
          v13 = *(CVisual **)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v13;
          *(_QWORD *)(a1 + 16) = v34;
          *(_DWORD *)(a1 + 24) = v35;
          *(_DWORD *)(a1 + 4) = v33 - 1;
          if ( v13 )
            continue;
        }
        goto LABEL_44;
      }
    }
    v8 = CVisual::EnsureTreeData(v13, (const struct CVisualTree *)v7, &v66);
    v12 = v8;
    if ( v8 < 0 )
    {
      v61 = 215;
      goto LABEL_150;
    }
    v8 = CHitTestContext::PreSubgraph((CHitTestContext *)a4, (const struct CVisualTree *)v7, &v69);
    v12 = v8;
    if ( v8 < 0 )
    {
      v61 = 219;
LABEL_150:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, v61);
      goto LABEL_44;
    }
    if ( !v69 )
      goto LABEL_29;
    v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v15 & 2) != 0 )
      v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v15) = v15 & 1;
    if ( !(_DWORD)v15 )
    {
      v12 = 1;
      goto LABEL_26;
    }
    v16 = 0LL;
    v17 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v64 = *(_QWORD *)(a1 + 16);
    DWORD2(v64) = *(_DWORD *)(a1 + 24);
    v18 = *(_DWORD *)(a1 + 32);
    if ( v18 != (_DWORD)v17 )
      goto LABEL_11;
    v51 = 2 * v17;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
      v12 = -2147024362;
LABEL_108:
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v19, 0x8Bu);
      v7 = v70;
      goto LABEL_26;
    }
    if ( v51 <= 0x40 )
      v51 = 64;
    v19 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v51 <= 0x10 )
    {
      v19 = -2147024809;
      goto LABEL_101;
    }
    v52 = 16LL * v51;
    if ( !v52 )
      v52 = 1LL;
    lpMem = HeapAlloc(WPF::g_processHeap, 0, v52);
    v16 = lpMem;
    if ( !lpMem )
    {
      v19 = -2147024882;
LABEL_101:
      lpMem = 0LL;
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v19, 0x54u);
    }
    else
    {
      v53 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v53 <= 0xFFFFFFFF )
      {
        memcpy_0(v16, *(const void **)(a1 + 48), (unsigned int)v53);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        v18 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 36) = v51;
        *(_QWORD *)(a1 + 48) = v16;
LABEL_11:
        v19 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v18) = v64;
        v20 = *(_DWORD *)(a1 + 56);
        v21 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v21;
        if ( v20 <= v21 )
          v20 = v21;
        *(_DWORD *)(a1 + 56) = v20;
        goto LABEL_14;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( lpMem )
      HeapFree(WPF::g_processHeap, 0, lpMem);
LABEL_14:
    v12 = v19;
    if ( v19 < 0 )
      goto LABEL_108;
    v22 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v15 - 1;
    *(_DWORD *)(a1 + 24) = v22;
    v23 = *(_QWORD *)(a1 + 8);
    v24 = *(_QWORD *)(v23 + 72) & 2LL;
    v25 = *(_QWORD *)(v23 + 72) & 1LL;
    v10 = *(_QWORD *)(v23 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = v24 ? *(_QWORD *)v10 : (unsigned int)v25;
    if ( v26 <= v22 )
      goto LABEL_110;
    if ( v24 )
      v25 = *(_QWORD *)v10;
    if ( v22 >= v25 )
LABEL_110:
      v14 = 0LL;
    else
      v14 = v25 == 1 ? *(_QWORD *)(v23 + 72) & 0xFFFFFFFFFFFFFFFCuLL : *(_QWORD *)(v10 + 8LL * v22 + 16);
    ++*(_DWORD *)(a1 + 4);
    v7 = v70;
    *(_QWORD *)(a1 + 16) = v23;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_26:
    if ( v12 < 0 )
      break;
    if ( !v14 )
      goto LABEL_29;
    v13 = (CVisual *)v14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0xEAu);
LABEL_44:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v62);
  return (unsigned int)v12;
}
