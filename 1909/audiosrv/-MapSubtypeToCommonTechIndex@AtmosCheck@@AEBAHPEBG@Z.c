/*
 * XREFs of ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013F250
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006BF18 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x18013EAF0 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013EF60 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013F908 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::MapSubtypeToCommonTechIndex(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  LPCWCH *i; // rsi

  v2 = -1;
  v3 = 0;
  if ( a2 )
  {
    for ( i = (LPCWCH *)((char *)this + 264); CompareStringOrdinal(a2, -1, *i, -1, 1) != 2; i += 4 )
    {
      if ( ++v3 >= 6 )
        return v2;
    }
    return v3;
  }
  return v2;
}
