/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174150
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  char result; // al

  result = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 16) )
  {
    *((_DWORD *)this + 17) = 0;
    return 1;
  }
  return result;
}
