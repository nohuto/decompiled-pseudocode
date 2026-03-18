/*
 * XREFs of ?SetRemarshalingFlags@CHolographicExclusiveModeMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BDAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicExclusiveModeMarshaler *this)
{
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((float *)this + 11) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
