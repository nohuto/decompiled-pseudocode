/*
 * XREFs of ?IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z @ 0x18013A5EC
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV?$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18013A9D4 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV-$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpe.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013AB04 (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall AtmosCheck::IsPerformLicenseCheck(AtmosCheck *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 38);
  return (v2 != 2 || a2 < 0) && (v2 != 3 || a2 >= 0);
}
