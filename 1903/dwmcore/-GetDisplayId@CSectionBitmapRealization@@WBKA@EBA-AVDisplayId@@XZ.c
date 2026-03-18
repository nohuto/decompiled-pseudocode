/*
 * XREFs of ?GetDisplayId@CSectionBitmapRealization@@WBKA@EBA?AVDisplayId@@XZ @ 0x1800ED8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CSecondarySysmemBitmap::GetDisplayId(a1 - 416, a2);
}
