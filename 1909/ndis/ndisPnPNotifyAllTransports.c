/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C012A008
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0012790 (-ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149F0 (-ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C001C5B0 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C784 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C7A8 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisReceiveQueueingPaused @ 0x1C007E970 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C007E994 (ndisReceiveQueueingRestart.c)
 *     McTemplateK0jqxzdd @ 0x1C00A41C8 (McTemplateK0jqxzdd.c)
 *     WPP_RECORDER_SF_ZLqL @ 0x1C00A49D0 (WPP_RECORDER_SF_ZLqL.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C0119A18 (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebp
  int *v4; // r15
  struct _NDIS_OPEN_BLOCK *UnprocessedOpen; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  __int64 m_numElements; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  int v16; // edx
  int v18; // [rsp+20h] [rbp-118h]
  char v19[8]; // [rsp+38h] [rbp-100h]
  struct _KEVENT v20; // [rsp+50h] [rbp-E8h] BYREF
  char v21[160]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v3 = 0;
  v4 = *(int **)(a2 + 16);
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      16,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      v2);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisAcquireMiniportPnPEventLock(a1, &v20);
  if ( (unsigned int)(v2 - 13) > 1 || (v3 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx(a1);
      v7 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v3 = ndisPnPNotifyBinding((char)UnprocessedOpen);
      if ( v3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)&v19[4] = HIDWORD(a1);
          WPP_RECORDER_SF_ZLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v10, v11, v18, &v7->ProtocolHandle->Name.Length);
        }
        if ( (byte_1C00E8084 & 8) != 0 )
          McTemplateK0jqxzdd(
            v9,
            v8,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            v7->ProtocolHandle->Name.Buffer,
            v2,
            v3);
        if ( v2 != 1 && (v2 == 2 || !v2 && *v4 > 1) )
          break;
        v3 = 0;
      }
    }
    ndisUnprocessAllOpens(a1);
  }
  ndisReleaseMiniportPnPEventLock(a1);
  if ( !v2 && *v4 == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i].__ptr_.__value_->BindState, BindingEnabled, Reason_MiniportLowPower) )
      {
        memset(v21, 0, sizeof(v21));
        if ( (unsigned __int8)byte_1C00E677B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v21);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v12,
              0x1Cu,
              0x12u,
              (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
              *(unsigned __int16 **)&v21[8],
              *(_QWORD *)v21);
        }
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v12);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 8 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = v3;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      v2,
      *(_QWORD *)v19);
  }
  return v3;
}
