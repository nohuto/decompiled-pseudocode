/*
 * XREFs of MiGetAwePageSizeFromVa @ 0x1402D6240
 * Callers:
 *     MmSetGraphicsPtes @ 0x140889780 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiGetAweNode @ 0x1402D61C8 (MiGetAweNode.c)
 */

_QWORD *__fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  _QWORD *result; // rax

  result = MiGetAweNode(a1);
  if ( result )
    return *(_QWORD **)(result[4] + 8LL);
  return result;
}
