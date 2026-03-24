/*
 * XREFs of BgDisplayFade @ 0x14094E608
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x14027DB44 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140953230 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC840 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
