/*
 * XREFs of ?AcquireExclusive@CVirtualDesktopLock@@UEAA?AVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180075360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall CVirtualDesktopLock::AcquireExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  *a2 = v2;
  return a2;
}
