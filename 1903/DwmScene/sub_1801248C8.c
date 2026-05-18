/*
 * XREFs of sub_1801248C8 @ 0x1801248C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E668 @ 0x18000E668 (sub_18000E668.c)
 */

_QWORD *__fastcall sub_1801248C8(_QWORD *a1, __int64 a2)
{
  sub_18000E668((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
