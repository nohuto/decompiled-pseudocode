/*
 * XREFs of PsGetPagePriorityThread @ 0x14005A580
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     CcScheduleReadAheadEx @ 0x140090340 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x140090970 (CcAsyncCopyRead.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     SmSetThreadPagePriority @ 0x14011CAC8 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x140147240 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1402ED578 (PfLogFileDataAccess.c)
 *     PfSnCheckActionsNeeded @ 0x14066C960 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x140697258 (PfSnAsyncContextInitialize.c)
 *     EtwTraceThread @ 0x1406C3C30 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1760) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 780LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
