/*
 * XREFs of PsGetPagePriorityThread @ 0x14005A4E0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 *     MiInitializeInPageSupport @ 0x14005A7A0 (MiInitializeInPageSupport.c)
 *     CcCompleteAsyncRead @ 0x1400808AC (CcCompleteAsyncRead.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x1400A9670 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     SmSetThreadPagePriority @ 0x1401052F8 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x140146BA0 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1402ED818 (PfLogFileDataAccess.c)
 *     PfSnCheckActionsNeeded @ 0x140659940 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x140669E38 (PfSnAsyncContextInitialize.c)
 *     EtwTraceThread @ 0x1406C4A70 (EtwTraceThread.c)
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
