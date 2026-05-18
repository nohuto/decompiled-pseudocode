/*
 * XREFs of sub_180089378 @ 0x180089378
 * Callers:
 *     sub_18012E776 @ 0x18012E776 (sub_18012E776.c)
 * Callees:
 *     sub_18008DB64 @ 0x18008DB64 (sub_18008DB64.c)
 */

__int64 __fastcall sub_180089378(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18008DB64(a1, v3, **a1);
  return j_j__o_free(*a1);
}
