/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C001B6A4
 * Callers:
 *     mbtowc @ 0x1C001B5B4 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
