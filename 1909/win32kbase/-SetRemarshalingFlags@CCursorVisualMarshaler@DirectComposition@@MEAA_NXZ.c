/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 94) |= 8u;
  if ( *((_DWORD *)this + 88) )
    *((_DWORD *)this + 94) |= 1u;
  if ( *((_DWORD *)this + 89) )
    *((_DWORD *)this + 94) |= 2u;
  if ( *((_BYTE *)this + 360) )
    *((_DWORD *)this + 94) |= 4u;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}
