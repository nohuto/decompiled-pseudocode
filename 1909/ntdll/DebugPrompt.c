/*
 * XREFs of DebugPrompt @ 0x1800A0920
 * Callers:
 *     DbgPrompt @ 0x1800DFBD0 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrompt()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
