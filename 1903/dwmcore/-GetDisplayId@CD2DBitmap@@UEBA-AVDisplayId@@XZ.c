/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@UEBA?AVDisplayId@@XZ @ 0x1800D9F10
 * Callers:
 *     ?GetDisplayId@CD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800ECD20 (-GetDisplayId@CD2DBitmap@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 148);
  return a2;
}
