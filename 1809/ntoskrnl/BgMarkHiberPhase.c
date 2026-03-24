/*
 * XREFs of BgMarkHiberPhase @ 0x140953508
 * Callers:
 *     BgkResumePrepare @ 0x14056B58C (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x140953F40 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
