/*
 * XREFs of ?GetResolution@CBitmapColorKey@@W7EAAJPEAN0@Z @ 0x1800F1530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapColorKey::GetResolution(__int64 a1, double *a2, double *a3)
{
  return CGdiSpriteBitmap::GetResolution((CGdiSpriteBitmap *)(a1 - 8), a2, a3);
}
