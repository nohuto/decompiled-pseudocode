/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007D530
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800127E0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007D350 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801F0780 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800339F8 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007D178 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800ECB50 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // edi
  float v8; // xmm2_4
  char v9; // di
  CVisual *v10; // rcx
  __int64 v11; // r10
  struct _LIST_ENTRY *v12; // rsi
  struct _LIST_ENTRY *v13; // r11
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v16; // rax
  CVisual *v17; // rcx
  struct _LIST_ENTRY *v18; // r11
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // r10
  struct _LIST_ENTRY *v21; // rcx
  int v22; // eax
  signed int v23; // esi
  struct _LIST_ENTRY *Blink; // r12
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r10
  unsigned int v29; // edi
  __int64 v30; // r14
  CShape **v31; // rax
  signed int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  signed int v36; // eax
  __int64 v37; // rcx
  __m128 v39; // xmm4
  __m128 v40; // xmm4
  __m128 v41; // xmm4
  __m128 *v42; // r8
  __int128 v43; // [rsp+30h] [rbp-71h] BYREF
  __int64 v44; // [rsp+40h] [rbp-61h] BYREF
  char v45; // [rsp+48h] [rbp-59h]
  char v46; // [rsp+50h] [rbp-51h]
  int v47; // [rsp+70h] [rbp-31h]
  __m128 v48; // [rsp+80h] [rbp-21h] BYREF
  __m128 v49; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v50; // [rsp+A8h] [rbp+7h]

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) != ((*((_DWORD *)a2 + 22) & 4) != 0) )
    return 1;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 63) != 0) )
    return 1;
  if ( (v7 & 0xC0) != 0 )
  {
    v47 = 0;
    CDrawingContext::GetWorldTransform(a3, (struct CMILMatrix *)&v43);
    v7 = *((_DWORD *)a2 + 22);
    if ( (v7 & 0x40) != 0 && !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v43) )
      return 1;
    if ( (v7 & 0x80u) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v43, v48.m128_f32, &v48.m128_f32[1]);
      v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v48.m128_f32[0] - *((float *)a2 + 14))) & _xmm);
      if ( v8 > 0.000081380211 || !IsCloseRealMatrixEpsilon(v48.m128_f32[1], *((float *)a2 + 15)) )
        return 1;
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( *((_DWORD *)a3 + 64) == 4 )
      return 1;
    if ( (v7 & 0x200) != 0 )
    {
      switch ( *((_DWORD *)a3 + 62) )
      {
        case 4:
        case 6:
          return 1;
        default:
          break;
      }
    }
  }
  v9 = *((_BYTE *)a3 + 6048);
  v10 = 0LL;
  if ( v9 )
  {
    if ( *((_BYTE *)a3 + 6049) )
      v10 = (CVisual *)*((_QWORD *)a3 + 417);
    else
      v10 = *(CVisual **)(*((_QWORD *)a3 + 757) + 24LL);
  }
  v11 = *((_QWORD *)a3 + 757);
  v12 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( *(_BYTE *)(v11 + 32) )
  {
    v13 = (struct _LIST_ENTRY *)((char *)v10 + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v10);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v11 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_27;
        }
        v13 = Flink - 14;
      }
    }
  }
LABEL_27:
  if ( v12 >= v13[12].Blink )
    return 0;
  if ( *((_BYTE *)a2 + 100) )
    return 1;
  if ( (*((_BYTE *)a2 + 92) & 0x20) == 0 )
    return 0;
  v16 = (unsigned int)(*((_DWORD *)a3 + 258) - 1);
  v44 = 0LL;
  v43 = 0LL;
  v45 = 0;
  v46 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 126) + 80 * v16 + 76) )
    return 0;
  v17 = 0LL;
  if ( v9 )
  {
    if ( *((_BYTE *)a3 + 6049) )
      v17 = (CVisual *)*((_QWORD *)a3 + 417);
    else
      v17 = *(CVisual **)(v11 + 24);
  }
  if ( *(_BYTE *)(v11 + 32) )
  {
    v18 = (struct _LIST_ENTRY *)((char *)v17 + 328);
  }
  else
  {
    v19 = CVisual::GetTreeDataListHead(v17);
    if ( v19 )
    {
      v21 = v19->Flink;
      if ( v19->Flink != v19 )
      {
        while ( v21[2].Flink != v20 )
        {
          v21 = v21->Flink;
          if ( v21 == v19 )
            goto LABEL_43;
        }
        v18 = v21 - 14;
      }
    }
  }
LABEL_43:
  v22 = *((_DWORD *)a3 + 258);
  v23 = 0;
  Blink = v18[9].Blink;
  if ( !v22 || (v25 = *(_DWORD *)(*((_QWORD *)a3 + 126) + 80LL * (unsigned int)(v22 - 1) + 4)) == 0 )
  {
    v35 = 0LL;
    goto LABEL_60;
  }
  v26 = *((_QWORD *)a3 + 230);
  v27 = v26;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + v26 + 88)
    || (v28 = 0LL, v29 = *((_DWORD *)a3 + 466) - v25, v29 >= *((_DWORD *)a3 + 466)) )
  {
LABEL_54:
    v34 = 136LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1);
    v35 = *(_QWORD *)(v34 + v27 + 88);
    goto LABEL_55;
  }
  while ( 1 )
  {
    v30 = 136LL * v29;
    v31 = (CShape **)(v30 + v26);
    if ( *(_QWORD *)(v30 + v26 + 88) )
      goto LABEL_53;
    if ( v28 )
      break;
    v32 = CShapePtr::CopyShape(v31, (const struct CMILMatrix *)(v31 + 2), (struct CShape **)(v30 + v26 + 88));
    v23 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xCCu, 0LL);
      goto LABEL_51;
    }
LABEL_53:
    v27 = *((_QWORD *)a3 + 230);
    ++v29;
    v26 = v27;
    v28 = *(_QWORD *)(v27 + v30 + 88);
    if ( v29 >= *((_DWORD *)a3 + 466) )
      goto LABEL_54;
  }
  v36 = CShape::Combine(v28, v27, (__int64)*v31, (__int64)(v31 + 2), 1, (_QWORD *)(v30 + v26 + 88));
  v23 = v36;
  if ( v36 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xD8u, 0LL);
LABEL_51:
  v35 = v48.m128_u64[0];
LABEL_55:
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v23, 0x33Fu, 0LL);
    return 0;
  }
LABEL_60:
  v44 = 0LL;
  v45 = 0;
  v46 = 0;
  *(_QWORD *)&v43 = v35;
  *((_QWORD *)&v43 + 1) = Blink;
  if ( v35 )
  {
    if ( a5 )
    {
      v39 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
      v39.m128_f32[0] = *((float *)a5 + 1);
      v40 = _mm_shuffle_ps(v39, v39, 198);
      v40.m128_f32[0] = *((float *)a5 + 4);
      v41 = _mm_shuffle_ps(v40, v40, 39);
      v41.m128_f32[0] = *((float *)a5 + 5);
      v50 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 12), (__m128)*((unsigned int *)a5 + 13)).m128_u64[0];
      v48 = _mm_shuffle_ps(v41, v41, 57);
      v49 = v48;
    }
    v42 = &v49;
    if ( !a5 )
      v42 = 0LL;
    v48 = *(__m128 *)((char *)a2 + 40);
    if ( !CCpuClip::FullyContains((__int64)&v43, (__int64)&v48, (__int64)v42) )
    {
      CShapePtr::Release((CShapePtr *)&v44);
      return 1;
    }
  }
  return 0;
}
