/*
 * XREFs of BgDisplayFade @ 0x14098E608
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x1402925D4 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x1409932C0 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400ED070 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14042C030 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
