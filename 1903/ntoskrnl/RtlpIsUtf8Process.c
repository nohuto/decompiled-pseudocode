/*
 * XREFs of RtlpIsUtf8Process @ 0x1406541F0
 * Callers:
 *     RtlMultiByteToUnicodeN @ 0x14063CB90 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x14063CC60 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpperString @ 0x1406535A0 (RtlUpperString.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140653940 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140654110 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpperChar @ 0x140657130 (RtlUpperChar.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406C8FE0 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406C9070 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1406C9140 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToOemN @ 0x1406C91B0 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteN @ 0x1407086A0 (RtlUnicodeToMultiByteN.c)
 *     RtlOemToUnicodeN @ 0x140712100 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1408D51C0 (RtlIsValidOemCharacter.c)
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
