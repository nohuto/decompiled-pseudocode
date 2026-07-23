/*
 * XREFs of FlushLookUpTableBucket @ 0x140127C48
 * Callers:
 *     LookUpTableFlushComplete @ 0x1406B0238 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1406B0498 (LookUpTableFlushPartial.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     FlattenEventEntryTree @ 0x140127DA8 (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FlushEventEntryList @ 0x1406B0514 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int64 *v4; // rbx
  KIRQL v5; // bp
  _RTL_BALANCED_NODE *v6; // rax
  _RTL_BALANCED_NODE *v7; // rsi
  const EVENT_DESCRIPTOR *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // r14d
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v4 = (unsigned __int64 *)(a1 + 272);
  v5 = 0;
  v6 = KeAbPreAcquire(a1 + 272, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v8 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v9 = FlattenEventEntryTree(v8);
  *(_DWORD *)(a1 + 256) -= v9;
  v10 = v9;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v8);
  return v10;
}
