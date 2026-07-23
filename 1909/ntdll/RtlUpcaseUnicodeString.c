/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000E4A0
 * Callers:
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180083050 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r9
  __int64 v7; // r11
  wchar_t v8; // r8
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Length, SourceString);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    v5 = SourceString->Length;
  }
  else
  {
    v5 = SourceString->Length;
    if ( SourceString->Length > DestinationString->MaximumLength )
      return -2147483643;
  }
  v6 = 0LL;
  v7 = Nls844UnicodeUpcaseTable;
  while ( (unsigned int)v6 < v5 >> 1 )
  {
    v8 = SourceString->Buffer[v6];
    if ( v8 >= 0x61u )
    {
      if ( v8 <= 0x7Au )
      {
        v8 -= 32;
      }
      else if ( v7 )
      {
        if ( v8 >= 0xC0u )
          v8 += *(_WORD *)(v7
                         + 2LL
                         * ((v8 & 0xF)
                          + (unsigned int)*(unsigned __int16 *)(v7
                                                              + 2LL
                                                              * (((v8 >> 4) & 0xF)
                                                               + (unsigned int)*(unsigned __int16 *)(v7 + 2LL * HIBYTE(v8))))));
      }
    }
    DestinationString->Buffer[v6] = v8;
    v6 = (unsigned int)(v6 + 1);
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
