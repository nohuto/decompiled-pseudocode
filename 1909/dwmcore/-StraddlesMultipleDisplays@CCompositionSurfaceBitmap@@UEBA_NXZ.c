/*
 * XREFs of ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801A1800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::StraddlesMultipleDisplays(CCompositionSurfaceBitmap *this)
{
  return *((_DWORD *)this + 24) > 1u;
}
