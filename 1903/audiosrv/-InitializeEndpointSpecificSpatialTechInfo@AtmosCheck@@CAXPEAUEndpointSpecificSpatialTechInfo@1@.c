/*
 * XREFs of ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180053AF0
 * Callers:
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180053804 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006ACF0 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006AEB8 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  __int64 i; // rdx
  bool v2; // al

  for ( i = 0LL; i < 6; ++i )
  {
    v2 = ((i - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0;
    *(_BYTE *)a1 = v2;
    a1 = (struct AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)a1 + 24);
  }
}
