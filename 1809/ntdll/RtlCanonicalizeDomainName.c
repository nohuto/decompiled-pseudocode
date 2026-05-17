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
 *     RtlIpv4AddressToStringExW @ 0x18007CF00 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090060 (__report_rangecheckfailure.c)
 *     towlower @ 0x180095990 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(__int64 a1, unsigned __int16 *a2, BOOLEAN a3)
{
  LONG result; // eax
  unsigned int v7; // edi
  wint_t *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG AddressStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR AddressString; // [rsp+48h] [rbp-B8h]
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v20[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[512]; // [rsp+260h] [rbp+160h] BYREF
  char v22; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  v16 = 256;
  AddressString = (PCWSTR)&v22;
  v17 = 33554942LL;
  RtlCopyUnicodeString((unsigned __int16 *)&v17, a2);
  if ( (_WORD)v17 == WORD1(v17) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(AddressString, &Address, &ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( Address.u.Word[0]
      || __PAIR32__(Address.u.Word[1], 0) != Address.u.Word[2]
      || __PAIR32__(Address.u.Word[3], 0) != Address.u.Word[4]
      || Address.u.Word[5] != 0xFFFF
      || ScopeId )
    {
      result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v20, &AddressStringLength);
LABEL_26:
      if ( result < 0 )
        return result;
      goto LABEL_12;
    }
    ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_25:
    result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, 0, v20, &AddressStringLength);
    goto LABEL_26;
  }
  if ( RtlIpv4StringToAddressExW(AddressString, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
    goto LABEL_25;
  result = RtlpNameprepAsciiWorker(0, *((_QWORD *)a2 + 1), *a2 >> 1, (unsigned int)v21, (__int64)&v16, 1);
  if ( result >= 0 )
  {
    v7 = v16;
    if ( v16 )
    {
      v8 = (wint_t *)v21;
      v9 = v16;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, (unsigned int)v21, v7, (unsigned int)v20, (__int64)&AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
          _report_rangecheckfailure(v11, v10, v12);
        v20[AddressStringLength] = 0;
LABEL_12:
        if ( RtlCreateUnicodeString(a1, v20) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
