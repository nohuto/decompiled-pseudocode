/*
 * XREFs of ?GetDisplayId@CSecondarySysmemBitmap@@UEBA?AVDisplayId@@XZ @ 0x1800DA640
 * Callers:
 *     ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800F0FE0 (-GetDisplayId@CSecondaryD2DBitmap@@W7EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@WBKA@EBA?AVDisplayId@@XZ @ 0x1800F1580 (-GetDisplayId@CSectionBitmapRealization@@WBKA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondarySysmemBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = (_DWORD)DisplayId::None;
  return a2;
}
