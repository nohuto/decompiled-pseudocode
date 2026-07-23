/*
 * XREFs of DebugPrompt @ 0x1800A3D70
 * Callers:
 *     DbgPrompt @ 0x1800E1F80 (DbgPrompt.c)
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
