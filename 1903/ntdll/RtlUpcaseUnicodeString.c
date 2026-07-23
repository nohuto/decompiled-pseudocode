/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000E4A0
 * Callers:
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x1800829B0 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  USHORT v5; // ax
  __int64 v6; // r9
  __int64 v7; // r11
  WCHAR v8; // r8
  unsigned int Length; // eax
  WCHAR *v11; // rax

  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    v11 = (WCHAR *)sub_18006D6B8(Length, SourceString);
    DestinationString->Buffer = v11;
    if ( !v11 )
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
  v7 = qword_180166510;
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
