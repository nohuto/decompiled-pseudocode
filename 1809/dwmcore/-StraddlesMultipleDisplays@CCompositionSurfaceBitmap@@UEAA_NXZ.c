/*
 * XREFs of ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ @ 0x18001CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::StraddlesMultipleDisplays(CCompositionSurfaceBitmap *this)
{
  return *((_DWORD *)this + 21) > 1u;
}
