/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00B9D94
 * Callers:
 *     toupper @ 0x1C00B8488 (toupper.c)
 *     mbtowc @ 0x1C00B9CDC (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
