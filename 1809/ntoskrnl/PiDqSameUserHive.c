/*
 * XREFs of PiDqSameUserHive @ 0x14082C42C
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 */

__int64 __fastcall PiDqSameUserHive(__int64 *a1, __int64 *a2, BOOLEAN *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  _BYTE Sid2[80]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE Sid1[80]; // [rsp+70h] [rbp-68h] BYREF

  v5 = *a1;
  if ( !v5 )
    v5 = a1[2];
  SeQueryUserSidToken(v5, Sid1, 0x44u, 0LL);
  v7 = *a2;
  if ( !*a2 )
    v7 = a2[2];
  SeQueryUserSidToken(v7, Sid2, 0x44u, 0LL);
  *a3 = RtlEqualSid(Sid1, Sid2);
  return 0LL;
}
