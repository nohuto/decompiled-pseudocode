/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x1402D3B70
 * Callers:
 *     KdPowerTransitionEx @ 0x14028C200 (KdPowerTransitionEx.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402D49D0 (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCancelExitLatencyTrace(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 23808);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      *(_DWORD *)(v1 + 12) = PpmExitLatencySamplingPercentage != 0;
      result = *(_QWORD *)(a1 + 23808);
      *(_BYTE *)(result + 3) = 0;
      *(_QWORD *)(result + 56) = 0LL;
    }
  }
  return result;
}
