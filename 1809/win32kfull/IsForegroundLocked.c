/*
 * XREFs of IsForegroundLocked @ 0x1C00D7F44
 * Callers:
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8 (-CheckCanonicalForegroundAccess@@YA_NXZ.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01CF6C8 (xxxActiveWindowTracking.c)
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
