/*
 * XREFs of ObpFreeWorkItemBlock @ 0x140862E20
 * Callers:
 *     ObpPushStackInfoQueue @ 0x140863560 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpFreeWorkItemBlock(struct _SLIST_ENTRY *P)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 && LOWORD(ObpWorkItemFreeList.Alignment) < 0x1F4u )
    RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, P);
  else
    ExFreePoolWithTag(P, 0x7452624Fu);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
