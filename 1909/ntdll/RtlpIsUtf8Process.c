/*
 * XREFs of RtlpIsUtf8Process @ 0x180062264
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x180061E64 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x180061F00 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180061FA0 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180062050 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800620B0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E3540 (RtlConsoleMultiByteToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1800F6A00 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax

  v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  if ( !a1 )
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  return v1 != 0;
}
