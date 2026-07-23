/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14063E630
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x14018C068 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1403487AC (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14061F4A4 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14074257C (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14092E1D4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14092E270 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14063E6C0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
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
