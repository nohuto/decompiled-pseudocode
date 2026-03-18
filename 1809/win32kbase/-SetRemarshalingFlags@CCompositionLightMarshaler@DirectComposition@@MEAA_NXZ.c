/*
 * XREFs of ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0171030
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0177E40 (-SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0177FC0 (-SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01788E0 (-SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0178F10 (-SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ.c)
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
