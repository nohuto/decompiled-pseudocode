/*
 * XREFs of RtlCopyUnicodeString @ 0x1800150A0
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrGetDllDirectory @ 0x18007DC90 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     EtwpQueryUmLogger @ 0x18010D810 (EtwpQueryUmLogger.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1801160B8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
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
