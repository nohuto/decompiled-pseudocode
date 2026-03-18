/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x1407085D4
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140707858 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1408FB6A4 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
