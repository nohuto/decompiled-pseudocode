/*
 * XREFs of RtlInitializeSListHead @ 0x180076250
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18007EDC0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpHpVsDelayFreeContextInitialize @ 0x18009FE24 (RtlpHpVsDelayFreeContextInitialize.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800EB930 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FD9B0 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x1801054DC (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010A4FC (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180117010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
