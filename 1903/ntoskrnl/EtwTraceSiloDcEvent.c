/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14032E420
 * Callers:
 *     CmEtwRunDown @ 0x1408261C8 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14082683C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14088A168 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14088BB8C (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x14089BAE0 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
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
