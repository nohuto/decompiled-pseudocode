/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14063866C
 * Callers:
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmpDoFlushNextHive @ 0x140638450 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x14063DDF0 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     CmpReferenceHive @ 0x1406619EC (CmpReferenceHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406E7BA8 (CmWorkerEngineQueueWorkItem.c)
 */

char __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v3; // rsi
  char v4; // al

  v1 = (volatile signed __int64 *)(a1 + 1672);
  v3 = a1 + 2952;
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 19;
  if ( **(_QWORD **)(a1 + 2928) == 2LL && !*(_QWORD *)(a1 + 2944) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2944), v3, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 21;
      *(_DWORD *)(v3 + 16) = 1;
      *(_QWORD *)(v3 + 24) = CmpLateUnloadHiveWorker;
      *(_QWORD *)(v3 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem(v3);
    }
  }
  v4 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
