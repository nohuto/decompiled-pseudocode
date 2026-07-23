/*
 * XREFs of EtwTraceSiloDcEvent @ 0x140310770
 * Callers:
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1407ECEC4 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14084F534 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14085335C (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x14086026C (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
