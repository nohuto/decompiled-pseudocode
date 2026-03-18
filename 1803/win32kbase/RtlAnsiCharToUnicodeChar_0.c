/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C0075BC8
 * Callers:
 *     toupper @ 0x1C0074110 (toupper.c)
 *     mbtowc @ 0x1C00759DC (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
