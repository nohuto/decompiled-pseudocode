/*
 * XREFs of ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1801EE994
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801EEA9C (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801F1008 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::CanUseFastShadow(CProjectedShadowCaster **this)
{
  return CProjectedShadowCaster::IsRectangular(this[8]) && (float)(*((float *)this + 78) * 0.5) >= *((float *)this + 20);
}
