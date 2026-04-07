/*
 * XREFs of ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008CA78
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800332F8 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001449C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18008CE08 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18008CE3C (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall CThumbnailVisual::GetCVI(
        CThumbnailVisual *this,
        const struct tagRECT *a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  double v11; // xmm2_8
  int v12; // eax
  double v13; // xmm3_8
  const struct tagRECT *v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  volatile signed __int32 *v17; // rax
  float v18; // xmm0_4

  v8 = -2147467259;
  if ( *((_QWORD *)this + 48)
    && *((_QWORD *)this + 54)
    && *((_QWORD *)this + 47)
    && !CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v9 = *((_QWORD *)this + 46);
    if ( v9 && (*(_BYTE *)(v9 + 44) & 2) != 0 )
      IsRectEmpty((const RECT *)(v9 + 64));
    v10 = 0;
    if ( a2->right - a2->left >= 0 )
      v10 = a2->right - a2->left;
    v11 = (double)v10;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v10, *((double *)this + 60)) )
    {
      v12 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v12 = a2->bottom - a2->top;
      v13 = (double)v12;
      if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v12, *((double *)this + 61))
        && CThumbnailVisual::s_IsCloseEnoughToReuse(a2, v14) )
      {
        v17 = (volatile signed __int32 *)*((_QWORD *)this + 54);
        *a3 = (struct CCachedVisualImageProxy *)v17;
        v18 = v11 / v15;
        *(float *)a4 = v18;
        *((float *)a4 + 1) = v13 / v16;
        if ( v17 )
          _InterlockedIncrement(v17 + 2);
        return 0;
      }
    }
  }
  return v8;
}
