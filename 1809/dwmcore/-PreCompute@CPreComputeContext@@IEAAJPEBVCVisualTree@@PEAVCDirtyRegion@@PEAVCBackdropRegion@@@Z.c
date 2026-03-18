/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001B804 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ @ 0x180031FAC (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800431B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18004B614 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18004B950 (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z @ 0x18004BF14 (-EnsureLayoutSize@CPreComputeContext@@AEAAJPEBVCVisualTree@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x18004BFD0 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x18004C120 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x18004C268 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008F0A0 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x1801AE514 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        void **a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  CPreComputeContext *v4; // r13
  __int64 v6; // rdx
  unsigned int v7; // esi
  int v8; // ebp
  _DWORD *v9; // r15
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  CPreComputeContext *v16; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  __int64 v20; // r15
  CPreComputeContext *v21; // r11
  CPreComputeContext *v22; // rax
  unsigned int v23; // edi
  const struct CVisual **v24; // rdi
  const struct CVisual **v25; // rsi
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  unsigned __int64 v33; // rsi
  char *v34; // rax
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // eax
  CPreComputeContext **TreeDataListHead; // rax
  CPreComputeContext *v40; // r10
  __int64 v41; // r14
  const struct CVisual *v42; // rax
  struct CVisual *v43; // r9
  int v44; // eax
  struct CVisual *v45; // r15
  __int64 ProjectedShadowCasters; // rax
  __int64 v47; // r12
  CProjectedShadowCaster **v48; // r14
  unsigned __int64 v49; // rbp
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // [rsp+20h] [rbp-38h]
  unsigned __int64 v53; // [rsp+60h] [rbp+8h] BYREF

  v4 = this;
  v6 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  if ( v6 && *(_BYTE *)(v6 + 24) )
    *(_BYTE *)(v6 + 26) = 1;
  v7 = 0;
  *((_QWORD *)this + 87) = a3;
  *((_QWORD *)this + 88) = a4;
  v8 = 0;
  if ( !*((_QWORD *)this + 78) )
  {
    v38 = CContentBounder::Create(*(struct CComposition **)this, (struct CContentBounder **)this + 78);
    v8 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v38, 0x488u);
  }
  if ( v8 < 0 )
  {
    v52 = 59;
    goto LABEL_83;
  }
  v9 = (_DWORD *)((char *)v4 + 8);
  LODWORD(v53) = 1;
  *((_DWORD *)v4 + 2) = 0;
  v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v4 + 8, &v53);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3Eu);
    goto LABEL_34;
  }
  *((_DWORD *)v4 + 10) = 0;
  LODWORD(v53) = 1;
  v12 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v4 + 40, &v53);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x41u);
    goto LABEL_34;
  }
  *((_DWORD *)v4 + 18) = 0;
  LODWORD(v53) = 0;
  v14 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v4 + 72, &v53);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x44u);
    goto LABEL_34;
  }
  *(float *)&v53 = FLOAT_1_0;
  *((_DWORD *)v4 + 34) = 0;
  *((_DWORD *)v4 + 26) = 0;
  CWatermarkStack<float,2,2,10>::Push((char *)v4 + 136, &v53);
  *((_DWORD *)v4 + 42) = 0;
  v53 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)v4 + 168, &v53);
  v53 = 0LL;
  *((_DWORD *)v4 + 50) = 0;
  CWatermarkStack<void *,2,2,10>::Push((char *)v4 + 200, &v53);
  *((_BYTE *)v4 + 1177) = 0;
  v17 = CPreComputeContext::EnsureLayoutSize(v16, (const struct CVisualTree *)a2);
  v8 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v17, 0x52u);
    goto LABEL_34;
  }
  v8 = 0;
  v18 = 0;
  v19 = *(_DWORD *)(*(_QWORD *)v4 + 1016LL);
  if ( !v19 )
    goto LABEL_21;
  do
  {
    v20 = *(_QWORD *)v4;
    v21 = *(CPreComputeContext **)(*(_QWORD *)(*(_QWORD *)v4 + 992LL) + 8LL * v18);
    v22 = v21;
    this = v21;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)v22 + 95) & 8) == 0 )
          goto LABEL_19;
        if ( v22 == a2[3] )
          break;
        if ( this )
        {
          this = (CPreComputeContext *)*((_QWORD *)this + 10);
          if ( this )
            this = (CPreComputeContext *)*((_QWORD *)this + 10);
        }
        if ( v22 != this )
        {
          v22 = (CPreComputeContext *)*((_QWORD *)v22 + 10);
          if ( v22 )
            continue;
        }
        goto LABEL_19;
      }
      *((_DWORD *)v4 + 276) = 0;
      v8 = 0;
      v33 = *(_QWORD *)(v20 + 368);
      if ( *((_BYTE *)a2 + 32) )
      {
        v34 = (char *)v21 + 328;
      }
      else
      {
        TreeDataListHead = (CPreComputeContext **)CVisual::GetTreeDataListHead(v21);
        v40 = (CPreComputeContext *)TreeDataListHead;
        if ( !TreeDataListHead )
          goto LABEL_45;
        this = *TreeDataListHead;
        if ( *TreeDataListHead == (CPreComputeContext *)TreeDataListHead )
          goto LABEL_45;
        while ( 1 )
        {
          v34 = (char *)this - 224;
          if ( *((void ***)this + 4) == a2 )
            break;
          this = *(CPreComputeContext **)this;
          if ( this == v40 )
            goto LABEL_45;
        }
      }
      if ( v34 && *((_QWORD *)v34 + 15) >= v33 )
      {
LABEL_48:
        if ( v8 >= 0 )
        {
          v7 = 0;
          goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v8, 0x50Au);
        v7 = 0;
        break;
      }
