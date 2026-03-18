/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1408CDC40
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x14011FC48 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
