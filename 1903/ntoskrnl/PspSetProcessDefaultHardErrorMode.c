/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1406773C0
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x140677474 (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v6; // rdi
  unsigned int v7; // esi

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 736);
  ExAcquirePushLockExclusiveEx(a1 + 736, 0LL);
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    *(_DWORD *)(a1 + 1184) = a3;
    v7 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1064) )
      v7 = 1;
    KeSetAutoAlignmentProcess(a1, v7);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}
