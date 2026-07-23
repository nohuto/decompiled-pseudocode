/*
 * XREFs of RtlCanonicalizeDomainName @ 0x1800464A0
 * Callers:
 *     RtlEqualDomainName @ 0x180046420 (RtlEqualDomainName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     RtlpNameprepAsciiWorker @ 0x180046684 (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x180046B50 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv6StringToAddressExW @ 0x180046ED0 (RtlIpv6StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x1800474D0 (RtlIdnToUnicode.c)
 *     RtlIpv6AddressToStringExW @ 0x18004EF70 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x18007CF10 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090070 (__report_rangecheckfailure.c)
 *     towlower @ 0x1800959A0 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, const UNICODE_STRING *a2, BOOLEAN a3)
{
  LONG result; // eax
  LONG v7; // edi
  WCHAR *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  LONG SourceStringLength; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v18[6]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v19; // [rsp+5Ch] [rbp-A4h]
  WCHAR AddressString[256]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[256]; // [rsp+260h] [rbp+160h] BYREF
  char v22; // [rsp+460h] [rbp+360h] BYREF

  DestinationStringLength = 256;
  *(_DWORD *)(&DestinationStringa.MaximumLength + 1) = 0;
  SourceStringLength = 256;
  DestinationStringa.Buffer = (wchar_t *)&v22;
  *(_DWORD *)&DestinationStringa.Length = 33554942;
  RtlCopyUnicodeString(&DestinationStringa, a2);
  if ( DestinationStringa.Length == DestinationStringa.MaximumLength )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(DestinationStringa.Buffer, (struct in6_addr *)v18, &ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( v18[0] || v18[1] || v18[2] || v18[3] || v18[4] || v18[5] != 0xFFFF || ScopeId )
    {
      result = RtlIpv6AddressToStringExW(
                 (const struct in6_addr *)v18,
                 ScopeId,
                 0,
                 AddressString,
                 (PULONG)&DestinationStringLength);
LABEL_28:
      if ( result < 0 )
        return result;
      goto LABEL_12;
    }
    ScopeId = v19;
LABEL_27:
    result = RtlIpv4AddressToStringExW(
               (const struct in_addr *)&ScopeId,
               0,
               AddressString,
               (PULONG)&DestinationStringLength);
    goto LABEL_28;
  }
  if ( RtlIpv4StringToAddressExW(DestinationStringa.Buffer, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
    goto LABEL_27;
  result = RtlpNameprepAsciiWorker(
             0,
             a2->Buffer,
             a2->Length >> 1,
             (unsigned int)SourceString,
             (__int64)&SourceStringLength,
             1);
  if ( result >= 0 )
  {
    v7 = SourceStringLength;
    if ( SourceStringLength )
    {
      v8 = SourceString;
      v9 = (unsigned int)SourceStringLength;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, SourceString, v7, AddressString, &DestinationStringLength);
    if ( result >= 0 )
    {
      if ( DestinationStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)(unsigned int)DestinationStringLength >= 0x200 )
          _report_rangecheckfailure(v11, v10, v12);
        AddressString[DestinationStringLength] = 0;
LABEL_12:
        if ( RtlCreateUnicodeString(DestinationString, AddressString) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
