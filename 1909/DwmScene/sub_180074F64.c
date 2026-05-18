/*
 * XREFs of sub_180074F64 @ 0x180074F64
 * Callers:
 *     sub_18012DB92 @ 0x18012DB92 (sub_18012DB92.c)
 *     sub_18012DDE1 @ 0x18012DDE1 (sub_18012DDE1.c)
 * Callees:
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 *     sub_18007F300 @ 0x18007F300 (sub_18007F300.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074F64(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 2;
  sub_18002BDA4((__int64 ***)a1 + 2, v4, *(__int64 **)a1[2], (__int64 *)a1[2]);
  j_j__o_free(*v1);
  sub_18007F300(a1, v4, *(_QWORD *)*a1);
  return j_j__o_free(*a1);
}
