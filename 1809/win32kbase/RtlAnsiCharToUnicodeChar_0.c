/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C00A81F4
 * Callers:
 *     toupper @ 0x1C00A68D8 (toupper.c)
 *     mbtowc @ 0x1C00A7FF0 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
