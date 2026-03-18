/*
 * XREFs of CmpInitializeKcbStack @ 0x1408331E4
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
