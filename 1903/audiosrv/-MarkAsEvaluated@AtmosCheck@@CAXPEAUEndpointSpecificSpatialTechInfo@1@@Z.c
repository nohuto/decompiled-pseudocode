/*
 * XREFs of ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180009F28
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x18013E27C (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::MarkAsEvaluated(struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rax

  v1 = (char *)a1 + 1;
  v2 = 6LL;
  do
  {
    *v1 = 1;
    v1 += 24;
    --v2;
  }
  while ( v2 );
}
