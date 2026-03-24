/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1403276DC
 * Callers:
 *     PopShutdownHandler @ 0x14057DFE0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140328854 (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
