/*
 * XREFs of ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C01039C4
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C00747D0 (ndisCancelIdleRequestSync.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C010AEB8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00C2E8C (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C01034B0 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisWaitForEventThenDisarmWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1, struct _KEVENT *a2)
{
  struct _KEVENT *v3; // rbx

  if ( a1 == (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
  }
  else
  {
    v3 = (struct _KEVENT *)ndisRefCountHandleFromRefCountBlock(a1);
    NdisWatchdogState::Disarm(v3);
    NdisWatchdogState::WaitSynchronously((NdisWatchdogState *)v3, a2);
  }
}
