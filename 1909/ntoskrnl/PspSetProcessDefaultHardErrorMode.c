/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x14067CAD0
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x14067CB84 (KeSetAutoAlignmentProcess.c)
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
