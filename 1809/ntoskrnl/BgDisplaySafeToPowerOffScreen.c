/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1403275DC
 * Callers:
 *     PopShutdownHandler @ 0x14057DFE0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140328754 (BgpDisplaySafeToPowerOffScreen.c)
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
