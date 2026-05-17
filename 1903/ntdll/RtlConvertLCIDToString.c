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

NTSTATUS __fastcall RtlConvertLCIDToString(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  unsigned int i; // eax
  UNICODE_STRING v12; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v13[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset(v13, 0, sizeof(v13));
  v9 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  v12.Length = 2 * a5;
  v12.MaximumLength = 2 * a5;
  v12.Buffer = (wchar_t *)v13;
  result = RtlIntegerToUnicodeString(a1, a2, &v12);
  if ( result >= 0 )
  {
    for ( i = v12.Length >> 1; i < a3; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *a4++ = 48;
      --v9;
    }
    if ( (int)sub_180001008(a4, v9, (__int64)v12.Buffer) < 0 )
      return -1073741823;
    return 0;
  }
  return result;
}
