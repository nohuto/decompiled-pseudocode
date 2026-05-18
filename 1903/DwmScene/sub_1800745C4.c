/*
 * XREFs of sub_1800745C4 @ 0x1800745C4
 * Callers:
 *     sub_18012D8CD @ 0x18012D8CD (sub_18012D8CD.c)
 *     sub_18012DB1C @ 0x18012DB1C (sub_18012DB1C.c)
 * Callees:
 *     sub_18007EE80 @ 0x18007EE80 (sub_18007EE80.c)
 */

__int64 __fastcall sub_1800745C4(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007EE80(a1, v3, **a1);
  return j_j__o_free(*a1);
}
