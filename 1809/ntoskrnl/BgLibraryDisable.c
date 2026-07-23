/*
 * XREFs of BgLibraryDisable @ 0x140951E10
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC780 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
