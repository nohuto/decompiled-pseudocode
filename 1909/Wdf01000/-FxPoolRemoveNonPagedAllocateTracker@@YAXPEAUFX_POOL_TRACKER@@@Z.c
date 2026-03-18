/*
 * XREFs of ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C00502F0
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0002F90 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0004B00 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004E70 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005EA0 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007220 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009920 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C005080C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolRemoveNonPagedAllocateTracker(FX_POOL_TRACKER *Tracker)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&Tracker->Pool->NonPagedLock.m_Lock);
  Flink = Tracker->Link.Flink;
  if ( (FX_POOL_TRACKER *)Tracker->Link.Flink->Blink != Tracker
    || (Blink = Tracker->Link.Blink, (FX_POOL_TRACKER *)Blink->Flink != Tracker) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Tracker->Pool->NonPagedBytes -= Tracker->Size;
  --Tracker->Pool->NonPagedAllocations;
  KeReleaseSpinLock(&Tracker->Pool->NonPagedLock.m_Lock, v2);
}
