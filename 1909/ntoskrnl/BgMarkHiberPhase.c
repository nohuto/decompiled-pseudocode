/*
 * XREFs of BgMarkHiberPhase @ 0x1409935C8
 * Callers:
 *     BgkResumePrepare @ 0x14059B590 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x140994060 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_14042C010 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
