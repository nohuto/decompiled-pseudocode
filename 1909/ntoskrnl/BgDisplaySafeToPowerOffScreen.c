/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x140348998
 * Callers:
 *     PopShutdownHandler @ 0x1405ADEB0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140349B34 (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_14042C010 & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
