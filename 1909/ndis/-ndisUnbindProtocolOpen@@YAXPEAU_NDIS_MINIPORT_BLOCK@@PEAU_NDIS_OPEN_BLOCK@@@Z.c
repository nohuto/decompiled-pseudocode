/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011DBAC (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C784 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027808 (ndisNotifyWmiBindUnbind.c)
 *     ndisDereferenceProtocol @ 0x1C00280E0 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0028410 (ndisReferenceProtocol.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002F4CC (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E440 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisInvokeUnbindAdapter @ 0x1C0116FC4 (ndisInvokeUnbindAdapter.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0123E24 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  bool v3; // r15
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  KIRQL v6; // al
  _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // r13
  struct _KEVENT *p_Object; // rbx
  __int64 v10; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  void *ProtocolBindingContext; // rdx
  struct _NDIS_MINIPORT_BLOCK *v13; // rcx
  int v14; // edx
  __int64 v16; // rdx
  int v17; // r9d
  char v18; // [rsp+28h] [rbp-D8h]
  struct _KEVENT Object; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[88]; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v24; // [rsp+E0h] [rbp-20h] BYREF
  int v25; // [rsp+160h] [rbp+60h] BYREF
  BOOL v26; // [rsp+168h] [rbp+68h]
  __int64 v27; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v28; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v25 = 0;
  v3 = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      14,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      v18);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v26 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u);
  KeWaitForSingleObject(&ProtocolHandle->Mutex, Executive, 0, 0, 0LL);
  ++ProtocolHandle->MutexOwnerCount;
  ProtocolHandle->MutexOwnerThread = KeGetCurrentThread();
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != v4; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&v4->SpinLock);
  v4->OpenFlags |= 0x10000u;
  if ( (v4->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&Object, NotificationEvent, 0);
    v4->WaitNetPnpEvent = &Object;
    p_Object = &Object;
  }
  else
  {
    p_Object = v4->WaitNetPnpEvent;
  }
  if ( v4->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (v4->OpenFlags & 0x40000000) != 0;
  v4->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&v4->SpinLock, v8);
  if ( p_Object )
    KeWaitForSingleObject(p_Object, Executive, 0, 0, 0LL);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    KeInitializeEvent(&v20, NotificationEvent, 0);
    v4->AfNotifyCompleteEvent = &v20;
    if ( v4->PendingAfNotifications )
      KeWaitForSingleObject(&v20, Executive, 0, 0, 0LL);
    v4->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v24, NotificationEvent, 0);
  a1->ProcessingOpen = v4;
  v10 = -1LL;
  v27 = -1LL;
  if ( v3 )
  {
    v23 = 0;
    v4->UnsolicitedUnbindEvent = &v24;
    v4->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v25, v4);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = v4->ProtocolBindingContext;
    v4->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v25, ProtocolBindingContext, v22);
  }
  else
  {
    Watchdog = ndisMakeWatchdog(&v28, v4, 4, ProtocolHandle->UnbindAdapterHandlerEx, 0x41EB0u, 0LL);
    if ( &v27 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v27,
        *Watchdog);
      v10 = v27;
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
    }
    if ( v28 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v28);
    v25 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)v4, (__int64)v22);
  }
  if ( v25 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct NDISWATCHDOG__ *)v10, &v24);
    v25 = v23;
  }
  a1->ProcessingOpen = 0LL;
  if ( v10 != -1 )
    ndisFreeWatchdog((struct NDISWATCHDOG__ *)v10);
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v14 = 3;
LABEL_37:
      ndisBindUnbindPeriodicReceives(v13, v14);
      goto LABEL_38;
    }
    if ( ProtocolHandle->IsIPv6 || ProtocolHandle->IsNdisTest6 )
    {
      v14 = 4;
      goto LABEL_37;
    }
  }
LABEL_38:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( ProtocolHandle->MutexOwnerCount-- == 1 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v26 )
    ndisDereferenceProtocol(ProtocolHandle, v16, 6u, v17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      6,
      15,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids);
  }
}
