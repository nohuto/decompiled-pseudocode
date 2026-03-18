/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14032DE80
 * Callers:
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x140825F3C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x140889988 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14088B3AC (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x14089B300 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
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
