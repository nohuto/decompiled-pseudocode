/*
 * XREFs of _wtoi @ 0x18008E7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092870 @ 0x180092870 (sub_180092870.c)
 */

int __cdecl wtoi(const wchar_t *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_180092870(String, 0LL, 10LL, 1LL);
  return result;
}
