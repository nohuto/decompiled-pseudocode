/*
 * XREFs of EmProviderDeregisterEntry @ 0x140813A90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x14026E4A8 (EmpProviderDeregisterEntry.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
