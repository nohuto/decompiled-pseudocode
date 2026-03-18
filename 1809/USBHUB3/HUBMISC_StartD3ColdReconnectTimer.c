/*
 * XREFs of HUBMISC_StartD3ColdReconnectTimer @ 0x1C002BCA8
 * Callers:
 *     HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold @ 0x1C000FBE0 (HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002AB0 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBMISC_StartD3ColdReconnectTimer(__int64 a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 1440);
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a1 + 1432),
    4u,
    4u,
    0x38u,
    (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
    a1,
    v3);
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -10000LL * *(unsigned int *)(a1 + 1440), 0LL, 0LL);
}
