/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180086DD0
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180086B58 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x180086BD0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x180086D08 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x180087E30 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008812C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x180088200 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18008CC34 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C22C4 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801EAAF8 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18021C9A0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  __int64 v8; // r13
  int v9; // eax
  unsigned __int64 Flink; // rcx
  int v11; // edi
  CVisual *i; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // r13d
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r10
  char v25; // r12
  __int64 v26; // rbx
  __int64 v27; // r10
  unsigned __int64 v28; // r15
  int v29; // eax
  _DWORD *v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // rcx
  bool v37; // r13
  bool v38; // al
  __int64 v39; // r11
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  struct CEffect *EffectInternal; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int WorldTransform; // eax
  unsigned int v48; // ecx
  __int64 v49; // rdx
  bool v50; // zf
  int v51; // eax
  __int64 v52; // rax
  _BYTE *v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // eax
  int v57; // eax
  unsigned int v58; // ecx
  unsigned __int64 v59; // rax
  void *v60; // rdi
  void *v61; // rdi
  HANDLE ProcessHeap; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  __int64 v64; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v67; // eax
  struct CInteraction *InteractionInternal; // rax
  _OWORD *v69; // rdx
  int v70; // r11d
  __int64 v71; // rdx
  unsigned int v72; // [rsp+28h] [rbp-91h]
  void *v73; // [rsp+38h] [rbp-81h] BYREF
  __int128 v74; // [rsp+40h] [rbp-79h]
  __int64 v75; // [rsp+50h] [rbp-69h] BYREF
  struct D2D_POINT_2F v76; // [rsp+58h] [rbp-61h] BYREF
  __int128 v77; // [rsp+60h] [rbp-59h] BYREF
  __int128 v78; // [rsp+70h] [rbp-49h]
  struct CTreeData *v79; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v80[64]; // [rsp+88h] [rbp-31h] BYREF
  int v81; // [rsp+C8h] [rbp+Fh]
  char v82; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v83; // [rsp+120h] [rbp+67h]
  bool v84; // [rsp+128h] [rbp+6Fh] BYREF

  v83 = a2;
  v8 = a2;
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService();
  v75 = a3;
  *(_QWORD *)(a1 + 64) = v8;
  *(_DWORD *)(a1 + 72) = 4;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, (void **)&v75);
  v11 = v9;
  if ( v9 < 0 )
  {
    v72 = 197;
    goto LABEL_161;
  }
  for ( i = *(CVisual **)(a1 + 8); ; i = (CVisual *)v13 )
  {
LABEL_3:
    if ( (*((_BYTE *)i + 95) & 4) == 0 && i != *(CVisual **)(v8 + 24) )
    {
      while ( 1 )
      {
LABEL_29:
        v25 = 1;
        if ( (*((_BYTE *)i + 95) & 4) == 0 && i != *(CVisual **)(v8 + 24) )
          goto LABEL_41;
        v26 = *(_QWORD *)(a4 + 16);
        v11 = 0;
        v27 = *(_QWORD *)(a4 + 24);
        v28 = 0LL;
        v25 = 1;
        if ( *(_BYTE *)(v8 + 32) )
        {
          v28 = v26 + 328;
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(*(CVisual **)(a4 + 16));
          if ( TreeDataListHead )
          {
            Flink = (unsigned __int64)TreeDataListHead->Flink;
            if ( TreeDataListHead->Flink != TreeDataListHead )
            {
              while ( *(_QWORD *)(Flink + 32) != v8 )
              {
                Flink = *(_QWORD *)Flink;
                if ( (struct _LIST_ENTRY *)Flink == TreeDataListHead )
                  goto LABEL_32;
              }
              v28 = Flink - 224;
            }
          }
        }
LABEL_32:
        if ( *(_QWORD *)(a4 + 112) )
          goto LABEL_33;
        v37 = *(_DWORD *)(v26 + 100) == 1;
        a5 = v27 && *(_DWORD *)(v27 + 100) == 1;
        v38 = 1;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 216LL))(v26) )
        {
          if ( (**(_DWORD **)(v26 + 224) & 0x200000) == 0
            || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v26),
                !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
                   EffectInternal,
                   56LL)) )
          {
            v38 = 0;
          }
        }
        if ( v37 )
        {
          if ( a5 )
          {
            if ( v38 )
              goto LABEL_57;
          }
          else
          {
            v64 = *(_QWORD *)(v26 + 72);
            if ( (v64 & 2) != 0 )
              v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v64) = v64 & 1;
            if ( (_DWORD)v64 )
            {
LABEL_57:
              v8 = v83;
              goto LABEL_33;
            }
          }
        }
        if ( (*(_BYTE *)(v26 + 93) & 4) == 0 )
          goto LABEL_57;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 256LL))(v26) )
          goto LABEL_57;
        if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(
                          a4 + 144,
                          v44,
                          v45,
                          v46) == 1 )
        {
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v26);
          if ( Transform3DEffectNoRef )
          {
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v26 + 132));
            if ( !CMILMatrix::IsFacingUser(Matrix) )
              goto LABEL_57;
          }
        }
        v8 = v83;
        v81 = 0;
        WorldTransform = CVisual::GetWorldTransform(v26, v83, 4LL, v80, 0LL, 0LL);
        v11 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, WorldTransform, 0xE8u, 0LL);
          goto LABEL_40;
        }
        if ( CHitTestContext::GetPointInLocalSpace(
               (const struct D2D_POINT_2F *)(a4 + 88),
               (const struct CMILMatrix *)v80,
               &v76) )
        {
          v50 = (*(_BYTE *)(a4 + 208) & 1) == 0;
          v82 = 0;
          LOBYTE(v49) = !v50;
          v51 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v26 + 320LL))(
                  v26,
                  v49,
                  &v76,
                  &v82);
          v11 = v51;
          if ( v51 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(Flink, 0LL, 0, v51, 0xF0u, 0LL);
            goto LABEL_40;
          }
          if ( v82 )
            *(_QWORD *)(a4 + 112) = v26;
        }
