/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01302F0
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD5C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1C00404B4 (WPP_RECORDER_SF_DqqZZ.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE9F0 (McTemplateK0juqjzzz.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisFInvokePause @ 0x1C010BEB0 (ndisFInvokePause.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0123E24 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v8; // eax
  struct NDISWATCHDOG__ *v9; // rbx
  KIRQL v10; // al
  int v11; // [rsp+28h] [rbp-39h]
  int v12; // [rsp+30h] [rbp-31h]
  struct NDISWATCHDOG__ *v13; // [rsp+58h] [rbp-9h] BYREF
  char v14; // [rsp+60h] [rbp-1h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+Fh] BYREF
  _NDIS_FILTER_PAUSE_PARAMETERS v16; // [rsp+88h] [rbp+27h] BYREF

  Miniport = a1->Miniport;
  *(_QWORD *)&v16.Header.Type = 0LL;
  v16.PauseReason = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)a1);
  if ( a1->State == NdisFilterRunning )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 2u;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        v5,
        v6,
        v11,
        v12,
        (char)Miniport,
        (char)a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length);
    a1->State = NdisFilterPausing;
    if ( (byte_1C00E8083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v14;
    v16.Header = (_NDIS_OBJECT_HEADER)786842;
    v16.PauseReason = 1;
    ndisMakeWatchdog(&v13, a1, 17, FilterDriver->DefaultFilterCharacteristics.PauseHandler, 0x41EB0u, 0LL);
    v8 = ndisFInvokePause((__int64)a1, &v16);
    v9 = v13;
    if ( v8 == 259 )
      ndisWaitForEventThenDisarmWatchdog(v13, &Event);
    if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v9);
    a1->AsyncOpContext = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v10);
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E8083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)a1);
}
