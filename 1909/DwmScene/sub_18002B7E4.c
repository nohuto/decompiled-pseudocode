/*
 * XREFs of sub_18002B7E4 @ 0x18002B7E4
 * Callers:
 *     sub_180027968 @ 0x180027968 (sub_180027968.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_1800738A4 @ 0x1800738A4 (sub_1800738A4.c)
 *     sub_180073BC4 @ 0x180073BC4 (sub_180073BC4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_1800A27EC @ 0x1800A27EC (sub_1800A27EC.c)
 *     sub_1800A7764 @ 0x1800A7764 (sub_1800A7764.c)
 *     sub_1800B37A8 @ 0x1800B37A8 (sub_1800B37A8.c)
 *     sub_18011D104 @ 0x18011D104 (sub_18011D104.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18002B7E4()
{
  _QWORD *result; // rax

  result = operator new(0x48uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
