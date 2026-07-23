/*
 * XREFs of wcslen @ 0x180095B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // rax

  v1 = String;
  while ( *v1++ )
    ;
  return v1 - String - 1;
}
