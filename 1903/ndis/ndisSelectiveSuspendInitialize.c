/*
 * XREFs of ndisSelectiveSuspendInitialize @ 0x1C011BF18
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026080 (NdisNblTrackerRegisterComponent.c)
 *     NdisInitializeTimer @ 0x1C002FB60 (NdisInitializeTimer.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C00B85D4 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011BB74 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C011BC98 (ndisReadSSTimeoutKeywords.c)
 *     ndisSelectiveSuspendFree @ 0x1C011BE18 (ndisSelectiveSuspendFree.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(__int64 a1)
{
  __int64 v2; // rax
  PVOID PoolWithTag; // rax
  int v4; // edx
  __int64 v5; // rdi
  _OWORD *v6; // rax
  int v7; // edx
  __int64 v8; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0
    || (v2 = *(_QWORD *)(a1 + 3760), *(_QWORD *)(v2 + 840)) && *(_QWORD *)(v2 + 848) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x650uLL, 0x7373444Eu);
    *(_QWORD *)(a1 + 4448) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x650uLL);
      v5 = *(_QWORD *)(a1 + 4448);
      ndisNicAutoPowerSaverResetTelemetryData(a1);
      v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x7373444Eu);
      *(_QWORD *)(v5 + 600) = v6;
      if ( v6 )
      {
        *v6 = xmmword_1C00D4A10;
        v6[1] = xmmword_1C00D4A20;
        v6[2] = xmmword_1C00D4A30;
        v6[3] = xmmword_1C00D4A40;
        v6[4] = xmmword_1C00D4A50;
        v6[5] = xmmword_1C00D4A60;
        v6[6] = xmmword_1C00D4A70;
        *((_QWORD *)v6 + 14) = 0LL;
        *(_QWORD *)(v5 + 544) = 0LL;
        *(_QWORD *)(v5 + 552) = v5 + 544;
        *(_QWORD *)(v5 + 560) = 0LL;
        *(_QWORD *)(v5 + 568) = v5 + 560;
        *(_QWORD *)(v5 + 592) = v5 + 584;
        *(_QWORD *)(v5 + 584) = v5 + 584;
        ndisReadSSTimeoutKeywords((_QWORD *)a1);
        if ( (*(_BYTE *)(a1 + 1004) & 2) == 0 && (*(_DWORD *)(a1 + 3912) & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords((struct _NDIS_MINIPORT_BLOCK *)a1);
        KeInitializeSpinLock((PKSPIN_LOCK)v5);
        NdisInitializeTimer((PNDIS_TIMER)(v5 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, (PVOID)a1);
        *(_QWORD *)(v5 + 296) = a1;
        *(_QWORD *)(v5 + 304) = ndisSSIdleTimerWorkItem;
        *(_QWORD *)(v5 + 376) = a1;
        *(_QWORD *)(v5 + 384) = ndisIdleCancelWorkItem;
        *(_QWORD *)(v5 + 456) = 0LL;
        *(_QWORD *)(v5 + 472) = ndisSetPowerResumeCompleteWorkItem;
        *(_QWORD *)(v5 + 480) = v5 + 456;
        KeInitializeEvent((PRKEVENT)(v5 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v5 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v5 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v5 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v5 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v5 + 272), NotificationEvent, 1u);
        *(_QWORD *)(v5 + 608) = NdisNblTrackerRegisterComponent(4, a1, *(_QWORD *)(a1 + 3856));
        *(_QWORD *)(v5 + 616) = NdisNblTrackerRegisterComponent(5, a1, *(_QWORD *)(a1 + 3856));
        v8 = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v5 + 504) |= 0x200u;
        *(_DWORD *)(v5 + 508) |= 0x100u;
        *(_QWORD *)(v5 + 656) = v8;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            15,
            11,
            (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
            a1);
        }
        ndisSelectiveSuspendFree(a1);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        15,
        10,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        a1);
    }
  }
}
