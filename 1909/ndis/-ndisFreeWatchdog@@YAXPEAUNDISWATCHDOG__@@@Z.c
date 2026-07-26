/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002F4CC (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisDereferenceFilter @ 0x1C008E22C (ndisDereferenceFilter.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00960F8 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ndisCancelIdleRequestSync @ 0x1C00B81B0 (ndisCancelIdleRequestSync.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01302F0 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00FCD70 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisFreeWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax
  struct NDISWATCHDOG__ *v2; // rbx
  struct NDISWATCHDOG__ *v3; // rdx
  struct NDISWATCHDOG__ **v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = WatchdogFromHandle(a1);
    v2 = v1;
    if ( v1 )
    {
      NdisWatchdogState::Disarm((NdisWatchdogState *)v1);
      v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
      KeEnterCriticalRegion();
      v5.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
      v5.m_State = Exclusive;
      v3 = (struct NDISWATCHDOG__ *)*((_QWORD *)v2 + 34);
      if ( *((struct NDISWATCHDOG__ **)v3 + 1) != v2 + 68
        || (v4 = (struct NDISWATCHDOG__ **)*((_QWORD *)v2 + 35), *v4 != v2 + 68) )
      {
        __fastfail(3u);
      }
      *v4 = v3;
      *((_QWORD *)v3 + 1) = v4;
      KLockHolder::~KLockHolder(&v5);
      ExFreePoolWithTag(v2, 0x7377444Eu);
    }
  }
}
