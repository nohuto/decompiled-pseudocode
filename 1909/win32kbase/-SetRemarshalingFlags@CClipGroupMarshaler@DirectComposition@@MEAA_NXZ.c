/*
 * XREFs of ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF020 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CClipGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CClipGroupMarshaler *this)
{
  char result; // al

  result = DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 23) = 0;
    return 1;
  }
  return result;
}
