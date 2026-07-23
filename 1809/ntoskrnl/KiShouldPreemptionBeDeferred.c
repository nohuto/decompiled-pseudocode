/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1400D3850
 * Callers:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400C60C0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2D20 (KiDeferGroupSchedulingPreemption.c)
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
