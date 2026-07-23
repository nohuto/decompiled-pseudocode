/*
 * XREFs of InitializeSListHead @ 0x18006F2CC
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x18004C98C (RtlpHpVsContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18006F100 (RtlCreateMemoryBlockLookaside.c)
 *     RtlInitializeSListHead @ 0x180074410 (RtlInitializeSListHead.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E8A20 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FAC70 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x180102BB8 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801079A0 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180117010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
