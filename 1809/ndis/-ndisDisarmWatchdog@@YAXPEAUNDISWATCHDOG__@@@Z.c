/*
 * XREFs of ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0103558
 * Callers:
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00690CC (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00C2E8C (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisDisarmWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  struct _KEVENT *v1; // rax

  if ( a1 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v1 = (struct _KEVENT *)ndisRefCountHandleFromRefCountBlock(a1);
    NdisWatchdogState::Disarm(v1);
  }
}
