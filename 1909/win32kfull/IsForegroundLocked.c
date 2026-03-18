/*
 * XREFs of IsForegroundLocked @ 0x1C013441C
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C013438C (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01E41B4 (xxxActiveWindowTracking.c)
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
