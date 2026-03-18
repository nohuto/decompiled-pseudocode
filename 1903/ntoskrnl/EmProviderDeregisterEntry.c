/*
 * XREFs of EmProviderDeregisterEntry @ 0x14084D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1402820A0 (EmpProviderDeregisterEntry.c)
 */

char __fastcall EmProviderDeregisterEntry(char *P)
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
