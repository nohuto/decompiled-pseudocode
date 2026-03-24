/*
 * XREFs of EtwTraceSiloDcEvent @ 0x140310580
 * Callers:
 *     CmEtwRunDown @ 0x1407EB6A0 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x1407EBCC4 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2D4 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408520FC (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x14085F00C (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
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
