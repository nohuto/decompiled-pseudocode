/*
 * XREFs of RtlEqualPrefixSid @ 0x1800125D0
 * Callers:
 *     sub_180012128 @ 0x180012128 (sub_180012128.c)
 *     sub_180087874 @ 0x180087874 (sub_180087874.c)
 *     sub_1800E51B0 @ 0x1800E51B0 (sub_1800E51B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

BOOLEAN __cdecl RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  unsigned __int8 v3; // r10
  signed __int64 v4; // r8
  __int64 v5; // rax
  _DWORD *v6; // r9
  signed __int64 v7; // rdx
  int v8; // r9d

  if ( *(_BYTE *)Sid1 != *(_BYTE *)Sid2 )
    return 0;
  if ( *((_BYTE *)Sid1 + 2) != *((_BYTE *)Sid2 + 2) )
    return 0;
  if ( *((_BYTE *)Sid1 + 3) != *((_BYTE *)Sid2 + 3) )
    return 0;
  if ( *((_BYTE *)Sid1 + 4) != *((_BYTE *)Sid2 + 4) )
    return 0;
  if ( *((_BYTE *)Sid1 + 5) != *((_BYTE *)Sid2 + 5) )
    return 0;
  if ( *((_BYTE *)Sid1 + 6) != *((_BYTE *)Sid2 + 6) )
    return 0;
  if ( *((_BYTE *)Sid1 + 7) != *((_BYTE *)Sid2 + 7) )
    return 0;
  v3 = *((_BYTE *)Sid1 + 1);
  if ( v3 != *((_BYTE *)Sid2 + 1) )
    return 0;
  v4 = 0LL;
  if ( v3 )
  {
    if ( v3 != 11 )
      goto LABEL_12;
    v8 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v8 )
      v8 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v5 = 5LL;
    if ( v8 )
LABEL_12:
      v5 = 1LL;
    if ( v3 - v5 > 0 )
    {
      v6 = (char *)Sid1 + 8;
      v7 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
      while ( *v6 == *(_DWORD *)((char *)v6 + v7) )
      {
        ++v4;
        ++v6;
        if ( v4 >= v3 - v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
