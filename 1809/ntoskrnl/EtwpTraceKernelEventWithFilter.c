/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x140311E48
 * Callers:
 *     EtwTraceObjectOperation @ 0x140310168 (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1408B8500 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1408B8FD8 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  bool i; // zf

  v8 = a3 & *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward((unsigned int *)&a3, v8); !i; i = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    EtwpLogKernelEvent(a1, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4208), a2, a4, a5);
  }
}
