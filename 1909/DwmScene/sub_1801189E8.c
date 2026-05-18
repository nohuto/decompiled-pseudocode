/*
 * XREFs of sub_1801189E8 @ 0x1801189E8
 * Callers:
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 * Callees:
 *     sub_1801185B0 @ 0x1801185B0 (sub_1801185B0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801189E8(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  *(_QWORD *)&pguid.Data1 = 0LL;
  *(_QWORD *)pguid.Data4 = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_1801185B0(a1, (__int128 *)&v3);
  return a1;
}
