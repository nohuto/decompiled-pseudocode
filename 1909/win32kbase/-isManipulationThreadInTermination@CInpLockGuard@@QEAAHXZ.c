/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C00A3E64
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
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
