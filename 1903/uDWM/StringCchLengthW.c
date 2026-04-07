/*
 * XREFs of StringCchLengthW @ 0x180037378
 * Callers:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x1800371E8 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FC38 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180043C5C (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // rdx
  HRESULT result; // eax

  if ( psz )
  {
    v3 = 0x7FFFFFFFLL;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0x80070057 : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = 0x7FFFFFFF - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -2147024809;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
