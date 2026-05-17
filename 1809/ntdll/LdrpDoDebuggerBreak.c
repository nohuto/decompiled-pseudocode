/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D288C
 * Callers:
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
