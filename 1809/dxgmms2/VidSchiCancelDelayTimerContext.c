/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C0011508
 * Callers:
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00C675C (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C0011580 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl

  if ( !KeCancelTimer((PKTIMER)(a2 + 504)) )
    KeFlushQueuedDpcs();
  v3 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, (PVOID)a2, 0LL, 0LL);
  KeLowerIrql(v3);
}
