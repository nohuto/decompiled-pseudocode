/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00BCDF4
 * Callers:
 *     toupper @ 0x1C00BB4E8 (toupper.c)
 *     mbtowc @ 0x1C00BCD3C (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
