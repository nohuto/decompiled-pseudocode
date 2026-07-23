/*
 * XREFs of RtlpCompareKnownAces @ 0x1800E52A0
 * Callers:
 *     RtlpCompareAces @ 0x1800E5254 (RtlpCompareAces.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x1800125D0 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x180067260 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

char __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v9; // edx
  void *v10; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Sid[12]; // [rsp+28h] [rbp-60h] BYREF

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  if ( !RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    memset(Sid, 0, sizeof(Sid));
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    Sid[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, Sid) )
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
    if ( !RtlEqualSid(a2 + 8, v10) )
      return 0;
  }
  return 1;
}
