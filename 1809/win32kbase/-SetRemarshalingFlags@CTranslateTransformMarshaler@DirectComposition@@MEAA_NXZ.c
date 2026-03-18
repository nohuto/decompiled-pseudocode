/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTranslateTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransformMarshaler *this)
{
  char v2; // al
  char v3; // dl

  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || *((float *)this + 14) != 0.0 || *((float *)this + 15) != 0.0 )
    return 1;
  return v3;
}
