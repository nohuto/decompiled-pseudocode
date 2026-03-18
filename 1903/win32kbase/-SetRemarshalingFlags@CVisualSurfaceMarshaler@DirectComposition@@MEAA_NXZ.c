/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C04B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x3E0u;
  if ( *((_BYTE *)this + 76) )
    *((_DWORD *)this + 4) |= 0x400u;
  return 1;
}
