/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401CC4F0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x14015FD24 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1402A8B00 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x140918020 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
