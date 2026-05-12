/*
 * XREFs of StorpLogStatistics @ 0x1C000C494
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C000E860 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007118 (RaidAcquireAdapterRemoveLock.c)
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E660 (StorpLogPerAdapterStatistics.c)
 *     RaidReleasePortData @ 0x1C000E7C4 (RaidReleasePortData.c)
 *     RaidGetPortData @ 0x1C000E7E4 (RaidGetPortData.c)
 */

__int64 __fastcall StorpLogStatistics(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 result; // rax
  __int64 v6; // r15
  _QWORD *v7; // r13
  _QWORD *i; // rdi
  __int64 *v9; // r12
  __int64 *v10; // rsi
  __int64 *j; // r14
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+C8h] [rbp+50h]
  __int16 v17; // [rsp+D0h] [rbp+58h]
  __int64 v18; // [rsp+D8h] [rbp+60h]

  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_QWORD *)&v13.OldIrql = 0LL;
  v16 = a1 & 0x43;
  v17 = a1 & 0xFC;
  result = RaidGetPortData(252LL, a2, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL);
  v18 = result;
  v6 = result;
  if ( result )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(result + 24), &LockHandle);
    v7 = (_QWORD *)(v6 + 8);
    for ( i = *(_QWORD **)(v6 + 8); i != v7; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v13);
      v9 = i + 4;
      v10 = (__int64 *)i[4];
      if ( v10 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v10 - 8)) >= 0 )
          {
            if ( v16 )
              StorpLogPerAdapterStatistics(v10 - 8);
            if ( v17 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10 + 6, &v12);
              for ( j = (__int64 *)v10[7]; j != v10 + 7; j = (__int64 *)*j )
                StorpLogPerUnitStatistics(j - 7, a1);
              KeReleaseInStackQueuedSpinLock(&v12);
              v4 = a1;
              v9 = i + 4;
            }
            if ( (v4 & 0x20) != 0 )
              *((_DWORD *)v10 + 1328) = 0;
            if ( (v4 & 0x40) != 0 )
              *(__int64 *)((char *)v10 + 5316) = 0LL;
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v10[24]);
          }
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        v6 = v18;
        v7 = (_QWORD *)(v18 + 8);
      }
      KeReleaseInStackQueuedSpinLock(&v13);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return RaidReleasePortData(v6);
  }
  return result;
}
