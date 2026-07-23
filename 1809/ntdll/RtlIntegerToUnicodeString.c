/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180022620
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     QueryFeatureOverride @ 0x18009F2C8 (QueryFeatureOverride.c)
 *     RtlConvertLCIDToString @ 0x1800EEA70 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x180022520 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(Value, Base, 33, Stringa);
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
