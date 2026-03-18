/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180053E00
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x180004210 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180006454 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x180019128 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180046820 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18005492C (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x1800549E8 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x180054AC8 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x180054BA8 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054C84 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180064700 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800BE710 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v7; // esi
  int v8; // r15d
  _DWORD *v9; // r12
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // rcx
  CPreComputeContext *v18; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // edx
  __int64 v22; // r8
  CVisual *v23; // r11
  CVisual *v24; // rax
  unsigned int v25; // edi
  const struct CVisual **v26; // rdi
  const struct CVisual **v27; // rsi
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdi
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  unsigned __int64 v78; // rsi
  struct _LIST_ENTRY *v79; // rax
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // eax
  unsigned int v83; // eax
  __int64 v84; // rdi
  unsigned int v85; // eax
  __int64 v86; // rdi
  unsigned int v87; // eax
  __int64 v88; // rdi
  unsigned int v89; // eax
  __int64 v90; // rdi
  __int64 v91; // rdi
  __int64 v92; // rdi
  __int64 v93; // rdi
  unsigned int v94; // eax
  __int64 v95; // rdi
  unsigned int v96; // eax
  __int64 v97; // rsi
  unsigned int v98; // eax
  __int64 v99; // rsi
  unsigned int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // rdi
  unsigned int v103; // eax
  __int64 v104; // rdi
  unsigned int v105; // eax
  __int64 v106; // rdi
  unsigned int v107; // eax
  __int64 v108; // rdi
  unsigned int v109; // eax
  __int64 v110; // rdi
  unsigned int v111; // eax
  __int64 v112; // rdi
  unsigned int v113; // eax
  __int64 v114; // rdi
  unsigned int v115; // eax
  __int64 v116; // rdi
  unsigned int v117; // eax
  const struct CVisual *v118; // r14
  int v119; // eax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v121; // r14
  __int64 v122; // r15
  unsigned __int64 v123; // r12
  int v124; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v126; // r10
  __int64 v127; // rcx
  __int64 v128; // r14
  const struct CVisual *v129; // rax
  struct CVisual *v130; // r9
  int v131; // eax
  int v132; // eax
  unsigned int v133; // ecx
  int v134; // eax
  unsigned int v135; // ecx
  int v136; // eax
  unsigned int v137; // ecx
  int v138; // eax
  unsigned int v139; // ecx
  int v140; // eax
  unsigned int v141; // ecx
  int v142; // eax
  unsigned int v143; // ecx
  int v144; // eax
  unsigned int v145; // ecx
  int v146; // eax
  unsigned int v147; // ecx
  int v148; // eax
  unsigned int v149; // ecx
  int v150; // eax
  unsigned int v151; // ecx
  int v152; // eax
  unsigned int v153; // ecx
  int v154; // eax
  unsigned int v155; // ecx
  int v156; // eax
  unsigned int v157; // ecx
  int v158; // eax
  unsigned int v159; // ecx
  int v160; // eax
  unsigned int v161; // ecx
  int v162; // eax
  unsigned int v163; // ecx
  int v164; // eax
  unsigned int v165; // ecx
  int v166; // eax
  unsigned int v167; // ecx
  int v168; // eax
  unsigned int v169; // ecx
  int v170; // eax
  unsigned int v171; // ecx
  unsigned int v172; // [rsp+20h] [rbp-28h]
  void *v173; // [rsp+70h] [rbp+28h] BYREF
  __int64 v174; // [rsp+78h] [rbp+30h]

  Flink = *(struct _LIST_ENTRY **)(*(_QWORD *)this + 512LL);
  if ( Flink && LOBYTE(Flink[1].Blink) )
    BYTE2(Flink[1].Blink) = 1;
  v7 = 0;
  *((_QWORD *)this + 88) = a3;
  *((_QWORD *)this + 89) = a4;
  v8 = 0;
  if ( !*((_QWORD *)this + 79) )
  {
    v124 = CContentBounder::Create(*(struct CComposition **)this, (struct CContentBounder **)this + 79);
    v8 = v124;
    if ( v124 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v124, 0x488u, 0LL);
  }
  if ( v8 < 0 )
  {
    v172 = 59;
    goto LABEL_318;
  }
  v9 = (_DWORD *)((char *)this + 16);
  LODWORD(v173) = 1;
  *((_DWORD *)this + 4) = 0;
  v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 16, &v173);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3Eu, 0LL);
    goto LABEL_82;
  }
  *((_DWORD *)this + 12) = 0;
  LODWORD(v173) = 1;
  v12 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 48, &v173);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x41u, 0LL);
    goto LABEL_82;
  }
  *((_DWORD *)this + 20) = 0;
  LODWORD(v173) = 0;
  v14 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 80, &v173);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x44u, 0LL);
    goto LABEL_82;
  }
  LODWORD(v173) = (_DWORD)FLOAT_1_0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 36) = 0;
  CWatermarkStack<float,2,2,10>::Push((char *)this + 144, &v173);
  *((_DWORD *)this + 44) = 0;
  v173 = (void *)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)this + 176, &v173);
  *((_DWORD *)this + 52) = 0;
  v173 = 0LL;
  CWatermarkStack<void *,2,2,10>::Push((char *)this + 208, &v173);
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 68) = 0;
  if ( *((_DWORD *)this + 82) )
  {
    do
    {
      v127 = *(_QWORD *)(*((_QWORD *)this + 38) + 16LL * v7);
      if ( v127 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 16LL))(v127);
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 82) );
  }
  v16 = 0;
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 304, 16LL);
  v17 = *((_QWORD *)this + 51);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    *((_QWORD *)this + 51) = 0LL;
  }
  *((_DWORD *)this + 128) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 488, 8LL);
  *((_BYTE *)this + 1185) = 0;
  v19 = CPreComputeContext::EnsureLayoutSize(v18, a2);
  v8 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v19, 0x59u, 0LL);
    goto LABEL_82;
  }
  v8 = 0;
  v20 = 0;
  v21 = *(_DWORD *)(*(_QWORD *)this + 1032LL);
  LODWORD(v173) = v21;
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)this;
      v174 = v22;
      v23 = *(CVisual **)(*(_QWORD *)(v22 + 1008) + 8LL * v20);
      v24 = v23;
      Flink = (struct _LIST_ENTRY *)v23;
      if ( v23 )
        break;
