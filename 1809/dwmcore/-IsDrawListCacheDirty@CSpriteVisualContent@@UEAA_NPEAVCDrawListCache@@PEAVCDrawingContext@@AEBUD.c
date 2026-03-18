/*
 * XREFs of ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800CC0F0
 * Callers:
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000E7C0 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005F624 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800CC2D0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CSpriteVisualContent::IsDrawListCacheDirty(
        CSpriteVisualContent *this,
        struct CDrawListCache *a2,
        CVisual **a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  CVisual *v9; // rbx
  struct _LIST_ENTRY *v10; // r10
  char v11; // cl
  float width; // xmm0_4
  float height; // xmm1_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v16; // r11
  struct _LIST_ENTRY *Flink; // rdx
  struct CVisual *CurrentVisual; // rax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  float v20; // [rsp+38h] [rbp-50h]
  float v21; // [rsp+3Ch] [rbp-4Ch]
  float v22[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( CContent::IsDrawListCacheDirty(this, a2, (struct CDrawingContext *)a3, a4, a5) )
    return 1;
  v9 = 0LL;
  if ( *((_BYTE *)a3 + 6048) )
  {
    if ( *((_BYTE *)a3 + 6049) )
      v9 = a3[417];
    else
      v9 = (CVisual *)*((_QWORD *)a3[757] + 3);
  }
  if ( *((_BYTE *)a3[757] + 32) )
  {
    v10 = (struct _LIST_ENTRY *)((char *)v9 + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v9);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v16 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_7;
        }
        v10 = Flink - 14;
      }
    }
  }
LABEL_7:
  v11 = *((_BYTE *)v9 + 272);
  if ( (v11 & 3) != 0 )
  {
    if ( (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3) < v10[7].Blink )
      return 1;
    if ( (v11 & 1) != 0 )
    {
      width = a4->width;
      height = a4->height;
      v19 = 0LL;
      v20 = width + 0.0;
      v21 = height + 0.0;
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a3, (__int64)&v19, v22);
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)a2 + 16, v22)
        || (*((_BYTE *)v9 + 560) & 1) != 0
        && ((*((_BYTE *)v9 + 94) & 0x20) == 0
         || *(_QWORD *)(*((_QWORD *)this + 2) + 480LL) - *((_QWORD *)a2 + 10) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
      {
        ++dword_18030814C;
        return 1;
      }
    }
    else
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 1));
      if ( CurrentVisual )
      {
        while ( (**((_DWORD **)CurrentVisual + 28) & 0x100000) == 0 )
        {
          CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
          if ( !CurrentVisual )
            return 0;
        }
        if ( *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 357) )
          return 1;
      }
    }
  }
  return 0;
}
