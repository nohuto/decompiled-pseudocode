/*
 * XREFs of ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013A46C
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV?$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18013A9D4 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV-$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpe.c)
 * Callees:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z @ 0x180139408 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z.c)
 */

void __fastcall AtmosCheck::IsLicenseValidForSubtype(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int *a4,
        bool *a5)
{
  int LicenseStatusForEndpointId; // eax
  bool v7; // al
  bool v8; // [rsp+30h] [rbp-18h] BYREF
  bool v9; // [rsp+31h] [rbp-17h] BYREF

  v8 = 0;
  v9 = 0;
  LicenseStatusForEndpointId = AtmosCheck::GetLicenseStatusForEndpointId(this, a2, a3, &v8, &v9);
  if ( LicenseStatusForEndpointId >= 0 )
  {
    v7 = v9;
    *a4 = !v8 ? 0x80070490 : 0;
    *a5 = v7;
  }
  else
  {
    *a4 = LicenseStatusForEndpointId;
  }
}
