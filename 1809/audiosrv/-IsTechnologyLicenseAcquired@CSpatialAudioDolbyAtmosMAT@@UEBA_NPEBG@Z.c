/*
 * XREFs of ?IsTechnologyLicenseAcquired@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEBG@Z @ 0x180125190
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z @ 0x18005EB88 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z.c)
 */

bool __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologyLicenseAcquired(
        CSpatialAudioDolbyAtmosMAT *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v2; // rcx
  bool result; // al

  result = 1;
  if ( byte_1801B27D4 )
  {
    v2 = (AtmosCheck *)*((_QWORD *)this + 1);
    if ( !v2 || (int)AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v2, a2, 1) < 0 )
      return 0;
  }
  return result;
}
