/*
 * XREFs of ?RecordCompositionMode@CFlipExSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@W4BufferCompositionMode@@@Z @ 0x18001D5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExSwapchainStatistics::RecordCompositionMode(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == *(_DWORD *)(a1 + 8) )
    return 0;
  *(_DWORD *)(a1 + 8) = a3;
  return 1;
}
