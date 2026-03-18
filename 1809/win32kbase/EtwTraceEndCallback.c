/*
 * XREFs of EtwTraceEndCallback @ 0x1C0024260
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 EtwTraceEndCallback()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  --*(_BYTE *)(result + 1224);
  return result;
}
