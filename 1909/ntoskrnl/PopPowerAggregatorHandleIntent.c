/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408B24CC
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A4030 (PopDirectedDripsProcessWork.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408B28D4 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x1406F52C0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopPowerAggregatorHandleDirectedDripsIntent @ 0x1408B24A0 (PopPowerAggregatorHandleDirectedDripsIntent.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1408B2620 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorHandleModernStandbySuspendResumeIntent @ 0x1408B2650 (PopPowerAggregatorHandleModernStandbySuspendResumeIntent.c)
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
  v14 = *(__int128 *)((char *)&xmmword_14043912C + 8);
  if ( (unsigned int)(v3 - 1) <= 5
    && a2 <= 2
    && (v7 = (__int64 (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD, int))PopPowerAggregatorIntentHandlers[v3]) != 0LL )
  {
    v8 = v7(&v14, &v13, (unsigned int)v3, a2, a3);
    if ( v8 >= 0 )
    {
      v9 = dword_140439128 | 2;
      dword_140439128 = v9;
      *(__int128 *)((char *)&xmmword_14043912C + 8) = v13;
      if ( (v9 & 1) == 0 )
      {
        dword_140439128 = v9 | 1;
        ExQueueWorkItem(&stru_1404394D8, DelayedWorkQueue);
      }
      v8 = 259;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v10 = (char *)&unk_140439148 + 56 * (unsigned int)dword_140439144;
  dword_140439144 = ((_BYTE)dword_140439144 + 1) & 0xF;
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
