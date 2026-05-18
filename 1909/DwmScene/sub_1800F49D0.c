/*
 * XREFs of sub_1800F49D0 @ 0x1800F49D0
 * Callers:
 *     sub_18013295F @ 0x18013295F (sub_18013295F.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 */

__int64 __fastcall sub_1800F49D0(__int64 ***a1)
{
  __int64 *v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180026664(a1, &v3, **a1, (__int64 *)*a1);
  return j_j__o_free(*a1);
}
