/*
 * XREFs of EtwTraceBeginCallback @ 0x1C0025050
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 EtwTraceBeginCallback()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  ++*(_BYTE *)(result + 1248);
  return result;
}
