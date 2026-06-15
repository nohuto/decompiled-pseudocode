/*
 * XREFs of ?InitializeEndpointSpecificSpatialTechInfo@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18004AF64
 * Callers:
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18004AEBC (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18004AF88 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::InitializeEndpointSpecificSpatialTechInfo(
        struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  __int64 i; // rdx

  for ( i = 0LL; i < 6; ++i )
    *((_BYTE *)a1 + 8 * i) = ((i - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0;
}
