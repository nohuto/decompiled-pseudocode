/*
 * XREFs of BgDisplayFade @ 0x14094F608
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x14027DD34 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140954230 (BgkDisplayCharacter.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC780 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
