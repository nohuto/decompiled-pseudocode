/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800F0FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CSecondarySysmemBitmap::GetDisplayId(a1 - 8, a2);
}