LABEL_33:
        if ( *(_DWORD *)(v26 + 200) != -1 )
        {
          v29 = *(_DWORD *)(a4 + 144);
          if ( v29 )
            *(_DWORD *)(a4 + 144) = v29 - 1;
        }
        if ( (*(_BYTE *)(v28 + 224) & 1) != 0 )
        {
          v67 = *(_DWORD *)(a4 + 176);
          if ( v67 )
            *(_DWORD *)(a4 + 176) = v67 - 1;
        }
        if ( *(_QWORD *)(a4 + 112) )
        {
          v30 = *(_DWORD **)(v26 + 224);
          if ( (*v30 & 0x400000) == 0 )
            goto LABEL_39;
          v52 = (unsigned int)v30[1];
          v53 = v30 + 2;
          for ( Flink = 0LL; (unsigned int)Flink < (unsigned int)v52; ++v53 )
          {
            if ( *v53 == 10 )
              break;
            Flink = (unsigned int)(Flink + 1);
          }
          if ( (unsigned int)Flink >= (unsigned int)v52 )
          {
            v54 = 0LL;
          }
          else
          {
            Flink = 8 * Flink - (((_BYTE)v52 + 15) & 7);
            v54 = (__int64 *)((char *)v30 + v52 + Flink + 15);
          }
          v55 = *v54;
          if ( v55 && (*(_BYTE *)(v55 + 184) & 4) != 0 )
          {
            *(_QWORD *)&v77 = *(_QWORD *)(a4 + 112);
            InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v26);
            v69 = *(_OWORD **)(a4 + 128);
            *((_QWORD *)&v77 + 1) = InteractionInternal;
            if ( *(_OWORD **)(a4 + 136) == v69 )
            {
              std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
                a4 + 120,
                v69,
                &v77);
            }
            else
            {
              *v69 = v77;
              *(_QWORD *)(a4 + 128) += 16LL;
            }
            *(_QWORD *)(a4 + 112) = 0LL;
          }
          else
          {
LABEL_39:
            v25 = 0;
          }
        }
LABEL_40:
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(Flink, 0LL, 0, v11, 0x106u, 0LL);
          goto LABEL_46;
        }
