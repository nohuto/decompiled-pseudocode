/*
 * XREFs of _wtol @ 0x18008E840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *String)
{
  if ( String )
    return sub_180092870(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
