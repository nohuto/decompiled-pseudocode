/*
 * XREFs of PsGetPagePriorityThread @ 0x1400B5B20
 * Callers:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400DF3B4 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     SmSetThreadPagePriority @ 0x14011EC7C (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1402D3368 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406C2244 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
