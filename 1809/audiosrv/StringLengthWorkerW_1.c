/*
 * XREFs of StringLengthWorkerW_1 @ 0x18004F9DC
 * Callers:
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x18004F90C (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800DB528 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DB5F8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW_1(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  HRESULT result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0x80070057 : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
