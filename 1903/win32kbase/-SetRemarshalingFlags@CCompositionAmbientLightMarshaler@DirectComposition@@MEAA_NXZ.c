/*
 * XREFs of ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B4490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AE2F0 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  if ( *((float *)this + 20) != 1.0 || *((float *)this + 21) != 1.0 || *((float *)this + 22) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 24) != 1.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
