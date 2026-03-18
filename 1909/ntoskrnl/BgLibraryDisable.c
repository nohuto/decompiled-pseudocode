/*
 * XREFs of BgLibraryDisable @ 0x140990E70
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E3A00 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14042C010 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
