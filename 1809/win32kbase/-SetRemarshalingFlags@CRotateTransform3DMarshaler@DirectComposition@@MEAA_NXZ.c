/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRotateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  char v2; // al
  char v3; // cl

  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 14) != 0.0
    || *((float *)this + 15) != 0.0
    || *((float *)this + 16) != 0.0
    || *((float *)this + 17) != 1.0
    || *((float *)this + 18) != 0.0
    || *((float *)this + 19) != 0.0
    || *((float *)this + 20) != 0.0 )
  {
    return 1;
  }
  return v3;
}
