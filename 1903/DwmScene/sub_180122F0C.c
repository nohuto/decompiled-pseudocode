/*
 * XREFs of sub_180122F0C @ 0x180122F0C
 * Callers:
 *     sub_1801207EC @ 0x1801207EC (sub_1801207EC.c)
 *     sub_1801208AC @ 0x1801208AC (sub_1801208AC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180122F0C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0xC0uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
