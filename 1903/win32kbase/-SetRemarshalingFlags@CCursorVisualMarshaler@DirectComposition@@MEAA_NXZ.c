/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  if ( *((_QWORD *)this + 45) )
    *((_DWORD *)this + 92) |= 8u;
  if ( *((_DWORD *)this + 86) )
    *((_DWORD *)this + 92) |= 1u;
  if ( *((_DWORD *)this + 87) )
    *((_DWORD *)this + 92) |= 2u;
  if ( *((_BYTE *)this + 352) )
    *((_DWORD *)this + 92) |= 4u;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}
