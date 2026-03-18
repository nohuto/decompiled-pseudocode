/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401C5330
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140126330 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140144658 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140292260 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1408DA850 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
