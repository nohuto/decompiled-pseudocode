/*
 * XREFs of CmpInitializeKcbStack @ 0x1407F9F20
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
