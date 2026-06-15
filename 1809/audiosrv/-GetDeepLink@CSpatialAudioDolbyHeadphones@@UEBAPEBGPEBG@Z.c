/*
 * XREFs of ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGPEBG@Z @ 0x18005FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z @ 0x18005EB88 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z.c)
 */

const unsigned __int16 *__fastcall CSpatialAudioDolbyHeadphones::GetDeepLink(
        CSpatialAudioDolbyHeadphones *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v3; // rcx
  bool v4; // sf
  const unsigned __int16 *result; // rax

  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( !v3 )
    return (const unsigned __int16 *)((char *)this + 288);
  v4 = (int)AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v3, a2, 1) < 0;
  result = (const unsigned __int16 *)((char *)this + 800);
  if ( v4 )
    return (const unsigned __int16 *)((char *)this + 288);
  return result;
}
