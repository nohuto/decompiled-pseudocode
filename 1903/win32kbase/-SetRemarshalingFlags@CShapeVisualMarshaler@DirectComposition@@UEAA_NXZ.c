/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B2920
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 43) )
  {
    *((_DWORD *)this + 92) |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 90) )
  {
    *((_DWORD *)this + 92) |= 2u;
    result = 1;
    *((_DWORD *)this + 91) = 0;
  }
  return result;
}
