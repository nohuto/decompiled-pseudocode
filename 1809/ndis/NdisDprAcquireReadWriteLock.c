/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1C005CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisAcquireReadWriteLockX @ 0x1C005D7E0 (ndisAcquireReadWriteLockX.c)
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock);
}
