/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180022620
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     QueryFeatureOverride @ 0x18009F2B4 (QueryFeatureOverride.c)
 *     RtlConvertLCIDToString @ 0x1800EEA70 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x180022520 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlIntegerToUnicodeString(unsigned int a1, unsigned int a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  char v7[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(a1, a2, 33, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
