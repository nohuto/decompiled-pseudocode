/*
 * XREFs of sub_18002B7AC @ 0x18002B7AC
 * Callers:
 *     sub_180027968 @ 0x180027968 (sub_180027968.c)
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_1800A646C @ 0x1800A646C (sub_1800A646C.c)
 *     sub_1800A7764 @ 0x1800A7764 (sub_1800A7764.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800E22F8 @ 0x1800E22F8 (sub_1800E22F8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002B7AC()
{
  _QWORD *result; // rax

  result = operator new(0x30uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
