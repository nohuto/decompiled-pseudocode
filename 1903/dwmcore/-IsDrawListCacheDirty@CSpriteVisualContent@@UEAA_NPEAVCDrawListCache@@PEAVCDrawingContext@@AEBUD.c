/*
 * XREFs of ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180052F40
 * Callers:
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000DC30 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180053120 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800534D8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18006E548 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall CSpriteVisualContent::IsDrawListCacheDirty(
        CSpriteVisualContent *this,
        struct CDrawListCache *a2,
        CVisual **a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  CVisual *v9; // rdi
  struct _LIST_ENTRY *v10; // r10
  char v11; // cl
  char v12; // bl
  float width; // xmm0_4
  float height; // xmm1_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v17; // r11
  struct _LIST_ENTRY *i; // rcx
  struct CVisual *CurrentVisual; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-58h] BYREF

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
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( i[2].Flink == v17 )
        {
          v10 = i - 14;
          break;
        }
      }
    }
  }
  v11 = *((_BYTE *)v9 + 272);
  if ( (v11 & 3) == 0 )
    return 0;
  v12 = 1;
  if ( (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3) >= v10[7].Blink )
  {
    if ( (v11 & 1) != 0 )
    {
      width = a4->width;
      height = a4->height;
      v20[0] = 0;
      v20[1] = 0;
      *(float *)&v20[2] = width + 0.0;
      *(float *)&v20[3] = height + 0.0;
      CDrawingContext::CalcWorldSpaceClippedBounds(a3, v20, v21);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((char *)a2 + 64, v21)
        || (*((_BYTE *)v9 + 560) & 1) != 0
        && ((*((_BYTE *)v9 + 94) & 0x10) == 0
         || *(_QWORD *)(*((_QWORD *)this + 2) + 496LL) - *((_QWORD *)a2 + 10) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
      {
        ++dword_18033C82C;
        return v12;
      }
      return 0;
    }
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 1));
    if ( !CurrentVisual )
      return 0;
    do
    {
      if ( (**((_DWORD **)CurrentVisual + 28) & 0x100000) != 0 )
        break;
      CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
    }
    while ( CurrentVisual );
    if ( !CurrentVisual || !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 357) )
      return 0;
  }
  return v12;
}
