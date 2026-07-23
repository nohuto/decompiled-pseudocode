/*
 * XREFs of RtlCopyUnicodeString @ 0x1800411E0
 * Callers:
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     LdrGetDllFullName @ 0x18003F4B0 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllDirectory @ 0x180082760 (LdrGetDllDirectory.c)
 *     EtwpQueryUmLogger @ 0x180089394 (EtwpQueryUmLogger.c)
 *     QueryFeatureOverride @ 0x18009F2C8 (QueryFeatureOverride.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rsi
  wchar_t *v6; // rdx
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = DestinationString->Buffer;
    v6 = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(Buffer, v6, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      Buffer[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
