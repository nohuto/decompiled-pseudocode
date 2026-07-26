/*
 * XREFs of ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C006BF20
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C00F81A0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState(void)
{
  KIRQL v0; // al
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  for ( i = 0LL; (unsigned int)i < ndisCmSessionCount; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)ndisCmSession + 3 * i + 1) )
    {
      KeReleaseSpinLock(&ndisCmSessionLock, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    }
  }
  KeReleaseSpinLock(&ndisCmSessionLock, v0);
}
