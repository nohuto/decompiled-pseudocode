/*
 * XREFs of sub_1800F5520 @ 0x1800F5520
 * Callers:
 *     sub_1800905C0 @ 0x1800905C0 (sub_1800905C0.c)
 *     sub_180099600 @ 0x180099600 (sub_180099600.c)
 *     sub_1800A89C0 @ 0x1800A89C0 (sub_1800A89C0.c)
 * Callees:
 *     sub_1800646E8 @ 0x1800646E8 (sub_1800646E8.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800F5520(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_1800657B8((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_1800646E8((__int64 *)(a1 + 88), &v6);
}
