/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x14070A3B4
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140709638 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1408FB084 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
