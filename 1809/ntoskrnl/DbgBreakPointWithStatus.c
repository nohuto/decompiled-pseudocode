/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401C54B0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140144778 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140292550 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
