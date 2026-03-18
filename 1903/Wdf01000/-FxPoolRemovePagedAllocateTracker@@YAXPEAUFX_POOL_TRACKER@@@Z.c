/*
 * XREFs of ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0056A48
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0002F90 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0004B00 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004E70 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005EA0 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009920 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0056C80 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolRemovePagedAllocateTracker(FX_POOL_TRACKER *Tracker)
{
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax

  ExAcquireFastMutex(&Tracker->Pool->PagedLock.m_Lock);
  Flink = Tracker->Link.Flink;
  if ( (FX_POOL_TRACKER *)Tracker->Link.Flink->Blink != Tracker
    || (Blink = Tracker->Link.Blink, (FX_POOL_TRACKER *)Blink->Flink != Tracker) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Tracker->Pool->PagedBytes -= Tracker->Size;
  --Tracker->Pool->PagedAllocations;
  ExReleaseFastMutex(&Tracker->Pool->PagedLock.m_Lock);
}
