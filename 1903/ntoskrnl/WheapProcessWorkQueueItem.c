/*
 * XREFs of WheapProcessWorkQueueItem @ 0x140340740
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x140340678 (WheapFreeErrorRecord.c)
 *     WheapSendErrorRecordTelemetry @ 0x14034081C (WheapSendErrorRecordTelemetry.c)
 *     WheapGenerateETWEvents @ 0x1403417E0 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1405AF0DC (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x14091B11C (WheapPredictiveFailureAnalysis.c)
 */

LONG __fastcall WheapProcessWorkQueueItem(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  ULONG_PTR *v7; // rax

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 <= 9 )
        {
          v5 = 665;
          if ( _bittest(&v5, v4) )
            WheapCreateTriageDumpFromPreviousSession(a2);
        }
      }
    }
  }
  if ( WheapEventingInitialized )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapSendErrorRecordTelemetry(a2 + 40);
    return WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v7 = (ULONG_PTR *)qword_14042EAC8;
    if ( *(__int64 **)qword_14042EAC8 != &WheapWaitingETWEvents )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapWaitingETWEvents;
    *(_QWORD *)(a2 + 8) = v7;
    *v7 = a2;
    qword_14042EAC8 = a2;
    return KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
  }
}
