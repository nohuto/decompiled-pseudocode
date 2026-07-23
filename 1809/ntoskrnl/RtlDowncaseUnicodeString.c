/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1406A3E80
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 Length; // ax
  unsigned int v6; // ebx
  wchar_t v7; // r9
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    Length = SourceString->Length;
  }
  else if ( Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  while ( v6 < Length >> 1 )
  {
    v7 = SourceString->Buffer[v6];
    if ( v7 >= 0x41u )
    {
      if ( v7 <= 0x5Au )
        v7 += 32;
      else
        v7 += *(_WORD *)(Nls844UnicodeLowercaseTable
                       + 2LL
                       * ((v7 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                            + 2LL
                                                            * (((v7 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v7 >> 8))))));
    }
    DestinationString->Buffer[v6++] = v7;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