LABEL_22:
      if ( ++v20 >= v21 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      if ( (*((_BYTE *)v24 + 95) & 4) == 0 )
        goto LABEL_22;
      if ( v24 == *((CVisual **)a2 + 3) )
        break;
      if ( Flink )
      {
        Flink = Flink[5].Flink;
        if ( Flink )
          Flink = Flink[5].Flink;
      }
      if ( v24 != (CVisual *)Flink )
      {
        v24 = (CVisual *)*((_QWORD *)v24 + 10);
        if ( v24 )
          continue;
      }
      goto LABEL_22;
    }
    *((_DWORD *)this + 278) = 0;
    v8 = 0;
    v78 = *(_QWORD *)(v22 + 384);
    if ( *((_BYTE *)a2 + 32) )
    {
      v79 = (struct _LIST_ENTRY *)((char *)v23 + 328);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v23);
      v126 = TreeDataListHead;
      if ( !TreeDataListHead )
        goto LABEL_93;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_93;
      while ( 1 )
      {
        v79 = Flink - 14;
        if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v126 )
          goto LABEL_93;
      }
      v21 = (unsigned int)v173;
    }
    if ( v79 && v79[7].Blink >= (struct _LIST_ENTRY *)v78 )
    {
      v16 = 0;
LABEL_97:
      if ( v8 >= 0 )
        goto LABEL_22;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v8, 0x4F0u, 0LL);
      goto LABEL_23;
    }
LABEL_93:
    v80 = (**((__int64 (__fastcall ***)(char *, __int64, const struct CVisualTree *, CVisual *, unsigned __int64))this
            + 138))(
            (char *)this + 1104,
            v174,
            a2,
            v23,
            v78);
    v8 = v80;
    if ( v80 < 0 )
    {
      v16 = 0;
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x1Cu, 0LL);
    }
    else
    {
      v82 = (*(__int64 (__fastcall **)(char *, const struct CVisualTree *, unsigned __int64, _QWORD))(*((_QWORD *)this + 138) + 8LL))(
              (char *)this + 1104,
              a2,
              v78,
              0LL);
      v16 = 0;
      v8 = v82;
      if ( v82 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v82, 0x1Eu, 0LL);
    }
    v21 = (unsigned int)v173;
    goto LABEL_97;
  }
