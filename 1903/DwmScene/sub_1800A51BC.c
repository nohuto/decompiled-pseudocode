/*
 * XREFs of sub_1800A51BC @ 0x1800A51BC
 * Callers:
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 * Callees:
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 */

char *__fastcall sub_1800A51BC(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char *result; // rax

  v2 = a1 + 18664;
  if ( v2 != a2 )
    return sub_1800168B0(v2, *(char **)a2, *(_QWORD *)(a2 + 8));
  return result;
}
