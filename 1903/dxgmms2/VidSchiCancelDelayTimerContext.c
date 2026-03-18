/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C0011028
 * Callers:
 *     VidSchFlushContext @ 0x1C007B9F0 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00C97D0 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C00110A0 (VidSchiDelayReadyRoutine.c)
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
