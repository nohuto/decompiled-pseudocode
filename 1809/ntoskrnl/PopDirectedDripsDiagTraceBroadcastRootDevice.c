/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x1402E7740
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastRootDevice(__int64 a1, int *a2)
{
  __int64 DeviceDiagnostic; // rax
  int v5; // eax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD *)(a1 + 776);
  if ( DeviceDiagnostic
    || (++PopDirectedDripsDiagNextBroadcastTreeId,
        (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(a1)) != 0) )
  {
    *(_DWORD *)(DeviceDiagnostic + 108) |= 0x20000u;
    v5 = *(_DWORD *)(DeviceDiagnostic + 104);
  }
  else
  {
    v5 = -1;
  }
  *a2 = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
