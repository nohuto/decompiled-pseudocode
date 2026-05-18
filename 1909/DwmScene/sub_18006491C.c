/*
 * XREFs of sub_18006491C @ 0x18006491C
 * Callers:
 *     sub_18012CC33 @ 0x18012CC33 (sub_18012CC33.c)
 *     sub_18012DB20 @ 0x18012DB20 (sub_18012DB20.c)
 *     sub_18012DD6F @ 0x18012DD6F (sub_18012DD6F.c)
 *     sub_18012F880 @ 0x18012F880 (sub_18012F880.c)
 *     sub_18012FEBC @ 0x18012FEBC (sub_18012FEBC.c)
 *     sub_180130573 @ 0x180130573 (sub_180130573.c)
 *     sub_18013095D @ 0x18013095D (sub_18013095D.c)
 *     sub_180130A0A @ 0x180130A0A (sub_180130A0A.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 */

__int64 __fastcall sub_18006491C(__int64 ***a1)
{
  __int64 *v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180026530(a1, &v3, **a1, (__int64 *)*a1);
  return j_j__o_free(*a1);
}
