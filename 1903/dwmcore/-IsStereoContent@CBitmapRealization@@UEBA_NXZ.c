/*
 * XREFs of ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x180194BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsStereoContent(CBitmapRealization *this)
{
  return *((_DWORD *)this + 32) == 3;
}
