/*
 * XREFs of PiDqSameUserHive @ 0x140865A04
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 */

__int64 __fastcall PiDqSameUserHive(__int64 *a1, __int64 *a2, BOOLEAN *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE Sid2[80]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE Sid1[80]; // [rsp+70h] [rbp-78h] BYREF

  memset(Sid1, 0, 0x44uLL);
  memset(Sid2, 0, 0x44uLL);
  v6 = *a1;
  if ( !*a1 )
    v6 = a1[2];
  SeQueryUserSidToken(v6, Sid1, 0x44u, 0LL);
  v7 = *a2;
  if ( !*a2 )
    v7 = a2[2];
  SeQueryUserSidToken(v7, Sid2, 0x44u, 0LL);
  *a3 = RtlEqualSid(Sid1, Sid2);
  return 0LL;
}
