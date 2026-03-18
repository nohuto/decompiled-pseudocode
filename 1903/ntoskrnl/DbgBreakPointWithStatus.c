/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401CB970
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x14015F684 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1402A8DA0 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1409185C0 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
