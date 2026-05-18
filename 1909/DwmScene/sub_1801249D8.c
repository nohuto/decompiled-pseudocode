/*
 * XREFs of sub_1801249D8 @ 0x1801249D8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B8 @ 0x18000E6B8 (sub_18000E6B8.c)
 */

_QWORD *__fastcall sub_1801249D8(_QWORD *a1, __int64 a2)
{
  sub_18000E6B8((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
