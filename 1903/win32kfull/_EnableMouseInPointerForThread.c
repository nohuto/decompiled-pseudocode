/*
 * XREFs of _EnableMouseInPointerForThread @ 0x1C0141FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnableMouseInPointerForThread()
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1224LL) |= 0x2000000u;
  return result;
}
