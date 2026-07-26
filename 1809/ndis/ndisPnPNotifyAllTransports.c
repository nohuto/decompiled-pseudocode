/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C010A900
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B8630 (ndisFNetPnPEventInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C0010698 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ndisUnprocessAllOpens @ 0x1C00107C4 (ndisUnprocessAllOpens.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00172B0 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C001A5D8 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C001A668 (ndisAcquireMiniportPnPEventLock.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C0050B34 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C0050B58 (ndisReceiveQueueingRestart.c)
 *     McTemplateK0jqxzdd @ 0x1C0068948 (McTemplateK0jqxzdd.c)
 *     WPP_SF_ZLqL @ 0x1C0068CB8 (WPP_SF_ZLqL.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00F7694 (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // r15
  unsigned int v6; // ebp
  __int64 UnprocessedOpen; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  __int64 m_numElements; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  __int64 v17; // [rsp+28h] [rbp-110h]
  struct _KEVENT v18; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v19[20]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  v6 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x10u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)a1, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisAcquireMiniportPnPEventLock((__int64)a1, &v18);
  if ( (unsigned int)(v2 - 13) > 1 || (v6 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx((__int64)a1);
      v8 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v9 = ndisPnPNotifyBinding(UnprocessedOpen, a2);
      v6 = v9;
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C00A025C >= 4u )
        {
          LODWORD(v17) = v9;
          WPP_SF_ZLqL(v11, v10, (const wchar_t *)(*(_QWORD *)(v8 + 24) + 72LL), v2, a1, v17);
        }
        if ( (byte_1C00A2084 & 8) != 0 )
          McTemplateK0jqxzdd(
            v11,
            v10,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            *(const wchar_t **)(*(_QWORD *)(v8 + 24) + 80LL),
            v2,
            v6);
        if ( v2 != 1 && (v2 == 2 || !v2 && *v4 > 1) )
          break;
        v6 = 0;
      }
    }
    ndisUnprocessAllOpens((__int64)a1);
  }
  ndisReleaseMiniportPnPEventLock((__int64)a1);
  if ( !v2 && *v4 == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i]._Myptr->BindState, BindingEnabled, Reason_MiniportLowPower)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v19);
        WPP_SF_Zq(0x12u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (const wchar_t *)v19[1], v19[0]);
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
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x13u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)a1);
  return v6;
}
