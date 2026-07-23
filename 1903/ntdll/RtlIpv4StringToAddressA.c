/*
 * XREFs of RtlIpv4StringToAddressA @ 0x18007AEE0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007AE50 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __isascii @ 0x18008CE10 (__isascii.c)
 *     isdigit @ 0x18008CF50 (isdigit.c)
 *     islower @ 0x18008CFB0 (islower.c)
 *     isxdigit @ 0x18008D0A0 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  BOOLEAN v6; // si
  unsigned int v8; // r13d
  char v9; // r12
  int v10; // r15d
  CHAR v11; // al
  int v12; // esi
  LONG result; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rbx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned int v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-1Ch]
  unsigned int v30; // [rsp+38h] [rbp-18h]
  unsigned int v31; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v28;
  v6 = Strict;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( v6 && v10 != 10 )
      goto LABEL_12;
    v11 = *S;
    if ( *S )
    {
      do
      {
        v12 = v11;
        if ( _isascii(v11) && isdigit(v12) && v12 - 48 < v10 )
        {
          v14 = v12 - 48;
          v15 = v8 * v10;
        }
        else
        {
          if ( v10 != 16 || !_isascii(v12) || !isxdigit(v12) )
            break;
          if ( !_isascii(v12) || (v24 = islower(v12), v25 = 97, !v24) )
            v25 = 65;
          v15 = 16 * v8 - v25;
          v14 = v12 + 10;
        }
        v16 = v15 + v14;
        if ( v16 < v8 )
          goto LABEL_12;
        ++S;
        v9 = 1;
        v8 = v16;
        v11 = *S;
      }
      while ( *S );
      v6 = Strict;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v31 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v9 || (*v4 = v8, v17 = ((char *)v4 - (char *)&v28 + 4) >> 2, v6) && (_DWORD)v17 != 4 )
  {
LABEL_12:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 || v28 > 0xFF || v29 > 0xFF || v30 > 0xFF || v31 > 0xFF )
          goto LABEL_12;
        v21 = (unsigned __int8)v31;
        v22 = ((unsigned __int8)v30 | (((v28 << 8) | (unsigned __int8)v29) << 8)) << 8;
      }
      else
      {
        if ( v28 > 0xFF || v29 > 0xFF || v30 > 0xFFFF )
          goto LABEL_12;
        v21 = (unsigned __int16)v30;
        v22 = ((v28 << 8) | (unsigned __int8)v29) << 16;
      }
    }
    else
    {
      if ( v28 > 0xFF || v29 > 0xFFFFFF )
        goto LABEL_12;
      v22 = v28 << 24;
      v21 = v29 & 0xFFFFFF;
    }
    v23 = v21 | v22;
  }
  else
  {
    v23 = v28;
  }
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v23);
  return 0;
}
