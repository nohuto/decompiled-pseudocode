/*
 * XREFs of StringCchLengthW @ 0x1800D3CFC
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C7A1C (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  HRESULT result; // eax

  v3 = L"Feeds-AllowFeeds-Enabled";
  v4 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( pcchLength )
  {
    if ( v4 )
      *pcchLength = 0x7FFFFFFF - v4;
    else
      *pcchLength = 0LL;
  }
  if ( !v4 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
