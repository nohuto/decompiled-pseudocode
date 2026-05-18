/*
 * XREFs of sub_1800A52CC @ 0x1800A52CC
 * Callers:
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 * Callees:
 *     sub_180016920 @ 0x180016920 (sub_180016920.c)
 */

char *__fastcall sub_1800A52CC(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char *result; // rax

  v2 = a1 + 18664;
  if ( v2 != a2 )
    return sub_180016920(v2, *(char **)a2, *(_QWORD *)(a2 + 8));
  return result;
}
