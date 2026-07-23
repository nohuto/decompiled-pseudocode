/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140727600
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1407270E8 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1408BFC28 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
