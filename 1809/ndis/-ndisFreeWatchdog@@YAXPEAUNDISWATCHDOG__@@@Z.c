/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001E500 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0060110 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ndisCancelIdleRequestSync @ 0x1C00747D0 (ndisCancelIdleRequestSync.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B872C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C010AEB8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00C2E8C (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisFreeWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  struct _NDIS_REFCOUNT_BLOCK *v2; // rbx
  __int64 v3; // rdx
  struct _NDIS_REFCOUNT_BLOCK **v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v1 = ndisRefCountHandleFromRefCountBlock(a1);
    v2 = v1;
    if ( v1 )
    {
      NdisWatchdogState::Disarm((NdisWatchdogState *)v1);
      v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
      KeEnterCriticalRegion();
      v5.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
      v5.m_State = Exclusive;
      v3 = *(_QWORD *)&v2[3].RefWithStack[0].Block.Dereferences[4];
      if ( *(struct _NDIS_REFCOUNT_BLOCK **)(v3 + 8) != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[4]
        || (v4 = (struct _NDIS_REFCOUNT_BLOCK **)*((_QWORD *)v2[3].RefWithStack + 7),
            *v4 != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[4]) )
      {
        __fastfail(3u);
      }
      *v4 = (struct _NDIS_REFCOUNT_BLOCK *)v3;
      *(_QWORD *)(v3 + 8) = v4;
      KLockHolder::~KLockHolder(&v5);
      ExFreePoolWithTag(v2, 0x7377444Eu);
    }
  }
}
