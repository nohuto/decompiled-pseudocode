/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180053120
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180013E30 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180052F40 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801F1F10 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180087F84 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800CC0E0 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // r14d
  __m128 *v8; // rsi
  char v9; // r11
  CVisual *v10; // rcx
  __int64 v11; // r15
  struct _LIST_ENTRY *v12; // r14
  struct _LIST_ENTRY *v13; // r10
  __int64 v15; // rax
  CVisual *v16; // rcx
  struct _LIST_ENTRY *v17; // r10
  int v18; // eax
  int v19; // r15d
  struct _LIST_ENTRY *Blink; // r14
  int v21; // r8d
  unsigned __int64 v22; // rax
  const struct D2D_SIZE_F *v23; // rdx
  __int64 v24; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct D2D_SIZE_F v27; // rcx
  unsigned int v28; // r12d
  __int64 v29; // r13
  struct D2D_SIZE_F *v30; // rax
  struct CShape **v31; // r8
  int v32; // eax
  unsigned int v33; // ecx
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *v35; // rdx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  __m128 v39; // xmm4
  __m128 v40; // xmm4
  __m128 v41; // xmm4
  __int128 v42; // [rsp+30h] [rbp-71h] BYREF
  __int64 v43; // [rsp+40h] [rbp-61h] BYREF
  char v44; // [rsp+48h] [rbp-59h]
  char v45; // [rsp+50h] [rbp-51h]
  int v46; // [rsp+70h] [rbp-31h]
  __m128 v47; // [rsp+80h] [rbp-21h] BYREF
  __m128 v48; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v49; // [rsp+A8h] [rbp+7h]

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) != ((*((_DWORD *)a2 + 22) & 4) != 0) )
    return 1;
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 63) != 0) )
    return 1;
  if ( (v7 & 0xC0) != 0 )
  {
    v46 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 480), (struct CMILMatrix *)&v42);
    v7 = *((_DWORD *)a2 + 22);
    if ( (v7 & 0x40) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v42) )
      return 1;
    if ( (v7 & 0x80u) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v42, v47.m128_f32, &v47.m128_f32[1]);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v47.m128_f32[0] - *((float *)a2 + 14))) & _xmm) > 0.0000011920929
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v47.m128_f32[1] - *((float *)a2 + 15))) & _xmm) > 0.0000011920929 )
      {
        return 1;
      }
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( *((_DWORD *)a3 + 64) == 4 )
      return 1;
    if ( (v7 & 0x200) != 0 )
    {
      v38 = *((_DWORD *)a3 + 62);
      if ( v38 >= 1 )
      {
        switch ( v38 )
        {
          case 4:
          case 6:
            return 1;
          default:
            break;
        }
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
            goto LABEL_11;
        }
        v13 = Flink - 14;
      }
    }
  }
LABEL_11:
  if ( v12 >= v13[12].Blink )
    return 0;
  if ( *((_BYTE *)a2 + 100) )
    return 1;
  if ( (*((_BYTE *)a2 + 92) & 0x20) == 0 )
    return 0;
  v15 = (unsigned int)(*((_DWORD *)a3 + 258) - 1);
  v43 = 0LL;
  v42 = 0LL;
  v44 = 0;
  v45 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 126) + 80 * v15 + 76) )
    return 0;
  v16 = 0LL;
  if ( v9 )
  {
    if ( *((_BYTE *)a3 + 6049) )
      v16 = (CVisual *)*((_QWORD *)a3 + 417);
    else
      v16 = *(CVisual **)(v11 + 24);
  }
  if ( *(_BYTE *)(v11 + 32) )
  {
    v17 = (struct _LIST_ENTRY *)((char *)v16 + 328);
  }
  else
  {
    v34 = CVisual::GetTreeDataListHead(v16);
    if ( v34 )
    {
      v35 = v34->Flink;
      if ( v34->Flink != v34 )
      {
        while ( v35[2].Flink != (struct _LIST_ENTRY *)v11 )
        {
          v35 = v35->Flink;
          if ( v35 == v34 )
            goto LABEL_21;
        }
        v17 = v35 - 14;
      }
    }
  }
LABEL_21:
  v18 = *((_DWORD *)a3 + 258);
  v19 = 0;
  Blink = v17[9].Blink;
  if ( !v18 || (v21 = *(_DWORD *)(*((_QWORD *)a3 + 126) + 80LL * (unsigned int)(v18 - 1) + 4)) == 0 )
  {
    v22 = 0LL;
    goto LABEL_24;
  }
  a4 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 230);
  v23 = a4;
  if ( *(_QWORD *)&a4[17 * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + 11]
    || (v27 = 0LL, v28 = *((_DWORD *)a3 + 466) - v21, v28 >= *((_DWORD *)a3 + 466)) )
  {
LABEL_31:
    v24 = 17LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1);
    v22 = (unsigned __int64)v23[v24 + 11];
    goto LABEL_32;
  }
  while ( 1 )
  {
    v29 = 17LL * v28;
    v30 = (struct D2D_SIZE_F *)&a4[v29];
    v31 = (struct CShape **)&a4[v29 + 11];
    if ( *v31 )
      goto LABEL_46;
    if ( !*(_QWORD *)&v27 )
      break;
    v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))CShape::Combine)(
            v27,
            v23,
            *v30,
            &v30[2],
            1,
            v31);
    v19 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xD8u, 0LL);
      goto LABEL_70;
    }
LABEL_46:
    v23 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 230);
    ++v28;
    a4 = v23;
    v27 = v23[v29 + 11];
    if ( v28 >= *((_DWORD *)a3 + 466) )
      goto LABEL_31;
  }
  v32 = CShapePtr::CopyShape((CShapePtr *)v30, (const struct CMILMatrix *)&v30[2], v31);
  v19 = v32;
  if ( v32 >= 0 )
    goto LABEL_46;
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xCCu, 0LL);
LABEL_70:
  v22 = v47.m128_u64[0];
LABEL_32:
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24 * 8, 0LL, 0, v19, 0x33Fu, 0LL);
    return 0;
  }
LABEL_24:
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  *(_QWORD *)&v42 = v22;
  *((_QWORD *)&v42 + 1) = Blink;
  if ( v22 )
  {
    if ( a5 )
    {
      v8 = &v48;
      v39 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
      v39.m128_f32[0] = *((float *)a5 + 1);
      v40 = _mm_shuffle_ps(v39, v39, 198);
      v40.m128_f32[0] = *((float *)a5 + 4);
      v41 = _mm_shuffle_ps(v40, v40, 39);
      v41.m128_f32[0] = *((float *)a5 + 5);
      v49 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 12), (__m128)*((unsigned int *)a5 + 13)).m128_u64[0];
      v47 = _mm_shuffle_ps(v41, v41, 57);
      v48 = v47;
    }
    v47 = *(__m128 *)((char *)a2 + 40);
    if ( !(unsigned __int8)CCpuClip::FullyContains(&v42, &v47, v8, a4) )
    {
      CShapePtr::Release((CShapePtr *)&v43);
      return 1;
    }
  }
  return 0;
}
