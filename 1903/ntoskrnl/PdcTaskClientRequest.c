/*
 * XREFs of PdcTaskClientRequest @ 0x1408D9274
 * Callers:
 *     PopDirectedDripsEngagePs4 @ 0x1408A40CC (PopDirectedDripsEngagePs4.c)
 *     PopDisengageDirectedDrips @ 0x1408A4E84 (PopDisengageDirectedDrips.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408AD254 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1408B1DF0 (PopSleepStudyTaskClientTimerWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14009E3B0 (ExfReleasePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x14031C468 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D995C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // ebx
  signed __int64 *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  _DWORD v14[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( !a1 || *(_DWORD *)a1 != 1667458128 )
    return (unsigned int)-1073741585;
  v5 = (signed __int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( a2 || *(_DWORD *)(a1 + 48) )
  {
    v6 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v6 )
        goto LABEL_12;
    }
    else if ( v6 != 1 )
    {
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(a1 + 40);
    v14[10] = 7;
    LOBYTE(v14[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v7, (__int64)v14);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_12:
    v8 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      v9 = v8 + 1;
    else
      v9 = v8 - 1;
    *(_DWORD *)(a1 + 48) = v9;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_16:
  *(_QWORD *)(a1 + 16) = 0LL;
  _m_prefetchw(v5);
  v10 = *v5;
  v11 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
    ExfReleasePushLock((_QWORD *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
