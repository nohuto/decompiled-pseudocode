/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800E8AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(SourceCharacter);
}
