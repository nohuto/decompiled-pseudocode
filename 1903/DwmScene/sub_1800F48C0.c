/*
 * XREFs of sub_1800F48C0 @ 0x1800F48C0
 * Callers:
 *     sub_18013284F @ 0x18013284F (sub_18013284F.c)
 * Callees:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 */

__int64 __fastcall sub_1800F48C0(__int64 ***a1)
{
  __int64 *v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180026554(a1, &v3, **a1, (__int64 *)*a1);
  return j_j__o_free(*a1);
}
