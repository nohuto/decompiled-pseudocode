/*
 * XREFs of StorpLogStatistics @ 0x1C0002A08
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0002550 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidGetPortData @ 0x1C0002678 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C00026F4 (RaidReleasePortData.c)
 *     StorpLogPerAdapterStatistics @ 0x1C00028A4 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 */

void __fastcall StorpLogStatistics(unsigned __int16 a1)
{
  __int16 v2; // r12
  char *PortData; // rax
  char *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *i; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 *j; // r14
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  __int16 v13; // [rsp+B0h] [rbp+8h]
  __int16 v14; // [rsp+B8h] [rbp+10h]
  char *v15; // [rsp+C0h] [rbp+18h]

  v2 = a1 & 0x43;
  v13 = a1 & 0xFC;
  v14 = v2;
  PortData = RaidGetPortData();
  v15 = PortData;
  v4 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)PortData + 3, &LockHandle);
    v5 = v4 + 8;
    for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i != v5; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v11);
      v7 = i + 4;
      v8 = (__int64 *)i[4];
      if ( v8 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock(v8 - 8) >= 0 )
          {
            if ( v2 )
              StorpLogPerAdapterStatistics((__int64)(v8 - 8));
            if ( v13 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8 + 8, &v10);
              for ( j = (__int64 *)v8[9]; j != v8 + 9; j = (__int64 *)*j )
                StorpLogPerUnitStatistics(j - 7, a1);
              KeReleaseInStackQueuedSpinLock(&v10);
              v2 = v14;
              v7 = i + 4;
            }
            if ( (a1 & 0x20) != 0 )
              *((_DWORD *)v8 + 1362) = 0;
            if ( (a1 & 0x40) != 0 )
              *(__int64 *)((char *)v8 + 5452) = 0LL;
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[26]);
          }
          v8 = (__int64 *)*v8;
        }
        while ( v8 != v7 );
        v4 = v15;
        v5 = v15 + 8;
      }
      KeReleaseInStackQueuedSpinLock(&v11);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}
