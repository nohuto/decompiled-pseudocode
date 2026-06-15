/*
 * XREFs of ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013A6CC
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z @ 0x180139408 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013B55C (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
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
    for ( i = (LPCWCH *)((char *)this + 216); CompareStringOrdinal(a2, -1, *i, -1, 1) != 2; i += 4 )
    {
      if ( ++v3 >= 6 )
        return v2;
    }
    return v3;
  }
  return v2;
}
