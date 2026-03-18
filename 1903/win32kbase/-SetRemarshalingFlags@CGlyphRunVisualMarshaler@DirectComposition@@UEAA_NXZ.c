/*
 * XREFs of ?SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B8760
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGlyphRunVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlyphRunVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 88) )
  {
    *((_DWORD *)this + 90) |= 2u;
    result = 1;
    *((_DWORD *)this + 89) = 0;
  }
  return result;
}
