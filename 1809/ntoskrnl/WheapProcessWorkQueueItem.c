/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1403203D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x140320320 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140320E88 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14057F05C (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DCF64 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  PDRIVER_CONTROL DeviceRoutine; // rax

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
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapDispatchPtr.Queue.Wcb.DeviceObject, Executive, 0, 0, 0LL);
    DeviceRoutine = WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.DeviceRoutine != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
    *(_QWORD *)(a2 + 8) = DeviceRoutine;
    *(_QWORD *)DeviceRoutine = a2;
    WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DeviceObject, 0, 0);
  }
}
