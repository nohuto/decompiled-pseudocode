/*
 * XREFs of ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x1800A3908
 * Callers:
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A0490 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800A36C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 */

bool __fastcall CRegion::GetBoundingRect(CRegion *this, struct MilRectU *a2)
{
  bool result; // al
  LONG *v3; // r11
  LONG bottom; // r9d
  LONG left; // r8d
  LONG top; // edx
  LONG right; // ecx
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  result = FastRegion::CRegion::GetBoundingRect(this, &v8);
  bottom = -1;
  left = -1;
  top = -1;
  if ( v8.left >= 0 )
    left = v8.left;
  *v3 = left;
  if ( v8.top >= 0 )
    top = v8.top;
  right = -1;
  v3[1] = top;
  if ( v8.right >= 0 )
    right = v8.right;
  v3[2] = right;
  if ( v8.bottom >= 0 )
    bottom = v8.bottom;
  v3[3] = bottom;
  return result;
}
