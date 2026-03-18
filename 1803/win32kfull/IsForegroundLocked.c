/*
 * XREFs of IsForegroundLocked @ 0x1C006DCE8
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C006DC70 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 * Callees:
 *     <none>
 */

__int64 IsForegroundLocked()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( guSFWLockCount || gppiLockSFW )
    return 1;
  return v0;
}
