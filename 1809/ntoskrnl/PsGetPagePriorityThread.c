/*
 * XREFs of PsGetPagePriorityThread @ 0x1400B5BC0
 * Callers:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x14008DFD0 (CcScheduleReadAheadEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1400B5640 (MiAllocateKernelStackPages.c)
 *     ExpWorkerThread @ 0x1400B5C50 (ExpWorkerThread.c)
 *     CcPerformReadAhead @ 0x1400DDFA4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400DF314 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1400DFEA0 (CcAsyncCopyRead.c)
 *     SmSetThreadPagePriority @ 0x14011EBEC (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x14017C3EC (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1402D3078 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140667E5C (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406C0FC4 (PfSnAsyncContextInitialize.c)
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
