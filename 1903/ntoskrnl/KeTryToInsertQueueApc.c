/*
 * XREFs of KeTryToInsertQueueApc @ 0x1402AB500
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x1400AF130 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AF2B8 (KiInsertQueueApc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     KiTryToAcquireThreadLock @ 0x1400F959C (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v7; // bl
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v10; // bp
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !KeIsThreadRunning(v3) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = EffectiveIrql;
  if ( !KiTryToAcquireThreadLock(v3, &v12) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 82) )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v10);
  }
  KiReleaseThreadLockSafe(v3);
  return v7;
}
