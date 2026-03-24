/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1403204D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x140320420 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140320F88 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14057F05C (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DCF44 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // rax

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
    v6 = *(__int64 **)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
    if ( **(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DeviceContext )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapDispatchPtr.Queue.Wcb.DeviceContext;
    *(_QWORD *)(a2 + 8) = v6;
    *v6 = a2;
    *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
  }
}
