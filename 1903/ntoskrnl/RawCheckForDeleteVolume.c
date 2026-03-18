/*
 * XREFs of RawCheckForDeleteVolume @ 0x14030A9B8
 * Callers:
 *     RawScanDeletedList @ 0x140663388 (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     RawDeleteVcb @ 0x140682554 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x140682604 (RawCleanupVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // si
  KIRQL v3; // al
  int v4; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    v4 = *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7);
    KeReleaseQueuedSpinLock(9uLL, v3);
    if ( !v4 )
    {
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts
        || (Blink = AdvancedHeader[1].FilterContexts.Blink, Blink->Flink != &AdvancedHeader[1].FilterContexts) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
