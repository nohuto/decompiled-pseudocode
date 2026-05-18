/*
 * XREFs of sub_180064300 @ 0x180064300
 * Callers:
 *     sub_1800655E0 @ 0x1800655E0 (sub_1800655E0.c)
 *     sub_1800905C0 @ 0x1800905C0 (sub_1800905C0.c)
 *     sub_180096360 @ 0x180096360 (sub_180096360.c)
 *     sub_18009EBA0 @ 0x18009EBA0 (sub_18009EBA0.c)
 *     sub_18009F950 @ 0x18009F950 (sub_18009F950.c)
 *     sub_1800CE460 @ 0x1800CE460 (sub_1800CE460.c)
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 *     sub_1800D1F80 @ 0x1800D1F80 (sub_1800D1F80.c)
 *     sub_1800D27E0 @ 0x1800D27E0 (sub_1800D27E0.c)
 * Callees:
 *     sub_1800646E8 @ 0x1800646E8 (sub_1800646E8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180064300(__int64 a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  return sub_1800646E8(a1 + 80, &v3);
}
