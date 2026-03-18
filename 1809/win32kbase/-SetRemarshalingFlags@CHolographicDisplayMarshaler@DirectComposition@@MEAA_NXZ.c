/*
 * XREFs of ?SetRemarshalingFlags@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C009E8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CHolographicDisplayMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicDisplayMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) |= 0x40u;
  result = 1;
  *((_DWORD *)this + 12) &= ~0x80000000;
  return result;
}
