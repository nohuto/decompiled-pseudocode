/*
 * XREFs of ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C005E090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSingleThread(W32PIDLOCK *this)
{
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
}
