/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1400154E0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400149F0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400152E0 (KiDeferGroupSchedulingPreemption.c)
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
