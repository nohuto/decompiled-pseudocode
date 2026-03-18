/*
 * XREFs of ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007FC1C
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B4D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18007FCE0 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::AdjustContentWorldBounds(CVisual *this, struct D2D_RECT_F *a2)
{
  char v4; // di
  float v5; // xmm6_4
  FLOAT v7; // xmm1_4
  FLOAT v8; // xmm0_4
  FLOAT v9; // xmm6_4

  if ( IsEmpty(a2) )
    return 0;
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 360LL))(this) )
    v5 = FLOAT_0_5;
  else
    v5 = 0.0;
  if ( CVisual::HasPixelSnappedContent(this) )
    v5 = v5 + 0.5;
  if ( v5 != 0.0 )
  {
    v7 = a2->top - v5;
    a2->left = a2->left - v5;
    v8 = v5 + a2->right;
    v9 = v5 + a2->bottom;
    a2->top = v7;
    a2->right = v8;
    a2->bottom = v9;
  }
  return v4;
}
