/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB80 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F98C (ndisReferenceMiniportByHandle.c)
 *     NdisMPauseComplete @ 0x1C003FC40 (NdisMPauseComplete.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ndisLWM5PauseMiniport @ 0x1C00997E4 (ndisLWM5PauseMiniport.c)
 *     ndisClearBusy @ 0x1C00B82B0 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C00B9ADC (ndisSetBusySync.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisMInvokePause @ 0x1C010BC88 (ndisMInvokePause.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0123E24 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int v2; // esi
  int v4; // edx
  KIRQL v5; // al
  unsigned __int64 *p_Lock; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r9
  int v12; // eax
  struct NDISWATCHDOG__ *v13; // rbx
  struct NDISWATCHDOG__ *v14; // [rsp+40h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+68h] [rbp-18h]

  v2 = a2;
  v16 = 0LL;
  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      10,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1);
  }
  if ( ndisReferenceMiniportByHandle(a1, 0) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    p_Lock = &a1->Lock;
    v7 = a1->State == NdisMiniportRunning;
    a1->MiniportThread = KeGetCurrentThread();
    if ( v7 )
    {
      a1->MiniportThread = 0LL;
      a1->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          v9,
          0xBu,
          (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
          v2,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v7 = a1->SelectiveSuspend == 0LL;
      v17 = v2;
      LODWORD(v16) = 786816;
      if ( !v7 )
        ndisSetBusySync(a1, 0x22u, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v10 )
        PauseHandler = 0LL;
      else
        PauseHandler = a1->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ndisMakeWatchdog(&v14, a1, 33, PauseHandler, 0x41EB0u, 0LL);
      if ( a1->MajorNdisVersion < 6u )
        v12 = ndisLWM5PauseMiniport((__int64)a1);
      else
        v12 = ndisMInvokePause((__int64)a1, (__int64)&v16);
      v13 = v14;
      if ( v12 == 259 )
        ndisWaitForEventThenDisarmWatchdog(v14, &Event);
      else
        NdisMPauseComplete(a1);
      if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog(v13);
      ndisLogMiniportEvent((__int64)a1, 0x35u);
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 34);
      a1->State = NdisMiniportPaused;
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v5);
    }
    ndisDereferenceMiniport((__int64)a1, 0x1Au);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      12,
      (struct _GUID *)&WPP_1ca93f758f0f3124655d4fa777d213a4_Traceguids,
      (char)a1);
  }
}
