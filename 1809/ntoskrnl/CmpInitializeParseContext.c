/*
 * XREFs of CmpInitializeParseContext @ 0x1406D0C6C
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(_QWORD *a1)
{
  memset(a1, 0, 0x128uLL);
  a1[19] = a1 + 18;
  a1[18] = a1 + 18;
  return memset(a1 + 27, 0, 0x50uLL);
}
