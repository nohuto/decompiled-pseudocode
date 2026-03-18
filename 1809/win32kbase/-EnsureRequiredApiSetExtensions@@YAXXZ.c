/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0094D0C
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void EnsureRequiredApiSetExtensions(void)
{
  if ( (int)IsPushW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeAlwaysW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( (int)IsxxxUnlockMenuStateSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( (int)IsHasHidTableSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( (int)IsLockQCursorSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
