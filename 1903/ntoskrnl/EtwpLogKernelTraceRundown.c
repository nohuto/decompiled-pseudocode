/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1408FB6A4
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408FB1E4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FB33C (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x140707B3C (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140707BBC (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x1407085D4 (EtwpLogAlwaysPresentRundown.c)
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
