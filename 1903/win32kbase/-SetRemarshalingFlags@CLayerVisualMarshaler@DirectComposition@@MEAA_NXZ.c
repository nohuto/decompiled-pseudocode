/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B2360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 43) )
    *((_DWORD *)this + 91) |= 1u;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 91) |= 2u;
  if ( *((_BYTE *)this + 360) )
    *((_DWORD *)this + 91) |= 4u;
  if ( *((_BYTE *)this + 361) )
    *((_DWORD *)this + 91) |= 8u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 91) & 0xF) != 0 || v3 )
    return 1;
  return v1;
}
