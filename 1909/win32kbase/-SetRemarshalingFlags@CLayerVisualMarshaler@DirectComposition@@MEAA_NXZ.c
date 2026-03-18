/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B03C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 93) |= 1u;
  if ( *((_QWORD *)this + 45) )
    *((_DWORD *)this + 93) |= 2u;
  if ( *((_BYTE *)this + 368) )
    *((_DWORD *)this + 93) |= 4u;
  if ( *((_BYTE *)this + 369) )
    *((_DWORD *)this + 93) |= 8u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 93) & 0xF) != 0 || v3 )
    return 1;
  return v1;
}
