/*
 * XREFs of wcsncmp @ 0x180092410
 * Callers:
 *     sub_1800199E0 @ 0x1800199E0 (sub_1800199E0.c)
 *     sub_180019B64 @ 0x180019B64 (sub_180019B64.c)
 *     sub_1800585E0 @ 0x1800585E0 (sub_1800585E0.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
