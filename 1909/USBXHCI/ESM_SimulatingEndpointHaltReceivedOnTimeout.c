/*
 * XREFs of ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C00464E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ESM_SimulatingEndpointHaltReceivedOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(v1 + 80),
      2u,
      0xDu,
      0x7Au,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 154LL;
}
