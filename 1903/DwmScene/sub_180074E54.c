/*
 * XREFs of sub_180074E54 @ 0x180074E54
 * Callers:
 *     sub_18012DA82 @ 0x18012DA82 (sub_18012DA82.c)
 *     sub_18012DCD1 @ 0x18012DCD1 (sub_18012DCD1.c)
 * Callees:
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 *     sub_18007F1F0 @ 0x18007F1F0 (sub_18007F1F0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074E54(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 2;
  sub_18002BC94((__int64 ***)a1 + 2, v4, *(__int64 **)a1[2], (__int64 *)a1[2]);
  j_j__o_free(*v1);
  sub_18007F1F0(a1, v4, *(_QWORD *)*a1);
  return j_j__o_free(*a1);
}
