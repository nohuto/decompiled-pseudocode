/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1408FB084
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408FABC4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FAD1C (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x14070991C (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14070A3B4 (EtwpLogAlwaysPresentRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int8 a4,
        unsigned int **a5,
        unsigned int a6)
{
  EtwpLogGroupMask(a1, a2, a3, 0x20u);
  EtwpKernelTraceRundown((__int64)a3, a1, a2, a4, a5, a6);
  EtwpLogAlwaysPresentRundown(a1, a2);
}
