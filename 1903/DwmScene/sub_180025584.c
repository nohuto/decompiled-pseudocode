/*
 * XREFs of sub_180025584 @ 0x180025584
 * Callers:
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     sub_1800A038C @ 0x1800A038C (sub_1800A038C.c)
 *     sub_18011CA6C @ 0x18011CA6C (sub_18011CA6C.c)
 *     sub_18012086C @ 0x18012086C (sub_18012086C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180025584(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
