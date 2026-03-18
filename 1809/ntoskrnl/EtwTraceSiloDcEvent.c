/*
 * XREFs of EtwTraceSiloDcEvent @ 0x140310480
 * Callers:
 *     CmEtwRunDown @ 0x1407EB6C0 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1407EBCE4 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2F4 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14085211C (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x14085F02C (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
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