LABEL_45:
      v35 = (**((__int64 (__fastcall ***)(__int64, __int64, void **, CPreComputeContext *, unsigned __int64))v4 + 137))(
              (__int64)v4 + 1096,
              v20,
              a2,
              v21,
              v33);
      v8 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x20u);
      }
      else
      {
        v37 = (*(__int64 (__fastcall **)(__int64, void **, unsigned __int64, _QWORD))(*((_QWORD *)v4 + 137) + 8LL))(
                (__int64)v4 + 1096,
                a2,
                v33,
                0LL);
        v8 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v37, 0x22u);
      }
      goto LABEL_48;
    }
LABEL_19:
    ++v18;
  }
  while ( v18 < v19 );
  v9 = (_DWORD *)((char *)v4 + 8);
LABEL_21:
  if ( v8 < 0 )
  {
    v52 = 87;
    goto LABEL_83;
  }
  v8 = 0;
  v23 = *(_DWORD *)(*(_QWORD *)v4 + 1048LL);
  if ( v23 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      this = *(CPreComputeContext **)(v41 + *(_QWORD *)(*(_QWORD *)v4 + 1024LL));
      if ( *((_BYTE *)this + 154) )
      {
        v42 = (const struct CVisual *)(*(__int64 (__fastcall **)(CPreComputeContext *))(*(_QWORD *)this + 168LL))(this);
        if ( CVisualTree::IsVisibleInTree((CVisualTree *)a2, v42) )
        {
          v44 = CPreComputeHelper::DirtyIfChanged(
                  (CPreComputeContext *)((char *)v4 + 1136),
                  *(struct CComposition **)v4,
                  (const struct CVisualTree *)a2,
                  v43,
                  0);
          v8 = v44;
          if ( v44 < 0 )
            break;
        }
      }
      ++v7;
      v41 += 8LL;
      if ( v7 >= v23 )
        goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v44, 0x527u);
  }
LABEL_23:
  if ( v8 < 0 )
  {
    v52 = 92;
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v8, v52);
    goto LABEL_34;
  }
  if ( *((_BYTE *)v4 + 1178) )
  {
    v24 = *(const struct CVisual ***)(*(_QWORD *)v4 + 1056LL);
    v25 = *(const struct CVisual ***)(*(_QWORD *)v4 + 1064LL);
    if ( v24 != v25 )
    {
      while ( 1 )
      {
        v45 = *v24;
        if ( CVisualTree::IsVisibleInTree((CVisualTree *)a2, *v24) )
        {
          ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v45);
          v47 = 0LL;
          v48 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
          v49 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
          if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
            v49 = 0LL;
          if ( v49 )
          {
            do
            {
              CProjectedShadowCaster::UpdateVisualProperty(*v48, (const struct CVisualTree *)a2, 0);
              ++v47;
              ++v48;
            }
            while ( v47 != v49 );
          }
          v50 = CPreComputeHelper::DirtyIfChanged(
                  (CPreComputeContext *)((char *)v4 + 1096),
                  *(struct CComposition **)v4,
                  (const struct CVisualTree *)a2,
                  v45,
                  0);
          if ( v50 < 0 )
            break;
        }
        if ( ++v24 == v25 )
          goto LABEL_74;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x54Au);
LABEL_74:
      v9 = (_DWORD *)((char *)v4 + 8);
    }
  }
  v26 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
          (__int64)v4 + 544,
          (const struct CVisualTree *)a2,
          a2[3],
          v4);
  v8 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x6Au);
  }
  else
  {
    if ( *v9 )
      --*v9;
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v9);
    v28 = *((_DWORD *)v4 + 10);
    v29 = (_DWORD *)((char *)v4 + 40);
    if ( v28 )
      *v29 = v28 - 1;
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v29);
    v30 = *((_DWORD *)v4 + 18);
    v31 = (_DWORD *)((char *)v4 + 72);
    if ( v30 )
      *v31 = v30 - 1;
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(v31);
    CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Optimize((__int64)v4 + 104);
    CBspPreComputeHelper::CleanupAfterWalking((CPreComputeContext *)((char *)v4 + 736));
  }
LABEL_34:
  *((_QWORD *)v4 + 87) = 0LL;
  *((_QWORD *)v4 + 88) = 0LL;
  *((_DWORD *)v4 + 58) = 0;
  *((_DWORD *)v4 + 34) = 0;
  *((_DWORD *)v4 + 42) = 0;
  *((_DWORD *)v4 + 50) = 0;
  *((_BYTE *)v4 + 1177) = 0;
  if ( *((_BYTE *)a2 + 32) )
  {
    if ( *((_DWORD *)v4 + 164) )
      UpdateWindowInputSinkHints(*((_QWORD *)v4 + 79));
    *((_DWORD *)v4 + 164) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v4 + 632, 16LL);
    if ( *((_DWORD *)v4 + 172) )
      NtUpdateInputSinkTransforms(*((_QWORD *)v4 + 83));
    *((_DWORD *)v4 + 172) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v4 + 664, 80LL);
  }
  return (unsigned int)v8;
}
