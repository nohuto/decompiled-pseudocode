/*
 * XREFs of sub_18012340C @ 0x18012340C
 * Callers:
 *     sub_180121FCC @ 0x180121FCC (sub_180121FCC.c)
 *     sub_180122044 @ 0x180122044 (sub_180122044.c)
 *     sub_18012212C @ 0x18012212C (sub_18012212C.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_180123340 @ 0x180123340 (sub_180123340.c)
 *     sub_180123814 @ 0x180123814 (sub_180123814.c)
 *     sub_180134906 @ 0x180134906 (sub_180134906.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD **__fastcall sub_18012340C(__int64 a1)
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
      sub_180124634(v2 + 6);
      unknown_libname_116(v2 + 2);
      result = (_QWORD **)j_j__o_free(v2);
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return result;
}
