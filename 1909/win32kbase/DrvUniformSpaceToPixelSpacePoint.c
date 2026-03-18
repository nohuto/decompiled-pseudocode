/*
 * XREFs of DrvUniformSpaceToPixelSpacePoint @ 0x1C004FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C004FF50 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvUniformSpaceToPixelSpacePoint(int *a1, int *a2)
{
  return TransformPointWithUniformSpaceMapping(*(struct _MDEV **)(gpDispInfo + 16), a1, a2, 1);
}
