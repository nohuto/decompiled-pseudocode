/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BA894 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisMPauseComplete @ 0x1C0014590 (NdisMPauseComplete.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ndisLWM5PauseMiniport @ 0x1C0061C8C (ndisLWM5PauseMiniport.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0075F58 (ndisSetBusySync.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B8F1C (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisMInvokePause @ 0x1C00BA928 (ndisMInvokePause.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C01039C4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  KIRQL v2; // al
  KSPIN_LOCK *p_Lock; // rcx
  bool v4; // zf
  bool v5; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r9
  int v7; // eax
  struct NDISWATCHDOG__ *v8; // rbx
  struct NDISWATCHDOG__ *v9; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisReferenceMiniportByHandle(MiniportAdapterHandle, 0) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Lock);
    p_Lock = &MiniportAdapterHandle->Lock;
    v4 = MiniportAdapterHandle->State == NdisMiniportRunning;
    MiniportAdapterHandle->MiniportThread = KeGetCurrentThread();
    MiniportAdapterHandle->LockDbg = 3801254;
    if ( v4 )
    {
      MiniportAdapterHandle->MiniportThread = 0LL;
      MiniportAdapterHandle->LockDbg = 0;
      MiniportAdapterHandle->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v2);
      if ( (unsigned __int8)byte_1C00A0258 >= 4u )
        WPP_SF_LqZ(
          0xBu,
          &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids,
          1,
          MiniportAdapterHandle,
          MiniportAdapterHandle->pAdapterInstanceName);
      v4 = MiniportAdapterHandle->SelectiveSuspend == 0LL;
      LODWORD(v11) = 786816;
      v12 = 1;
      if ( !v4 )
        ndisSetBusySync(MiniportAdapterHandle, 0x22u, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5 = MiniportAdapterHandle->MajorNdisVersion < 6u;
      MiniportAdapterHandle->AsyncOpCompletionEvent = &Event;
      if ( v5 )
        PauseHandler = 0LL;
      else
        PauseHandler = MiniportAdapterHandle->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ndisMakeWatchdog(
        (struct _NDIS_REFCOUNT_BLOCK **)&v9,
        MiniportAdapterHandle,
        (_NDIS_REFCOUNT_STACK_ENTRY)33,
        PauseHandler,
        0x41EB0u,
        0LL);
      if ( MiniportAdapterHandle->MajorNdisVersion < 6u )
        v7 = ndisLWM5PauseMiniport((__int64)MiniportAdapterHandle);
      else
        v7 = ndisMInvokePause((__int64)MiniportAdapterHandle, (__int64)&v11);
      v8 = v9;
      if ( v7 == 259 )
        ndisWaitForEventThenDisarmWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v9, &Event);
      else
        NdisMPauseComplete(MiniportAdapterHandle);
      if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v8);
      ndisLogMiniportEvent((__int64)MiniportAdapterHandle, 0x35u);
      if ( MiniportAdapterHandle->SelectiveSuspend )
        ndisClearBusy((__int64)MiniportAdapterHandle, 1, 34);
      MiniportAdapterHandle->State = NdisMiniportPaused;
    }
    else
    {
      MiniportAdapterHandle->MiniportThread = 0LL;
      MiniportAdapterHandle->LockDbg = 0;
      KeReleaseSpinLock(p_Lock, v2);
    }
    ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x1Au);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)MiniportAdapterHandle);
}
