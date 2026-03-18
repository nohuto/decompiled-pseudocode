/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C009F238
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CInpLockGuard::isManipulationThreadInTermination(CInpLockGuard *this)
{
  __int64 ThreadWin32Thread; // rax
  int v2; // ecx
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( ThreadWin32Thread != gptiManipulationThread )
    return 0LL;
  v2 = *(_DWORD *)(ThreadWin32Thread + 480);
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
