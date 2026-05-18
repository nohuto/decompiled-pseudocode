/*
 * XREFs of sub_18008D27C @ 0x18008D27C
 * Callers:
 *     sub_180089140 @ 0x180089140 (sub_180089140.c)
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 *     sub_1800A27EC @ 0x1800A27EC (sub_1800A27EC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18008D27C()
{
  _QWORD *result; // rax

  result = operator new(0x50uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
