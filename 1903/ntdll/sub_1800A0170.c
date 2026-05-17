/*
 * XREFs of sub_1800A0170 @ 0x1800A0170
 * Callers:
 *     DbgPrompt @ 0x1800DFB10 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800A0170()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
