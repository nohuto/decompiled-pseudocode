/*
 * XREFs of sub_1800C6BB0 @ 0x1800C6BB0
 * Callers:
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     _o_powf @ 0x180125B76 (_o_powf.c)
 */

double __fastcall sub_1800C6BB0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_1800F5E1C(*a4);
}
