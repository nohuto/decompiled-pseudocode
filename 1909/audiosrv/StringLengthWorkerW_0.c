/*
 * XREFs of StringLengthWorkerW_0 @ 0x18004EDB4
 * Callers:
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x18004D5F8 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004D9E0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x1800549F4 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW_0(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
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
