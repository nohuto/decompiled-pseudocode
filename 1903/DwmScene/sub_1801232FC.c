/*
 * XREFs of sub_1801232FC @ 0x1801232FC
 * Callers:
 *     sub_180121EBC @ 0x180121EBC (sub_180121EBC.c)
 *     sub_180121F34 @ 0x180121F34 (sub_180121F34.c)
 *     sub_18012201C @ 0x18012201C (sub_18012201C.c)
 *     sub_180122FFC @ 0x180122FFC (sub_180122FFC.c)
 *     sub_180123230 @ 0x180123230 (sub_180123230.c)
 *     sub_180123704 @ 0x180123704 (sub_180123704.c)
 *     sub_1801347F6 @ 0x1801347F6 (sub_1801347F6.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

_QWORD **__fastcall sub_1801232FC(__int64 a1)
{
  _QWORD *v2; // r14
  _QWORD **result; // rax
  _QWORD *v4; // rdi

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  result = *(_QWORD ***)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      sub_180124524(v2 + 6);
      unknown_libname_116(v2 + 2);
      result = (_QWORD **)j_j__o_free(v2);
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return result;
}
