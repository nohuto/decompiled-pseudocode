/*
 * XREFs of PsGetPagePriorityThread @ 0x1400B5BE0
 * Callers:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x14008DFD0 (CcScheduleReadAheadEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1400B5660 (MiAllocateKernelStackPages.c)
 *     ExpWorkerThread @ 0x1400B5C70 (ExpWorkerThread.c)
 *     CcPerformReadAhead @ 0x1400DDFC4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400DF334 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1400DFEC0 (CcAsyncCopyRead.c)
 *     SmSetThreadPagePriority @ 0x14011EC0C (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x14017C40C (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x1402D3178 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140667E3C (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406C0FA4 (PfSnAsyncContextInitialize.c)
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
