/*
 * XREFs of ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AE2F0
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B4490 (-SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B4610 (-SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B4F30 (-SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B53C0 (-SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionLightMarshaler *this)
{
  int v1; // edx
  bool result; // al
  int v3; // edx

  v1 = *((_DWORD *)this + 4);
  result = 1;
  *((_DWORD *)this + 13) = 0;
  v3 = v1 | 0x60;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 4) = v3;
  if ( *((_BYTE *)this + 72) != 1 )
    *((_DWORD *)this + 4) = v3 | 0x80;
  return result;
}