LABEL_23:
  if ( v8 < 0 )
  {
    v172 = 94;
    goto LABEL_318;
  }
  v8 = 0;
  v25 = *(_DWORD *)(*(_QWORD *)this + 1064LL);
  if ( v25 )
  {
    v128 = 0LL;
    while ( 1 )
    {
      Flink = *(struct _LIST_ENTRY **)(v128 + *(_QWORD *)(*(_QWORD *)this + 1040LL));
      if ( BYTE2(Flink[10].Flink) )
      {
        v129 = (const struct CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))Flink->Flink[13].Flink)(Flink);
        if ( CVisualTree::IsVisibleInTree(a2, v129) )
        {
          v131 = CPreComputeHelper::DirtyIfChanged(
                   (CPreComputeContext *)((char *)this + 1144),
                   *(struct CComposition **)this,
                   a2,
                   v130,
                   0);
          v8 = v131;
          if ( v131 < 0 )
            break;
        }
      }
      ++v16;
      v128 += 8LL;
      if ( v16 >= v25 )
        goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v131, 0x50Du, 0LL);
  }
LABEL_25:
  if ( v8 < 0 )
  {
    v172 = 99;
LABEL_318:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v8, v172, 0LL);
    goto LABEL_82;
  }
  if ( !*((_BYTE *)this + 1186) )
    goto LABEL_28;
  v26 = *(const struct CVisual ***)(*(_QWORD *)this + 1072LL);
  v27 = *(const struct CVisual ***)(*(_QWORD *)this + 1080LL);
  if ( v26 == v27 )
    goto LABEL_28;
  while ( 1 )
  {
    v118 = *v26;
    if ( CVisualTree::IsVisibleInTree(a2, *v26) )
      break;
LABEL_206:
    if ( ++v26 == v27 )
      goto LABEL_207;
  }
  v119 = CPreComputeHelper::DirtyIfChanged(
           (CPreComputeContext *)((char *)this + 1104),
           *(struct CComposition **)this,
           a2,
           v118,
           0);
  if ( v119 >= 0 )
  {
    if ( (**((_DWORD **)v118 + 28) & 0x20000) != 0 )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)v118);
      v121 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
      v122 = 0LL;
      v123 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
      if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
        v123 = 0LL;
      if ( v123 )
      {
        do
        {
          CProjectedShadowCaster::UpdateVisualProperty(*v121, a2, 0);
          ++v122;
          ++v121;
        }
        while ( v122 != v123 );
      }
    }
    goto LABEL_206;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v119, 0x529u, 0LL);
LABEL_207:
  v9 = (_DWORD *)((char *)this + 16);