LABEL_41:
        v31 = *(_QWORD *)(a1 + 16);
        if ( v25 )
        {
          v11 = 0;
          i = 0LL;
          if ( v31 )
          {
            LODWORD(Flink) = *(_DWORD *)(a1 + 28);
            if ( (_DWORD)Flink == 1 )
            {
              v70 = *(_DWORD *)(a1 + 24);
              LODWORD(Flink) = -1;
              if ( v70 != -1 )
              {
                Flink = *(_QWORD *)(v31 + 72);
                if ( (Flink & 2) != 0 )
                  v71 = *(_QWORD *)(Flink & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  LODWORD(v71) = Flink & 1;
                v39 = (unsigned int)(v70 + 1);
                if ( (unsigned int)v39 < (unsigned int)v71 )
                  goto LABEL_63;
              }
            }
            else if ( !(_DWORD)Flink )
            {
              LODWORD(Flink) = *(_DWORD *)(a1 + 24);
              if ( (_DWORD)Flink )
              {
                v39 = (unsigned int)(Flink - 1);
                Flink = *(_QWORD *)(v31 + 72);
LABEL_63:
                if ( (Flink & 2) != 0 )
                {
                  v40 = (unsigned __int64 *)(Flink & 0xFFFFFFFFFFFFFFFCuLL);
                  v41 = Flink & 1;
                  v42 = *(_QWORD *)(Flink & 0xFFFFFFFFFFFFFFFCuLL);
                }
                else
                {
                  v42 = Flink & 1;
                  v41 = v42;
                  v40 = (unsigned __int64 *)(Flink & 0xFFFFFFFFFFFFFFFCuLL);
                }
                if ( v42 <= (unsigned int)v39 )
                  goto LABEL_155;
                if ( (Flink & 2) != 0 )
                  v41 = *v40;
                if ( (unsigned int)v39 >= v41 )
                {
LABEL_155:
                  Flink = 0LL;
                }
                else if ( v41 == 1 )
                {
                  Flink &= 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  Flink = v40[v39 + 2];
                }
                *(_QWORD *)(a1 + 8) = Flink;
                i = (CVisual *)Flink;
                *(_DWORD *)(a1 + 24) = v39;
LABEL_72:
                if ( i )
                  goto LABEL_3;
                goto LABEL_42;
              }
            }
          }
          v11 = 1;
          goto LABEL_72;
        }
LABEL_42:
        v32 = *(_DWORD *)(a1 + 4);
        if ( v32 )
        {
          LODWORD(Flink) = *(_DWORD *)(a1 + 32);
          v33 = 0LL;
          v34 = 0;
          if ( (_DWORD)Flink )
          {
            v35 = (unsigned int)(Flink - 1);
            *(_DWORD *)(a1 + 32) = v35;
            Flink = 2 * v35;
            v32 = *(_DWORD *)(a1 + 4);
            v74 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * Flink);
            v34 = DWORD2(v74);
            v33 = v74;
          }
          i = *(CVisual **)(a1 + 16);
          *(_QWORD *)(a1 + 8) = i;
          *(_QWORD *)(a1 + 16) = v33;
          *(_DWORD *)(a1 + 24) = v34;
          *(_DWORD *)(a1 + 4) = v32 - 1;
          if ( i )
            continue;
        }
        goto LABEL_46;
      }
    }
    v9 = CVisual::EnsureTreeData(i, (const struct CVisualTree *)v8, &v79);
    v11 = v9;
    if ( v9 < 0 )
    {
      v72 = 215;
      goto LABEL_161;
    }
    v9 = CHitTestContext::PreSubgraph((CHitTestContext *)a4, (const struct CVisualTree *)v8, &v84);
    v11 = v9;
    if ( v9 < 0 )
    {
      v72 = 219;
LABEL_161:
      MilInstrumentationCheckHR_MaybeFailFast(Flink, 0LL, 0, v9, v72, 0LL);
      goto LABEL_46;
    }
    if ( !v84 )
      goto LABEL_29;
    v13 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v14 & 2) != 0 )
      v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v14) = v14 & 1;
    if ( !(_DWORD)v14 )
    {
      v11 = 1;
      goto LABEL_26;
    }
    v15 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v78 = *(_QWORD *)(a1 + 16);
    DWORD2(v78) = *(_DWORD *)(a1 + 24);
    v16 = *(_DWORD *)(a1 + 32);
    v73 = 0LL;
    if ( v16 != (_DWORD)v15 )
      goto LABEL_11;
    v56 = 2 * v15;
    *(_QWORD *)&v74 = 2 * v15;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v11 = -2147024362;
LABEL_113:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x8Bu, 0LL);
      v8 = v83;
      goto LABEL_26;
    }
    if ( v56 <= 0x40 )
    {
      v56 = 64;
      *(_QWORD *)&v74 = 64LL;
    }
    v57 = HrMalloc(0x10uLL, v56, &v73);
    v19 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x53u, 0LL);
    }
    else
    {
      v59 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v59 <= 0xFFFFFFFF )
      {
        v60 = v73;
        memcpy_0(v73, *(const void **)(a1 + 48), (unsigned int)v59);
        operator delete(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v74;
        v16 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v60;
LABEL_11:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v16) = v78;
        v17 = *(_DWORD *)(a1 + 56);
        v18 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v18;
        if ( v17 <= v18 )
          v17 = v18;
        v19 = 0;
        *(_DWORD *)(a1 + 56) = v17;
        goto LABEL_14;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v61 = v73;
    if ( v73 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v61);
    }
LABEL_14:
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_113;
    v20 = *(_DWORD *)(a1 + 28) == 1 ? 0LL : (unsigned int)(v14 - 1);
    *(_DWORD *)(a1 + 24) = v20;
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(_QWORD *)(v21 + 72) & 2LL;
    v23 = *(_QWORD *)(v21 + 72) & 1LL;
    Flink = *(_QWORD *)(v21 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    v24 = v22 ? *(_QWORD *)Flink : (unsigned int)v23;
    if ( v24 <= (unsigned int)v20 )
      goto LABEL_115;
    if ( v22 )
      v23 = *(_QWORD *)Flink;
    if ( (unsigned int)v20 >= v23 )
LABEL_115:
      v13 = 0LL;
    else
      v13 = v23 == 1 ? *(_QWORD *)(v21 + 72) & 0xFFFFFFFFFFFFFFFCuLL : *(_QWORD *)(Flink + 8 * v20 + 16);
    ++*(_DWORD *)(a1 + 4);
    v8 = v83;
    *(_QWORD *)(a1 + 16) = v21;
    *(_QWORD *)(a1 + 8) = v13;
LABEL_26:
    if ( v11 < 0 )
      break;
    if ( !v13 )
      goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(Flink, 0LL, 0, v11, 0xEAu, 0LL);
LABEL_46:
  if ( v11 == 1 || v11 == -2147467260 )
    v11 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v75);
  return (unsigned int)v11;
}
