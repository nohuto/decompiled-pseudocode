/*
 * XREFs of PdcTaskClientRequest @ 0x14089B948
 * Callers:
 *     PopDirectedDripsEngagePs4 @ 0x140868DF0 (PopDirectedDripsEngagePs4.c)
 *     PopDirectedDripsTriggerTransition @ 0x1408699E0 (PopDirectedDripsTriggerTransition.c)
 *     PopDisengageDirectedDrips @ 0x140869AD4 (PopDisengageDirectedDrips.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1408762C0 (PopSleepStudyTaskClientTimerWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PdcPortSendMessageSynchronously @ 0x1402FE46C (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  signed __int64 *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  _BYTE v14[40]; // [rsp+20h] [rbp-328h] BYREF
  int v15; // [rsp+48h] [rbp-300h]
  bool v16; // [rsp+58h] [rbp-2F0h]

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
    v15 = 7;
    v16 = a2 != 0;
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
  v5[1] = 0LL;
  _m_prefetchw(v5);
  v10 = *v5;
  v11 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
