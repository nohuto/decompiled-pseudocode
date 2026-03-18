/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1408CE360
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x14011EE98 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
