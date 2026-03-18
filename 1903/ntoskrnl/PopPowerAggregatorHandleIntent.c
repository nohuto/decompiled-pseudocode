/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408B2C6C
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408B3074 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x1406F3530 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopPowerAggregatorHandleDirectedDripsIntent @ 0x1408B2C40 (PopPowerAggregatorHandleDirectedDripsIntent.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1408B2DC0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorHandleModernStandbySuspendResumeIntent @ 0x1408B2DF0 (PopPowerAggregatorHandleModernStandbySuspendResumeIntent.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(int a1, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  int v6; // ebp
  __int64 (__fastcall *v7)(__int128 *, __int128 *, _QWORD, _QWORD, int); // rax
  int v8; // ebx
  int v9; // eax
  char *v10; // rdx
  __int128 v11; // xmm1
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF

  v3 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorContext;
  v13 = 4uLL;
  v14 = *(__int128 *)((char *)&xmmword_1404391AC + 8);
  if ( (unsigned int)(v3 - 1) <= 5
    && a2 <= 2
    && (v7 = (__int64 (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD, int))PopPowerAggregatorIntentHandlers[v3]) != 0LL )
  {
    v8 = v7(&v14, &v13, (unsigned int)v3, a2, a3);
    if ( v8 >= 0 )
    {
      v9 = dword_1404391A8 | 2;
      dword_1404391A8 = v9;
      *(__int128 *)((char *)&xmmword_1404391AC + 8) = v13;
      if ( (v9 & 1) == 0 )
      {
        dword_1404391A8 = v9 | 1;
        ExQueueWorkItem(&stru_140439558, DelayedWorkQueue);
      }
      v8 = 259;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v10 = (char *)&unk_1404391C8 + 56 * (unsigned int)dword_1404391C4;
  dword_1404391C4 = ((_BYTE)dword_1404391C4 + 1) & 0xF;
  *(_DWORD *)v10 = v6;
  *((_DWORD *)v10 + 1) = v3;
  *((_DWORD *)v10 + 2) = a2;
  *(_OWORD *)(v10 + 12) = v14;
  v11 = v13;
  *((_DWORD *)v10 + 11) = v8;
  *(_OWORD *)(v10 + 28) = v11;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return (unsigned int)v8;
}
