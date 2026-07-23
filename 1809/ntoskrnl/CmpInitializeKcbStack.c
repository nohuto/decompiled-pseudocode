/*
 * XREFs of CmpInitializeKcbStack @ 0x1407FB100
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
