/*
 * XREFs of RtlEqualPrefixSid @ 0x140631800
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x140631420 (RtlpCopyEffectiveAce.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

BOOLEAN __stdcall RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  unsigned __int8 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // r9d
  __int64 v7; // r10
  _DWORD *v8; // r8
  signed __int64 v9; // rdx

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
  if ( v3 )
  {
    if ( v3 != 11 )
      goto LABEL_12;
    v6 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v6 )
      v6 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v4 = 5LL;
    if ( v6 )
LABEL_12:
      v4 = 1LL;
    v5 = v3 - v4;
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (char *)Sid1 + 8;
      v9 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
      while ( *v8 == *(_DWORD *)((char *)v8 + v9) )
      {
        ++v7;
        ++v8;
        if ( v7 >= v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
