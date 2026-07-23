/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1405A9E00
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     QueryFeatureOverride @ 0x1401B4090 (QueryFeatureOverride.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140327180 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1406C6420 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1408CE0B8 (ExpValidateLocale.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1408F17F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F188C (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409ABBC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x1405A9CF0 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
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
