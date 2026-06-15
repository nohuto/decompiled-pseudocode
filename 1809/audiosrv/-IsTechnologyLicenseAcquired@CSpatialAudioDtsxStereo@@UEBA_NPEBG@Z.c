/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDtsxStereo@@UEBA_NPEBG@Z @ 0x18005FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z @ 0x18005EB88 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z.c)
 */

bool __fastcall CSpatialAudioDtsxStereo::IsTechnologyLicenseAcquired(
        CSpatialAudioDtsxStereo *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v2; // rcx

  v2 = (AtmosCheck *)*((_QWORD *)this + 1);
  return v2 && (int)AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v2, a2, 5) >= 0;
}
