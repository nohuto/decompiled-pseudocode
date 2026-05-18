/*
 * XREFs of sub_1800D42B0 @ 0x1800D42B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007ED2C @ 0x18007ED2C (sub_18007ED2C.c)
 *     sub_1801082C4 @ 0x1801082C4 (sub_1801082C4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D42B0(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 16);
  sub_18007ED2C((__int64 ***)(a1 + 16), &v6, **(__int64 ***)(a1 + 16), *(__int64 **)(a1 + 16));
  j_j__o_free(*v2);
  sub_1801082C4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
