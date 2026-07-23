/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x140801BA8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026CB58 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(_WORD *a1)
{
  memset(a1, 0, 0x58uLL);
  a1[4] = -1;
  return memset(a1 + 8, 0, 0x40uLL);
}