LABEL_28:
  v28 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((char *)this + 552, a2, *((_QWORD *)a2 + 3), this);
  v8 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x71u, 0LL);
  }
  else
  {
    if ( *v9 )
      --*v9;
    v30 = *((_DWORD *)this + 6);
    v31 = 64LL;
    if ( v30 == 10 )
    {
      v91 = 64LL;
      if ( *((_DWORD *)this + 10) > 0x40u )
        v91 = *((unsigned int *)this + 10);
      if ( (unsigned __int64)(3 * v91) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v91) <= *((_DWORD *)this + 5) )
      {
        v173 = 0LL;
        v132 = HrMalloc(4uLL, (unsigned int)v91, &v173);
        if ( v132 >= 0 )
        {
          operator delete(*((void **)this + 4));
          *((_QWORD *)this + 4) = v173;
          *((_DWORD *)this + 5) = v91;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v133, 0LL, 0, v132, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 10) = 0;
      v32 = 0;
    }
    else
    {
      v32 = v30 + 1;
    }
    *((_DWORD *)this + 6) = v32;
    v33 = *((_DWORD *)this + 12);
    if ( v33 )
      *((_DWORD *)this + 12) = v33 - 1;
    v34 = *((_DWORD *)this + 14);
    if ( v34 == 10 )
    {
      v92 = 64LL;
      if ( *((_DWORD *)this + 18) > 0x40u )
        v92 = *((unsigned int *)this + 18);
      if ( (unsigned __int64)(3 * v92) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v92) <= *((_DWORD *)this + 13) )
      {
        v173 = 0LL;
        v134 = HrMalloc(4uLL, (unsigned int)v92, &v173);
        if ( v134 >= 0 )
        {
          operator delete(*((void **)this + 8));
          *((_QWORD *)this + 8) = v173;
          *((_DWORD *)this + 13) = v92;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, v134, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 18) = 0;
      v35 = 0;
    }
    else
    {
      v35 = v34 + 1;
    }
    *((_DWORD *)this + 14) = v35;
    v36 = *((_DWORD *)this + 20);
    if ( v36 )
      *((_DWORD *)this + 20) = v36 - 1;
    v37 = *((_DWORD *)this + 22);
    if ( v37 == 10 )
    {
      v93 = 64LL;
      if ( *((_DWORD *)this + 26) > 0x40u )
        v93 = *((unsigned int *)this + 26);
      if ( (unsigned __int64)(3 * v93) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v93) <= *((_DWORD *)this + 21) )
      {
        v173 = 0LL;
        v136 = HrMalloc(4uLL, (unsigned int)v93, &v173);
        if ( v136 >= 0 )
        {
          operator delete(*((void **)this + 12));
          *((_QWORD *)this + 12) = v173;
          *((_DWORD *)this + 21) = v93;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v137, 0LL, 0, v136, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 26) = 0;
      v38 = 0;
    }
    else
    {
      v38 = v37 + 1;
    }
    *((_DWORD *)this + 22) = v38;
    v39 = *((_DWORD *)this + 30);
    if ( v39 == 10 )
    {
      v94 = *((_DWORD *)this + 34);
      v95 = 64LL;
      if ( v94 > 0x40 )
        v95 = v94;
      if ( (unsigned __int64)(3 * v95) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v95) <= *((_DWORD *)this + 29) )
      {
        v173 = 0LL;
        v138 = HrMalloc(0x10uLL, (unsigned int)v95, &v173);
        if ( v138 >= 0 )
        {
          operator delete(*((void **)this + 16));
          *((_QWORD *)this + 16) = v173;
          *((_DWORD *)this + 29) = v95;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v139, 0LL, 0, v138, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 34) = 0;
      v40 = 0;
    }
    else
    {
      v40 = v39 + 1;
    }
    *((_DWORD *)this + 30) = v40;
    v41 = *((_DWORD *)this + 36);
    if ( v41 )
      *((_DWORD *)this + 36) = v41 - 1;
    v42 = *((_DWORD *)this + 38);
    v43 = 2LL;
    if ( v42 == 10 )
    {
      v96 = *((_DWORD *)this + 42);
      v97 = 2LL;
      if ( v96 > 2 )
        v97 = v96;
      if ( (unsigned __int64)(3 * v97) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v97) <= *((_DWORD *)this + 37) )
      {
        v173 = 0LL;
        v140 = HrMalloc(4uLL, (unsigned int)v97, &v173);
        if ( v140 >= 0 )
        {
          operator delete(*((void **)this + 20));
          *((_QWORD *)this + 20) = v173;
          *((_DWORD *)this + 37) = v97;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v141, 0LL, 0, v140, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 42) = 0;
      v44 = 0;
    }
    else
    {
      v44 = v42 + 1;
    }
    *((_DWORD *)this + 38) = v44;
    v45 = *((_DWORD *)this + 44);
    if ( v45 )
      *((_DWORD *)this + 44) = v45 - 1;
    v46 = *((_DWORD *)this + 46);
    if ( v46 == 10 )
    {
      v98 = *((_DWORD *)this + 50);
      v99 = 2LL;
      if ( v98 > 2 )
        v99 = v98;
      if ( (unsigned __int64)(3 * v99) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v99) <= *((_DWORD *)this + 45) )
      {
        v173 = 0LL;
        v142 = HrMalloc(8uLL, (unsigned int)v99, &v173);
        if ( v142 >= 0 )
        {
          operator delete(*((void **)this + 24));
          *((_QWORD *)this + 24) = v173;
          *((_DWORD *)this + 45) = v99;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v143, 0LL, 0, v142, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 50) = 0;
      v47 = 0;
    }
    else
    {
      v47 = v46 + 1;
    }
    *((_DWORD *)this + 46) = v47;
    v48 = *((_DWORD *)this + 52);
    if ( v48 )
      *((_DWORD *)this + 52) = v48 - 1;
    v49 = *((_DWORD *)this + 54);
    if ( v49 == 10 )
    {
      v100 = *((_DWORD *)this + 58);
      if ( v100 > 2 )
        v43 = v100;
      if ( (unsigned __int64)(3 * v43) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v43) <= *((_DWORD *)this + 53) )
      {
        v173 = 0LL;
        v144 = HrMalloc(8uLL, (unsigned int)v43, &v173);
        if ( v144 >= 0 )
        {
          operator delete(*((void **)this + 28));
          *((_QWORD *)this + 28) = v173;
          *((_DWORD *)this + 53) = v43;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v145, 0LL, 0, v144, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 58) = 0;
      v50 = 0;
    }
    else
    {
      v50 = v49 + 1;
    }
    *((_DWORD *)this + 54) = v50;
    v51 = *((_DWORD *)this + 62);
    if ( v51 == 8 )
    {
      v83 = *((_DWORD *)this + 66);
      v84 = 8LL;
      if ( v83 > 8 )
        v84 = v83;
      if ( (unsigned __int64)(3 * v84) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v84) <= *((_DWORD *)this + 61) )
      {
        v173 = 0LL;
        v146 = HrMalloc(0x44uLL, (unsigned int)v84, &v173);
        if ( v146 >= 0 )
        {
          operator delete(*((void **)this + 32));
          *((_QWORD *)this + 32) = v173;
          *((_DWORD *)this + 61) = v84;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v147, 0LL, 0, v146, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 66) = 0;
      v52 = 0;
    }
    else
    {
      v52 = v51 + 1;
    }
    *((_DWORD *)this + 62) = v52;
    v53 = *((_DWORD *)this + 70);
    if ( v53 == 8 )
    {
      v89 = *((_DWORD *)this + 74);
      v90 = 8LL;
      if ( v89 > 8 )
        v90 = v89;
      if ( (unsigned __int64)(3 * v90) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v90) <= *((_DWORD *)this + 69) )
      {
        v173 = 0LL;
        v148 = HrMalloc(0x10uLL, (unsigned int)v90, &v173);
        if ( v148 >= 0 )
        {
          operator delete(*((void **)this + 36));
          *((_QWORD *)this + 36) = v173;
          *((_DWORD *)this + 69) = v90;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v149, 0LL, 0, v148, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 74) = 0;
      v54 = 0;
    }
    else
    {
      v54 = v53 + 1;
    }
    *((_DWORD *)this + 70) = v54;
    *((_DWORD *)this + 274) = 0;
    v55 = *((_DWORD *)this + 268);
    if ( v55 == 10 )
    {
      v101 = *((_DWORD *)this + 272);
      v102 = 64LL;
      if ( v101 > 0x40 )
        v102 = v101;
      if ( (unsigned __int64)(3 * v102) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v102) <= *((_DWORD *)this + 267) )
      {
        v173 = 0LL;
        v150 = HrMalloc(4uLL, (unsigned int)v102, &v173);
        if ( v150 >= 0 )
        {
          operator delete(*((void **)this + 135));
          *((_QWORD *)this + 135) = v173;
          *((_DWORD *)this + 267) = v102;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v151, 0LL, 0, v150, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 272) = 0;
      v56 = 0;
    }
    else
    {
      v56 = v55 + 1;
    }
    *((_DWORD *)this + 268) = v56;
    v57 = *((_DWORD *)this + 260);
    if ( v57 == 10 )
    {
      v103 = *((_DWORD *)this + 264);
      v104 = 64LL;
      if ( v103 > 0x40 )
        v104 = v103;
      if ( (unsigned __int64)(3 * v104) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v104) <= *((_DWORD *)this + 259) )
      {
        v173 = 0LL;
        v152 = HrMalloc(1uLL, (unsigned int)v104, &v173);
        if ( v152 >= 0 )
        {
          operator delete(*((void **)this + 131));
          *((_QWORD *)this + 131) = v173;
          *((_DWORD *)this + 259) = v104;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v153, 0LL, 0, v152, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 264) = 0;
      v58 = 0;
    }
    else
    {
      v58 = v57 + 1;
    }
    *((_DWORD *)this + 260) = v58;
    v59 = *((_DWORD *)this + 252);
    if ( v59 == 10 )
    {
      v105 = *((_DWORD *)this + 256);
      v106 = 64LL;
      if ( v105 > 0x40 )
        v106 = v105;
      if ( (unsigned __int64)(3 * v106) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v106) <= *((_DWORD *)this + 251) )
      {
        v173 = 0LL;
        v154 = HrMalloc(4uLL, (unsigned int)v106, &v173);
        if ( v154 >= 0 )
        {
          operator delete(*((void **)this + 127));
          *((_QWORD *)this + 127) = v173;
          *((_DWORD *)this + 251) = v106;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, v154, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 256) = 0;
      v60 = 0;
    }
    else
    {
      v60 = v59 + 1;
    }
    *((_DWORD *)this + 252) = v60;
    v61 = *((_DWORD *)this + 244);
    if ( v61 == 10 )
    {
      v107 = *((_DWORD *)this + 248);
      v108 = 64LL;
      if ( v107 > 0x40 )
        v108 = v107;
      if ( (unsigned __int64)(3 * v108) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v108) <= *((_DWORD *)this + 243) )
      {
        v173 = 0LL;
        v156 = HrMalloc(4uLL, (unsigned int)v108, &v173);
        if ( v156 >= 0 )
        {
          operator delete(*((void **)this + 123));
          *((_QWORD *)this + 123) = v173;
          *((_DWORD *)this + 243) = v108;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0, v156, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 248) = 0;
      v62 = 0;
    }
    else
    {
      v62 = v61 + 1;
    }
    *((_DWORD *)this + 244) = v62;
    v63 = *((_DWORD *)this + 236);
    if ( v63 == 10 )
    {
      v109 = *((_DWORD *)this + 240);
      v110 = 64LL;
      if ( v109 > 0x40 )
        v110 = v109;
      if ( (unsigned __int64)(3 * v110) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v110) <= *((_DWORD *)this + 235) )
      {
        v173 = 0LL;
        v158 = HrMalloc(4uLL, (unsigned int)v110, &v173);
        if ( v158 >= 0 )
        {
          operator delete(*((void **)this + 119));
          *((_QWORD *)this + 119) = v173;
          *((_DWORD *)this + 235) = v110;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, v158, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 240) = 0;
      v64 = 0;
    }
    else
    {
      v64 = v63 + 1;
    }
    *((_DWORD *)this + 236) = v64;
    v65 = *((_DWORD *)this + 228);
    if ( v65 == 10 )
    {
      v111 = *((_DWORD *)this + 232);
      v112 = 64LL;
      if ( v111 > 0x40 )
        v112 = v111;
      if ( (unsigned __int64)(3 * v112) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v112) <= *((_DWORD *)this + 227) )
      {
        v173 = 0LL;
        v160 = HrMalloc(4uLL, (unsigned int)v112, &v173);
        if ( v160 >= 0 )
        {
          operator delete(*((void **)this + 115));
          *((_QWORD *)this + 115) = v173;
          *((_DWORD *)this + 227) = v112;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, v160, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 232) = 0;
      v66 = 0;
    }
    else
    {
      v66 = v65 + 1;
    }
    *((_DWORD *)this + 228) = v66;
    v67 = *((_DWORD *)this + 220);
    if ( v67 == 10 )
    {
      v113 = *((_DWORD *)this + 224);
      v114 = 64LL;
      if ( v113 > 0x40 )
        v114 = v113;
      if ( (unsigned __int64)(3 * v114) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v114) <= *((_DWORD *)this + 219) )
      {
        v173 = 0LL;
        v162 = HrMalloc(4uLL, (unsigned int)v114, &v173);
        if ( v162 >= 0 )
        {
          operator delete(*((void **)this + 111));
          *((_QWORD *)this + 111) = v173;
          *((_DWORD *)this + 219) = v114;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v163, 0LL, 0, v162, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 224) = 0;
      v68 = 0;
    }
    else
    {
      v68 = v67 + 1;
    }
    *((_DWORD *)this + 220) = v68;
    v69 = *((_DWORD *)this + 212);
    if ( v69 == 8 )
    {
      v85 = *((_DWORD *)this + 216);
      v86 = 8LL;
      if ( v85 > 8 )
        v86 = v85;
      if ( (unsigned __int64)(3 * v86) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v86) <= *((_DWORD *)this + 211) )
      {
        v173 = 0LL;
        v164 = HrMalloc(0x44uLL, (unsigned int)v86, &v173);
        if ( v164 >= 0 )
        {
          operator delete(*((void **)this + 107));
          *((_QWORD *)this + 107) = v173;
          *((_DWORD *)this + 211) = v86;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v165, 0LL, 0, v164, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 216) = 0;
      v70 = 0;
    }
    else
    {
      v70 = v69 + 1;
    }
    *((_DWORD *)this + 212) = v70;
    v71 = *((_DWORD *)this + 204);
    if ( v71 == 8 )
    {
      v87 = *((_DWORD *)this + 208);
      v88 = 8LL;
      if ( v87 > 8 )
        v88 = v87;
      if ( (unsigned __int64)(3 * v88) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v88) <= *((_DWORD *)this + 203) )
      {
        v173 = 0LL;
        v166 = HrMalloc(0x44uLL, (unsigned int)v88, &v173);
        if ( v166 >= 0 )
        {
          operator delete(*((void **)this + 103));
          *((_QWORD *)this + 103) = v173;
          *((_DWORD *)this + 203) = v88;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, v166, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 208) = 0;
      v72 = 0;
    }
    else
    {
      v72 = v71 + 1;
    }
    *((_DWORD *)this + 204) = v72;
    v73 = *((_DWORD *)this + 196);
    if ( v73 == 10 )
    {
      v115 = *((_DWORD *)this + 200);
      v116 = 64LL;
      if ( v115 > 0x40 )
        v116 = v115;
      if ( (unsigned __int64)(3 * v116) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v116) <= *((_DWORD *)this + 195) )
      {
        v173 = 0LL;
        v168 = HrMalloc(8uLL, (unsigned int)v116, &v173);
        if ( v168 >= 0 )
        {
          operator delete(*((void **)this + 99));
          *((_QWORD *)this + 99) = v173;
          *((_DWORD *)this + 195) = v116;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v169, 0LL, 0, v168, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 200) = 0;
      v74 = 0;
    }
    else
    {
      v74 = v73 + 1;
    }
    *((_DWORD *)this + 196) = v74;
    v75 = *((_DWORD *)this + 188);
    if ( v75 == 10 )
    {
      v117 = *((_DWORD *)this + 192);
      if ( v117 > 0x40 )
        v31 = v117;
      if ( (unsigned __int64)(3 * v31) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xEEu, 0LL);
      }
      else if ( (unsigned int)(3 * v31) <= *((_DWORD *)this + 187) )
      {
        v173 = 0LL;
        v170 = HrMalloc(8uLL, (unsigned int)v31, &v173);
        if ( v170 >= 0 )
        {
          operator delete(*((void **)this + 95));
          *((_QWORD *)this + 95) = v173;
          *((_DWORD *)this + 187) = v31;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v171, 0LL, 0, v170, 0xFEu, 0LL);
        }
      }
      *((_DWORD *)this + 192) = 0;
      v76 = 0;
    }
    else
    {
      v76 = v75 + 1;
    }
    *((_DWORD *)this + 188) = v76;
  }
LABEL_82:
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_BYTE *)this + 1185) = 0;
  if ( *((_BYTE *)a2 + 32) )
  {
    if ( *((_DWORD *)this + 166) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 80));
    *((_DWORD *)this + 166) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 640, 16LL);
    if ( *((_DWORD *)this + 174) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 84));
    *((_DWORD *)this + 174) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 672, 80LL);
  }
  return (unsigned int)v8;
}
