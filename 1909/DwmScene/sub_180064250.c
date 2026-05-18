/*
 * XREFs of sub_180064250 @ 0x180064250
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     sub_18006403C @ 0x18006403C (sub_18006403C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180064250(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 80);
  sub_180026664((__int64 ***)(a1 + 80), &v6, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*v2);
  sub_18006403C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
