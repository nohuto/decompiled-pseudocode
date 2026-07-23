/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x1402F3D70
 * Callers:
 *     <none>
 * Callees:
 *     __isascii @ 0x14019603C (__isascii.c)
 *     isdigit @ 0x140196050 (isdigit.c)
 *     islower @ 0x140196080 (islower.c)
 *     isxdigit @ 0x140196140 (isxdigit.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3950 (RtlIpv6StringToAddressA.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExA(
        PCSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  CHAR v7; // r14
  bool v8; // zf
  const CHAR *v9; // rcx
  unsigned __int16 v10; // si
  ULONG v11; // r15d
  PCSTR v12; // rbx
  int v13; // edi
  bool v14; // dl
  unsigned __int16 v15; // r14
  PCSTR v16; // rcx
  char v17; // al
  CHAR v18; // bp
  __int16 v19; // ax
  __int16 v20; // si
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int16 v24; // cx
  NTSTATUS result; // eax
  PCSTR v26; // [rsp+20h] [rbp-38h] BYREF
  bool v27; // [rsp+60h] [rbp+8h]

  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = *AddressString == 91;
  v9 = AddressString + 1;
  v10 = 0;
  if ( !v8 )
    v9 = AddressString;
  v11 = 0;
  v27 = v8;
  if ( RtlIpv6StringToAddressA(v9, &v26, Address) < 0 )
    return -1073741811;
  v12 = v26;
  if ( *v26 == 37 )
  {
    v12 = v26 + 1;
    v13 = v26[1];
    if ( !_isascii(v13) || !isdigit(v13) )
      return -1073741811;
    while ( (_BYTE)v13 && (_BYTE)v13 != 93 )
    {
      if ( !_isascii((char)v13) || !isdigit((char)v13) || (char)v13 + 2 * (5 * (unsigned __int64)v11 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v11 = (char)v13 + 10 * v11 - 48;
      LOBYTE(v13) = *++v12;
    }
  }
  if ( *v12 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v12;
    v14 = 0;
    v27 = 0;
    if ( *v12 == 58 )
    {
      ++v12;
      v15 = 10;
      if ( *v12 == 48 )
      {
        v16 = v12 + 1;
        v15 = 8;
        v17 = *++v12 - 88;
        if ( (v17 & 0xDF) == 0 )
        {
          v15 = 16;
          v12 = v16 + 1;
        }
      }
      v18 = *v12;
      if ( *v12 )
      {
        while ( 1 )
        {
          if ( _isascii(v18) && isdigit(v18) && v18 - 48 < v15 )
          {
            if ( v18 + v15 * (unsigned int)v10 - 48 > 0xFFFF )
              return -1073741811;
            v19 = v18;
            v20 = v10 * v15 - 48;
          }
          else
          {
            if ( v15 != 16 || !_isascii(v18) || !isxdigit(v18) )
              return -1073741811;
            if ( !_isascii(v18) || (v21 = islower(v18), v22 = 97, !v21) )
              v22 = 65;
            if ( v18 + 16 * (unsigned int)v10 - v22 + 10 > 0xFFFF )
              return -1073741811;
            v20 = 16 * v10;
            if ( !_isascii(v18) || (v23 = islower(v18), v24 = 97, !v23) )
              v24 = 65;
            v19 = v18 - v24 + 10;
          }
          ++v12;
          v10 = v19 + v20;
          v18 = *v12;
          if ( !*v12 )
            goto LABEL_41;
        }
      }
    }
  }
  else
  {
LABEL_41:
    v14 = v27;
  }
  if ( !*v12 && !v14 )
  {
    *Port = __ROR2__(v10, 8);
    result = 0;
    *ScopeId = v11;
    return result;
  }
  return -1073741811;
}
