/*
 * XREFs of ndisSelectiveSuspendInitialize @ 0x1C00FC5B0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C001C360 (NdisNblTrackerRegisterComponent.c)
 *     NdisInitializeTimer @ 0x1C001DCF0 (NdisInitializeTimer.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C0074D80 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00FC1E8 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00FC2BC (ndisReadSSTimeoutKeywords.c)
 *     ndisSelectiveSuspendFree @ 0x1C00FC4B0 (ndisSelectiveSuspendFree.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(_QWORD *FunctionContext)
{
  __int64 v2; // rax
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  _OWORD *v5; // rax
  __int64 v6; // rax

  if ( (*((_DWORD *)FunctionContext + 30) & 0x80u) != 0
    || (v2 = FunctionContext[474], *(_QWORD *)(v2 + 840)) && *(_QWORD *)(v2 + 848) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x650uLL, 0x7373444Eu);
    FunctionContext[561] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x650uLL);
      v4 = FunctionContext[561];
      ndisNicAutoPowerSaverResetTelemetryData((__int64)FunctionContext);
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x7373444Eu);
      *(_QWORD *)(v4 + 600) = v5;
      if ( v5 )
      {
        *v5 = xmmword_1C008FAB0;
        v5[1] = xmmword_1C008FAC0;
        v5[2] = xmmword_1C008FAD0;
        v5[3] = xmmword_1C008FAE0;
        v5[4] = xmmword_1C008FAF0;
        v5[5] = xmmword_1C008FB00;
        v5[6] = xmmword_1C008FB10;
        *((_QWORD *)v5 + 14) = 0LL;
        *(_QWORD *)(v4 + 544) = 0LL;
        *(_QWORD *)(v4 + 552) = v4 + 544;
        *(_QWORD *)(v4 + 560) = 0LL;
        *(_QWORD *)(v4 + 568) = v4 + 560;
        *(_QWORD *)(v4 + 592) = v4 + 584;
        *(_QWORD *)(v4 + 584) = v4 + 584;
        ndisReadSSTimeoutKeywords(FunctionContext);
        if ( (*((_BYTE *)FunctionContext + 1004) & 2) == 0 && (FunctionContext[493] & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(FunctionContext);
        KeInitializeSpinLock((PKSPIN_LOCK)v4);
        NdisInitializeTimer((PNDIS_TIMER)(v4 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, FunctionContext);
        *(_QWORD *)(v4 + 296) = FunctionContext;
        *(_QWORD *)(v4 + 304) = ndisSSIdleTimerWorkItem;
        *(_QWORD *)(v4 + 376) = FunctionContext;
        *(_QWORD *)(v4 + 384) = ndisIdleCancelWorkItem;
        *(_QWORD *)(v4 + 456) = 0LL;
        *(_QWORD *)(v4 + 472) = ndisSetPowerResumeCompleteWorkItem;
        *(_QWORD *)(v4 + 480) = v4 + 456;
        KeInitializeEvent((PRKEVENT)(v4 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 272), NotificationEvent, 1u);
        *(_QWORD *)(v4 + 608) = NdisNblTrackerRegisterComponent(4, (__int64)FunctionContext, FunctionContext[486]);
        *(_QWORD *)(v4 + 616) = NdisNblTrackerRegisterComponent(5, (__int64)FunctionContext, FunctionContext[486]);
        v6 = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v4 + 504) |= 0x200u;
        *(_DWORD *)(v4 + 508) |= 0x100u;
        *(_QWORD *)(v4 + 656) = v6;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A025E >= 2u )
          WPP_SF_q(0xBu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)FunctionContext);
        ndisSelectiveSuspendFree((__int64)FunctionContext);
      }
    }
    else if ( (unsigned __int8)byte_1C00A025E >= 2u )
    {
      WPP_SF_q(0xAu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)FunctionContext);
    }
  }
}
