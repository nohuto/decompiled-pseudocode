/*
 * XREFs of RtlpCompareKnownAces @ 0x1800E7EA8
 * Callers:
 *     RtlpCompareAces @ 0x1800E7E5C (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180044DF0 (RtlEqualPrefixSid.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     RtlEqualSid @ 0x18006E5A0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

char __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, _WORD *a3, _WORD *a4)
{
  __int64 v6; // rcx
  int v9; // edx
  _WORD *v10; // rdx
  int v12; // [rsp+20h] [rbp-68h] BYREF
  __int16 v13; // [rsp+24h] [rbp-64h]
  _DWORD v14[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !RtlEqualSid((_WORD *)a2 + 4, (_WORD *)a1 + 4) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    v12 = 0;
    v13 = 768;
    memset(v14, 0, sizeof(v14));
    if ( (int)RtlInitializeSid((__int64)v14, (__int64)&v12, 1u) < 0 )
      return 0;
    v14[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, v14) )
      return 0;
    v9 = *((_DWORD *)a1 + 4);
    if ( v9 )
    {
      if ( v9 != 1 || !a4 )
        return 0;
      v10 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v10 = a3;
    }
    if ( !RtlEqualSid((_WORD *)a2 + 4, v10) )
      return 0;
  }
  return 1;
}
