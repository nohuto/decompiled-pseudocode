/*
 * XREFs of CmpInitializeParseContext @ 0x1406F1D6C
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(_QWORD *a1)
{
  memset(a1, 0, 0x128uLL);
  a1[19] = a1 + 18;
  a1[18] = a1 + 18;
  return memset(a1 + 27, 0, 0x50uLL);
}
