/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1400D37B0
 * Callers:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400C6160 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2C80 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
