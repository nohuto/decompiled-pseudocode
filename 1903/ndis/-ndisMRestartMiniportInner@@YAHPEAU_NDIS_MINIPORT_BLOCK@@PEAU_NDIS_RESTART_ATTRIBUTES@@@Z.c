/*
 * XREFs of ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70
 * Callers:
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C00240B4 (ndisSetupLwfMiniportHandlers.c)
 *     ndisUpdateOperationalStatus @ 0x1C003F7B8 (ndisUpdateOperationalStatus.c)
 *     NdisMRestartComplete @ 0x1C003F890 (NdisMRestartComplete.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F99C (ndisReferenceMiniportByHandle.c)
 *     ndisLWM5RestartMinport @ 0x1C0099730 (ndisLWM5RestartMinport.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C00B990C (ndisSetBusySync.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C00C36E4 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ndisMInvokeRestart @ 0x1C010BAA8 (ndisMInvokeRestart.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisMRestartMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RESTART_ATTRIBUTES *a2)
{
  struct _NDIS_RESTART_ATTRIBUTES *v2; // rdi
  int v4; // edx
  KIRQL v5; // al
  KIRQL v6; // r14
  bool v7; // zf
  __int64 v8; // rdx
  bool v9; // cf
  NDIS_STATUS restarted; // eax
  unsigned int AsyncOpCompletionStatus; // edi
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_RESTART_ATTRIBUTES *v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF

  v2 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      15,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1);
  }
  if ( ndisReferenceMiniportByHandle(a1, 0) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v6 = v5;
    v7 = a1->State == NdisMiniportPaused;
    a1->MiniportThread = KeGetCurrentThread();
    if ( v7 )
    {
      ndisSetupLwfMiniportHandlers(a1);
      a1->MiniportThread = 0LL;
      a1->State = NdisMiniportRestarting;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          9u,
          0x10u,
          (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v15 = 0LL;
      v7 = a1->SelectiveSuspend == 0LL;
      v13 = 1573248LL;
      v14 = v2;
      if ( !v7 )
        ndisSetBusySync(a1, 0x23u, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v9 )
        restarted = ndisLWM5RestartMinport((__int64)a1);
      else
        restarted = ndisMInvokeRestart((__int64)a1, (__int64)&v13);
      AsyncOpCompletionStatus = restarted;
      if ( restarted == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        AsyncOpCompletionStatus = a1->AsyncOpCompletionStatus;
      }
      else
      {
        NdisMRestartComplete(a1, restarted);
      }
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 35);
      if ( AsyncOpCompletionStatus )
      {
        a1->State = NdisMiniportPaused;
        ndisMiniportFatalError((__int64)a1, 73);
        NdisTraceLoggingRareMiniportPath();
      }
      else
      {
        a1->State = NdisMiniportRunning;
        ndisLogMiniportEvent((__int64)a1, 0x36u);
      }
      if ( !AsyncOpCompletionStatus )
        ndisUpdateOperationalStatus(a1);
    }
    else
    {
      a1->MiniportThread = 0LL;
      AsyncOpCompletionStatus = -1073741808;
      KeReleaseSpinLock(&a1->Lock, v5);
    }
    ndisDereferenceMiniport((__int64)a1, 0x1Bu);
  }
  else
  {
    AsyncOpCompletionStatus = -1073676282;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      17,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1,
      AsyncOpCompletionStatus);
  }
  return AsyncOpCompletionStatus;
}
