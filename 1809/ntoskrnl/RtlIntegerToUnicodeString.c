/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1405A8E00
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     QueryFeatureOverride @ 0x1401B37B4 (QueryFeatureOverride.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140326F90 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1406C5180 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x140719010 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140737228 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1408CCDF8 (ExpValidateLocale.c)
 *     AdtpBuildAccessesString @ 0x1408EFEAC (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F0530 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05CC (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140905EF0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906218 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409AABC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x1405A8CF0 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(Value, Base, 0x21u, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
