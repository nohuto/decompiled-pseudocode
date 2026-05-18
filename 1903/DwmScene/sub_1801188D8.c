/*
 * XREFs of sub_1801188D8 @ 0x1801188D8
 * Callers:
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 * Callees:
 *     sub_1801184A0 @ 0x1801184A0 (sub_1801184A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801188D8(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  *(_QWORD *)&pguid.Data1 = 0LL;
  *(_QWORD *)pguid.Data4 = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_1801184A0(a1, (__int128 *)&v3);
  return a1;
}
