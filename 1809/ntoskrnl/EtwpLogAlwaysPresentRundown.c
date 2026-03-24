/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140726360
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140725E48 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1408BE968 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
