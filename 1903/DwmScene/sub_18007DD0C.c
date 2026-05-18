/*
 * XREFs of sub_18007DD0C @ 0x18007DD0C
 * Callers:
 *     sub_18007381C @ 0x18007381C (sub_18007381C.c)
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 *     sub_180081484 @ 0x180081484 (sub_180081484.c)
 *     sub_1800D30A0 @ 0x1800D30A0 (sub_1800D30A0.c)
 *     sub_1800D42A0 @ 0x1800D42A0 (sub_1800D42A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18007DD0C()
{
  _QWORD *result; // rax

  result = operator new(0x60uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
