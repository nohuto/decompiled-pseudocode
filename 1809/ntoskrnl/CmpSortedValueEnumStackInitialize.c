/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x1408009A8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14026C968 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(_WORD *a1)
{
  memset(a1, 0, 0x58uLL);
  a1[4] = -1;
  return memset(a1 + 8, 0, 0x40uLL);
}
