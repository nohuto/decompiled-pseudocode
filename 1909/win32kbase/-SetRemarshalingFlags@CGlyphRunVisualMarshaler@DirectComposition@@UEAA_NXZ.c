/*
 * XREFs of ?SetRemarshalingFlags@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGlyphRunVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlyphRunVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 90) )
  {
    *((_DWORD *)this + 92) |= 2u;
    result = 1;
    *((_DWORD *)this + 91) = 0;
  }
  return result;
}
