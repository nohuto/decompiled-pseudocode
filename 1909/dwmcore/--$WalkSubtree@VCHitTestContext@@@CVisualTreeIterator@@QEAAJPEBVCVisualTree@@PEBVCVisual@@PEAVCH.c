/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007E5F0
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800A9B4C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180061D20 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180067EE4 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18007B0E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18007E400 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007EC10 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AFA64 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C1E14 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800C8AF0 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800C9340 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E9388 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18021B2B0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  __int64 v8; // r13
  signed int v9; // eax
  unsigned __int64 j; // rcx
  signed int v11; // edi
  CVisual *i; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  signed int v19; // r13d
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
  signed int WorldTransform; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  bool v47; // zf
  signed int v48; // eax
  __int64 v49; // rax
  _BYTE *v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // eax
  signed int v54; // eax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  void *v57; // rdi
  void *v58; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int64 *TreeDataListHead; // rax
  __int64 v61; // rax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v64; // eax
  struct CInteraction *InteractionInternal; // rax
  _OWORD *v66; // rdx
  int v67; // r11d
  __int64 v68; // rdx
  unsigned int v69; // [rsp+28h] [rbp-91h]
  void *v70; // [rsp+38h] [rbp-81h] BYREF
  __int128 v71; // [rsp+40h] [rbp-79h]
  __int64 v72; // [rsp+50h] [rbp-69h] BYREF
  struct D2D_POINT_2F v73; // [rsp+58h] [rbp-61h] BYREF
  __int128 v74; // [rsp+60h] [rbp-59h] BYREF
  __int128 v75; // [rsp+70h] [rbp-49h]
  struct CTreeData *v76; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v77[64]; // [rsp+88h] [rbp-31h] BYREF
  int v78; // [rsp+C8h] [rbp+Fh]
  char v79; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v80; // [rsp+120h] [rbp+67h]
  bool v81; // [rsp+128h] [rbp+6Fh] BYREF

  v80 = a2;
  v8 = a2;
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService();
  v72 = a3;
  *(_QWORD *)(a1 + 64) = v8;
  *(_DWORD *)(a1 + 72) = 4;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, &v72);
  v11 = v9;
  if ( v9 < 0 )
  {
    v69 = 197;
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
          TreeDataListHead = (unsigned __int64 *)CVisual::GetTreeDataListHead(*(CVisual **)(a4 + 16));
          if ( TreeDataListHead )
          {
            j = *TreeDataListHead;
            if ( (unsigned __int64 *)*TreeDataListHead != TreeDataListHead )
            {
              while ( *(_QWORD *)(j + 32) != v8 )
              {
                j = *(_QWORD *)j;
                if ( (unsigned __int64 *)j == TreeDataListHead )
                  goto LABEL_32;
              }
              v28 = j - 224;
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
            v61 = *(_QWORD *)(v26 + 72);
            if ( (v61 & 2) != 0 )
              v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v61) = v61 & 1;
            if ( (_DWORD)v61 )
            {
LABEL_57:
              v8 = v80;
              goto LABEL_33;
            }
          }
        }
        if ( (*(_BYTE *)(v26 + 93) & 4) == 0 )
          goto LABEL_57;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 256LL))(v26) )
          goto LABEL_57;
        if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(a4 + 144) == 1 )
        {
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v26);
          if ( Transform3DEffectNoRef )
          {
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v26 + 132));
            if ( !CMILMatrix::IsFacingUser(Matrix) )
              goto LABEL_57;
          }
        }
        v8 = v80;
        v78 = 0;
        WorldTransform = CVisual::GetWorldTransform((struct _LIST_ENTRY *)v26, v80, 4, (__int64)v77, 0LL, 0LL);
        v11 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, WorldTransform, 0xE8u, 0LL);
          goto LABEL_40;
        }
        if ( CHitTestContext::GetPointInLocalSpace(
               (const struct D2D_POINT_2F *)(a4 + 88),
               (const struct CMILMatrix *)v77,
               &v73) )
        {
          v47 = (*(_BYTE *)(a4 + 208) & 1) == 0;
          v79 = 0;
          LOBYTE(v46) = !v47;
          v48 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v26 + 320LL))(
                  v26,
                  v46,
                  &v73,
                  &v79);
          v11 = v48;
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v48, 0xF0u, 0LL);
            goto LABEL_40;
          }
          if ( v79 )
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
          v64 = *(_DWORD *)(a4 + 176);
          if ( v64 )
            *(_DWORD *)(a4 + 176) = v64 - 1;
        }
        if ( *(_QWORD *)(a4 + 112) )
        {
          v30 = *(_DWORD **)(v26 + 224);
          if ( (*v30 & 0x400000) == 0 )
            goto LABEL_39;
          v49 = (unsigned int)v30[1];
          v50 = v30 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v49; ++v50 )
          {
            if ( *v50 == 10 )
              break;
            j = (unsigned int)(j + 1);
          }
          if ( (unsigned int)j >= (unsigned int)v49 )
          {
            v51 = 0LL;
          }
          else
          {
            j = 8 * j - (((_BYTE)v49 + 15) & 7);
            v51 = (__int64 *)((char *)v30 + v49 + j + 15);
          }
          v52 = *v51;
          if ( v52 && (*(_BYTE *)(v52 + 184) & 4) != 0 )
          {
            *(_QWORD *)&v74 = *(_QWORD *)(a4 + 112);
            InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v26);
            v66 = *(_OWORD **)(a4 + 128);
            *((_QWORD *)&v74 + 1) = InteractionInternal;
            if ( *(_OWORD **)(a4 + 136) == v66 )
            {
              std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
                a4 + 120,
                v66,
                &v74);
            }
            else
            {
              *v66 = v74;
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
          MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v11, 0x106u, 0LL);
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
            j = *(unsigned int *)(a1 + 28);
            if ( (_DWORD)j == 1 )
            {
              v67 = *(_DWORD *)(a1 + 24);
              j = 0xFFFFFFFFLL;
              if ( v67 != -1 )
              {
                j = *(_QWORD *)(v31 + 72);
                if ( (j & 2) != 0 )
                  v68 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  LODWORD(v68) = j & 1;
                v39 = (unsigned int)(v67 + 1);
                if ( (unsigned int)v39 < (unsigned int)v68 )
                  goto LABEL_63;
              }
            }
            else if ( !(_DWORD)j )
            {
              j = *(unsigned int *)(a1 + 24);
              if ( (_DWORD)j )
              {
                v39 = (unsigned int)(j - 1);
                j = *(_QWORD *)(v31 + 72);
LABEL_63:
                if ( (j & 2) != 0 )
                {
                  v40 = (unsigned __int64 *)(j & 0xFFFFFFFFFFFFFFFCuLL);
                  v41 = j & 1;
                  v42 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
                }
                else
                {
                  v42 = j & 1;
                  v41 = v42;
                  v40 = (unsigned __int64 *)(j & 0xFFFFFFFFFFFFFFFCuLL);
                }
                if ( v42 <= (unsigned int)v39 )
                  goto LABEL_155;
                if ( (j & 2) != 0 )
                  v41 = *v40;
                if ( (unsigned int)v39 >= v41 )
                {
LABEL_155:
                  j = 0LL;
                }
                else if ( v41 == 1 )
                {
                  j &= 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  j = v40[v39 + 2];
                }
                *(_QWORD *)(a1 + 8) = j;
                i = (CVisual *)j;
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
          j = *(unsigned int *)(a1 + 32);
          v33 = 0LL;
          v34 = 0;
          if ( (_DWORD)j )
          {
            v35 = (unsigned int)(j - 1);
            *(_DWORD *)(a1 + 32) = v35;
            j = 2 * v35;
            v32 = *(_DWORD *)(a1 + 4);
            v71 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 8 * j);
            v34 = DWORD2(v71);
            v33 = v71;
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
    v9 = CVisual::EnsureTreeData(i, (const struct CVisualTree *)v8, &v76);
    v11 = v9;
    if ( v9 < 0 )
    {
      v69 = 215;
      goto LABEL_161;
    }
    v9 = CHitTestContext::PreSubgraph((CHitTestContext *)a4, (const struct CVisualTree *)v8, &v81);
    v11 = v9;
    if ( v9 < 0 )
    {
      v69 = 219;
LABEL_161:
      MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v9, v69, 0LL);
      goto LABEL_46;
    }
    if ( !v81 )
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
    *(_QWORD *)&v75 = *(_QWORD *)(a1 + 16);
    DWORD2(v75) = *(_DWORD *)(a1 + 24);
    v16 = *(_DWORD *)(a1 + 32);
    v70 = 0LL;
    if ( v16 != (_DWORD)v15 )
      goto LABEL_11;
    v53 = 2 * v15;
    *(_QWORD *)&v71 = 2 * v15;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
      v11 = -2147024362;
LABEL_113:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x8Bu, 0LL);
      v8 = v80;
      goto LABEL_26;
    }
    if ( v53 <= 0x40 )
    {
      v53 = 64;
      *(_QWORD *)&v71 = 64LL;
    }
    v54 = HrMalloc(0x10uLL, v53, &v70);
    v19 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x53u, 0LL);
    }
    else
    {
      v56 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v56 <= 0xFFFFFFFF )
      {
        v57 = v70;
        memcpy_0(v70, *(const void **)(a1 + 48), (unsigned int)v56);
        operator delete(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v71;
        v16 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v57;
LABEL_11:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v16) = v75;
        v17 = *(_DWORD *)(a1 + 56);
        v18 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
        *(_DWORD *)(a1 + 32) = v18;
        if ( v17 <= (unsigned int)v18 )
          v17 = v18;
        v19 = 0;
        *(_DWORD *)(a1 + 56) = v17;
        goto LABEL_14;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, 0x80070216, 0x55u, 0LL);
    }
    v58 = v70;
    if ( v70 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v58);
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
    j = *(_QWORD *)(v21 + 72) & 0xFFFFFFFFFFFFFFFCuLL;
    v24 = v22 ? *(_QWORD *)j : (unsigned int)v23;
    if ( v24 <= (unsigned int)v20 )
      goto LABEL_115;
    if ( v22 )
      v23 = *(_QWORD *)j;
    if ( (unsigned int)v20 >= v23 )
LABEL_115:
      v13 = 0LL;
    else
      v13 = v23 == 1 ? *(_QWORD *)(v21 + 72) & 0xFFFFFFFFFFFFFFFCuLL : *(_QWORD *)(j + 8 * v20 + 16);
    ++*(_DWORD *)(a1 + 4);
    v8 = v80;
    *(_QWORD *)(a1 + 16) = v21;
    *(_QWORD *)(a1 + 8) = v13;
LABEL_26:
    if ( v11 < 0 )
      break;
    if ( !v13 )
      goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0, v11, 0xEAu, 0LL);
LABEL_46:
  if ( v11 == 1 || v11 == -2147467260 )
    v11 = 0;
  CGraphWalker<CVisual>::EndWalk(a1, v72);
  return (unsigned int)v11;
}
