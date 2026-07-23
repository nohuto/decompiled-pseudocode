/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x180046B50
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x180046CA0 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x180093870 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v6; // bp
  LPCWSTR v7; // rsi
  unsigned __int16 v8; // bx
  WCHAR v9; // r14
  wint_t v10; // di
  __int16 v11; // bx
  bool v12; // zf
  __int16 v13; // ax
  LPCWSTR v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &v14, Address) < 0 )
    return -1073741811;
  if ( *v14 == 58 )
  {
    v6 = 10;
    v7 = v14 + 1;
    v8 = 0;
    if ( v14[1] == 48 )
    {
      v6 = 8;
      v7 = v14 + 2;
      if ( ((v14[2] - 88) & 0xFFDF) == 0 )
      {
        v6 = 16;
        v7 = v14 + 3;
      }
    }
    v9 = *v7;
    v10 = *v7;
    if ( !*v7 )
      return -1073741811;
    do
    {
      ++v7;
      if ( v10 < 0x80u && iswctype(v10, 4u) && (unsigned __int16)(v10 - 48) < v6 )
      {
        if ( v10 + v8 * (unsigned int)v6 - 48 > 0xFFFF )
          return -1073741811;
        v11 = v8 * v6 - 48;
      }
      else
      {
        if ( v6 != 16
          || v10 >= 0x80u
          || !iswctype(v10, 0x80u)
          || v10 + 16 * v8 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v11 = 16 * v8;
        v12 = iswctype(v10, 2u) == 0;
        v13 = 97;
        if ( v12 )
          v13 = 65;
        v10 = v10 - v13 + 10;
      }
      v8 = v10 + v11;
      v10 = *v7;
    }
    while ( *v7 );
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *v14 )
      return -1073741811;
    v8 = 0;
  }
  *Port = __ROR2__(v8, 8);
  return 0;
}
