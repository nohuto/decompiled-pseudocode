/*
 * XREFs of ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800676B4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::SetInverse(MILMatrix3x2 *this, const struct MILMatrix3x2 *a2)
{
  float v2; // xmm3_4

  v2 = 1.0 / (float)((float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 1) * *((float *)a2 + 2)));
  *(float *)this = *((float *)a2 + 3) * v2;
  *((_DWORD *)this + 1) = COERCE_UNSIGNED_INT(v2 * *((float *)a2 + 1)) ^ _xmm;
  *((_DWORD *)this + 2) = COERCE_UNSIGNED_INT(v2 * *((float *)a2 + 2)) ^ _xmm;
  *((float *)this + 3) = v2 * *(float *)a2;
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 2) * *((float *)a2 + 5))
                               - (float)(*((float *)a2 + 4) * *((float *)a2 + 3)))
                       * v2;
  *((float *)this + 5) = (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 4))
                               - (float)(*(float *)a2 * *((float *)a2 + 5)))
                       * v2;
}
