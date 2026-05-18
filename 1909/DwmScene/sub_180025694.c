/*
 * XREFs of sub_180025694 @ 0x180025694
 * Callers:
 *     sub_18001EABC @ 0x18001EABC (sub_18001EABC.c)
 *     sub_1800A049C @ 0x1800A049C (sub_1800A049C.c)
 *     sub_18011CB7C @ 0x18011CB7C (sub_18011CB7C.c)
 *     sub_18012097C @ 0x18012097C (sub_18012097C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180025694(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
