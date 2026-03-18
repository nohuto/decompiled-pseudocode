/*
 * XREFs of ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002D0C0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002F720 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AdjustWorldBounds(__int64 a1, struct D2D_RECT_F *a2)
{
  __int64 v2; // rcx
  FLOAT v4; // xmm1_4
  FLOAT v5; // xmm0_4

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 109LL) && !IsEmpty(a2) )
  {
    v4 = a2->right + 0.5;
    a2->left = a2->left - 0.5;
    v5 = a2->top - 0.5;
    a2->right = v4;
    a2->top = v5;
    a2->bottom = a2->bottom + 0.5;
  }
}
