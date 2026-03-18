/*
 * XREFs of RtlpIsUtf8Process @ 0x1406672F0
 * Callers:
 *     RtlMultiByteToUnicodeN @ 0x14063FC40 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x14063FD10 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpperString @ 0x1406666A0 (RtlUpperString.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140666A40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140667210 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpperChar @ 0x14066A150 (RtlUpperChar.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406C7830 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406C78C0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1406C7990 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToOemN @ 0x1406C7A00 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteN @ 0x14070A480 (RtlUnicodeToMultiByteN.c)
 *     RtlOemToUnicodeN @ 0x140713EE0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1408D4AC0 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx

  if ( a1 )
    v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  else
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  if ( v1 )
    return 1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0];
  if ( !v2 )
    return 0;
  if ( a1 )
    return !*(_QWORD *)(v2 + 168);
  else
    return !*(_QWORD *)(v2 + 160);
}
