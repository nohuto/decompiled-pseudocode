/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800CC2D0
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180012BD0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800CC0F0 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003082C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18006D534 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // r14d
  __m128 *v8; // rdi
  char v9; // r11
  CVisual *v10; // rcx
  __int64 v11; // r14
  struct _LIST_ENTRY *v12; // r15
  struct _LIST_ENTRY *v13; // r10
  __int64 v14; // rax
  CVisual *v15; // rcx
  struct _LIST_ENTRY *v16; // r10
  int v17; // eax
  int v18; // r15d
  struct _LIST_ENTRY *Blink; // r14
  int v20; // r8d
  unsigned __int64 v21; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  CShape *v28; // rcx
  unsigned int v29; // r12d
  __int64 v30; // r13
  __int64 v31; // rax
  struct CShape **v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  float v39; // xmm2_4
  int v40; // eax
  __m128 v41; // xmm4
  __m128 v42; // xmm4
  __m128 v43; // xmm4
  __int128 v44; // [rsp+30h] [rbp-71h] BYREF
  __int64 v45; // [rsp+40h] [rbp-61h] BYREF
  char v46; // [rsp+48h] [rbp-59h]
  char v47; // [rsp+50h] [rbp-51h]
  int v48; // [rsp+70h] [rbp-31h]
  __m128 v49; // [rsp+80h] [rbp-21h] BYREF
  __m128 v50; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp+7h]

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1256LL) != ((*((_DWORD *)a2 + 22) & 4) != 0) )
    return 1;
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 63) != 0) )
    return 1;
  if ( (v7 & 0xC0) != 0 )
  {
    v48 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 480), (struct CMILMatrix *)&v44);
    v7 = *((_DWORD *)a2 + 22);
    if ( (v7 & 0x40) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v44) )
      return 1;
    if ( (v7 & 0x80u) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v44, v49.m128_f32, &v49.m128_f32[1]);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v49.m128_f32[0] - *((float *)a2 + 14))) & _xmm) > 0.0000011920929 )
        return 1;
      v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v49.m128_f32[1] - *((float *)a2 + 15))) & _xmm);
      if ( v39 > 0.0000011920929 )
        return 1;
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( *((_DWORD *)a3 + 64) == 4 )
      return 1;
    if ( (v7 & 0x200) != 0 )
    {
      v40 = *((_DWORD *)a3 + 62);
      if ( v40 >= 1 )
      {
        switch ( v40 )
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
  v14 = (unsigned int)(*((_DWORD *)a3 + 258) - 1);
  v45 = 0LL;
  v44 = 0LL;
  v46 = 0;
  v47 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 126) + 80 * v14 + 76) )
    return 0;
  v15 = 0LL;
  if ( v9 )
  {
    if ( *((_BYTE *)a3 + 6049) )
      v15 = (CVisual *)*((_QWORD *)a3 + 417);
    else
      v15 = *(CVisual **)(v11 + 24);
  }
  if ( *(_BYTE *)(v11 + 32) )
  {
    v16 = (struct _LIST_ENTRY *)((char *)v15 + 328);
  }
  else
  {
    v35 = CVisual::GetTreeDataListHead(v15);
    if ( v35 )
    {
      v36 = v35->Flink;
      if ( v35->Flink != v35 )
      {
        while ( v36[2].Flink != (struct _LIST_ENTRY *)v11 )
        {
          v36 = v36->Flink;
          if ( v36 == v35 )
            goto LABEL_20;
        }
        v16 = v36 - 14;
      }
    }
  }
LABEL_20:
  v17 = *((_DWORD *)a3 + 258);
  v18 = 0;
  Blink = v16[9].Blink;
  if ( !v17 || (v20 = *(_DWORD *)(*((_QWORD *)a3 + 126) + 80LL * (unsigned int)(v17 - 1) + 4)) == 0 )
  {
    v21 = 0LL;
    goto LABEL_23;
  }
  v23 = *((_QWORD *)a3 + 230);
  v24 = v23;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + v23 + 88)
    || (v28 = 0LL, v29 = *((_DWORD *)a3 + 466) - v20, v29 >= *((_DWORD *)a3 + 466)) )
  {
LABEL_27:
    v25 = 136LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1);
    v21 = *(_QWORD *)(v25 + v24 + 88);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v30 = 136LL * v29;
    v31 = v23 + v30;
    v32 = (struct CShape **)(v23 + v30 + 88);
    if ( *v32 )
      goto LABEL_46;
    if ( !v28 )
      break;
    v37 = CShape::Combine(v28, v24, *(CShape **)v31, (float *)(v31 + 16), 1, v32);
    v18 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xD8u);
      goto LABEL_70;
    }
LABEL_46:
    v24 = *((_QWORD *)a3 + 230);
    ++v29;
    v23 = v24;
    v28 = *(CShape **)(v24 + v30 + 88);
    if ( v29 >= *((_DWORD *)a3 + 466) )
      goto LABEL_27;
  }
  v33 = CShapePtr::CopyShape((CShape **)v31, (const struct CMILMatrix *)(v31 + 16), v32);
  v18 = v33;
  if ( v33 >= 0 )
    goto LABEL_46;
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xCCu);
LABEL_70:
  v21 = v49.m128_u64[0];
LABEL_28:
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v18, 0x342u);
    return 0;
  }
LABEL_23:
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  *(_QWORD *)&v44 = v21;
  *((_QWORD *)&v44 + 1) = Blink;
  if ( v21 )
  {
    if ( a5 )
    {
      v8 = &v50;
      v41 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
      v41.m128_f32[0] = *((float *)a5 + 1);
      v42 = _mm_shuffle_ps(v41, v41, 198);
      v42.m128_f32[0] = *((float *)a5 + 4);
      v43 = _mm_shuffle_ps(v42, v42, 39);
      v43.m128_f32[0] = *((float *)a5 + 5);
      v51 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 12), (__m128)*((unsigned int *)a5 + 13)).m128_u64[0];
      v49 = _mm_shuffle_ps(v43, v43, 57);
      v50 = v49;
    }
    v49 = *(__m128 *)((char *)a2 + 40);
    if ( !CCpuClip::FullyContains((__int64)&v44, (__int64)&v49, (__int64)v8) )
    {
      CShapePtr::Release((CShapePtr *)&v45);
      return 1;
    }
  }
  return 0;
}
