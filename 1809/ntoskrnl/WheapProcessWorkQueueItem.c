/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1403206C0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x140320610 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140321178 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14058005C (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DE204 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  struct _LIST_ENTRY *Flink; // rax

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
  if ( WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapDispatchPtr.Queue.Wcb.DeviceObject, Executive, 0, 0, 0LL);
    Flink = WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink;
    if ( WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink->Flink != (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceQueue )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapDispatchPtr.DeviceQueue;
    *(_QWORD *)(a2 + 8) = Flink;
    Flink->Flink = (struct _LIST_ENTRY *)a2;
    WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
  }
}
