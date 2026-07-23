/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x180080310
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x1800803A0 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x180090530 (__isascii.c)
 *     isdigit @ 0x180090670 (isdigit.c)
 *     islower @ 0x1800906D0 (islower.c)
 *     isxdigit @ 0x1800907C0 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  PCSTR v6; // rdi
  unsigned __int16 v7; // r14
  CHAR v8; // r15
  CHAR v9; // bp
  int v10; // eax
  int v11; // ecx
  __int16 v12; // bx
  int v13; // eax
  __int16 v14; // cx
  unsigned __int16 v15; // bx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 == 58 )
  {
    v6 = v16 + 1;
    v15 = 0;
    v7 = 10;
    if ( v16[1] == 48 )
    {
      v7 = 8;
      v6 = v16 + 2;
      if ( ((v16[2] - 88) & 0xDF) == 0 )
      {
        v7 = 16;
        v6 = v16 + 3;
      }
    }
    v8 = *v6;
    v9 = *v6;
    if ( !*v6 )
      return -1073741811;
    do
    {
      ++v6;
      if ( _isascii(v9) && isdigit(v9) && (unsigned __int16)(v9 - 48) < v7 )
      {
        if ( v15 * (unsigned int)v7 + v9 - 48 > 0xFFFF )
          return -1073741811;
        v15 = v9 + v15 * v7 - 48;
      }
      else
      {
        if ( v7 != 16 || !_isascii(v9) || !isxdigit(v9) )
          return -1073741811;
        if ( !_isascii(v9) || (v10 = islower(v9), v11 = 97, !v10) )
          v11 = 65;
        if ( v9 + 16 * (unsigned int)v15 - v11 + 10 > 0xFFFF )
          return -1073741811;
        v12 = 16 * v15;
        if ( !_isascii(v9) || (v13 = islower(v9), v14 = 97, !v13) )
          v14 = 65;
        v15 = v9 - v14 + 10 + v12;
      }
      v9 = *v6;
    }
    while ( *v6 );
    if ( !v8 )
      return -1073741811;
  }
  else
  {
    if ( *v16 )
      return -1073741811;
    v15 = 0;
  }
  *Port = __ROR2__(v15, 8);
  return 0;
}
