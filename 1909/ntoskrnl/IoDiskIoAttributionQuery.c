/*
 * XREFs of IoDiskIoAttributionQuery @ 0x1400EBED0
 * Callers:
 *     IopIoRateStartRateControl @ 0x140001578 (IopIoRateStartRateControl.c)
 *     IoGetIoRateControl @ 0x1400EBFB0 (IoGetIoRateControl.c)
 *     PspQueryJobIoAttribution @ 0x14068AE20 (PspQueryJobIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopRecordIoAttribution @ 0x1400EC398 (IopRecordIoAttribution.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1400EC620 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoDiskIoAttributionQuery(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+4Ch] [rbp-14h]
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp-10h] BYREF

  v13 = 1;
  v15 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v14 = 0LL;
  LODWORD(v14) = _mm_cvtsi128_si32((__m128i)0LL) | 0x200;
  QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  IopRecordIoAttribution(a1, &v13, 3LL);
  v6 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v7 = *(_OWORD *)(a1 + 128);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *a3 = v7;
  a3[1] = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
