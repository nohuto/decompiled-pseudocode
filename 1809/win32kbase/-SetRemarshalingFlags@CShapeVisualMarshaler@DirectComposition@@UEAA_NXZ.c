/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01762A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 44) )
  {
    *((_DWORD *)this + 94) |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 92) )
  {
    *((_DWORD *)this + 94) |= 2u;
    result = 1;
    *((_DWORD *)this + 93) = 0;
  }
  return result;
}
