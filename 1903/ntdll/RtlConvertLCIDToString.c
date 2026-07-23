/*
 * XREFs of RtlConvertLCIDToString @ 0x1800EBAF0
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC7E0 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     RtlIntegerToUnicodeString @ 0x1800213C0 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  ULONG v9; // ebx
  NTSTATUS result; // eax
  ULONG i; // eax
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v13[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset(v13, 0, sizeof(v13));
  v9 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (PWCH)v13;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v9;
    }
    if ( (int)sub_180001008(pResultBuf, v9, (__int64)String.Buffer) < 0 )
      return -1073741823;
    return 0;
  }
  return result;
}
