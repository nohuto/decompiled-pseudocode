/*
 * XREFs of sub_18006480C @ 0x18006480C
 * Callers:
 *     sub_18012CB23 @ 0x18012CB23 (sub_18012CB23.c)
 *     sub_18012DA10 @ 0x18012DA10 (sub_18012DA10.c)
 *     sub_18012DC5F @ 0x18012DC5F (sub_18012DC5F.c)
 *     sub_18012F770 @ 0x18012F770 (sub_18012F770.c)
 *     sub_18012FDAC @ 0x18012FDAC (sub_18012FDAC.c)
 *     sub_180130463 @ 0x180130463 (sub_180130463.c)
 *     sub_18013084D @ 0x18013084D (sub_18013084D.c)
 *     sub_1801308FA @ 0x1801308FA (sub_1801308FA.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 */

__int64 __fastcall sub_18006480C(__int64 ***a1)
{
  __int64 *v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180026420(a1, &v3, **a1, (__int64 *)*a1);
  return j_j__o_free(*a1);
}
