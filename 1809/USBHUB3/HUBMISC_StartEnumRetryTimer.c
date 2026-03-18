/*
 * XREFs of HUBMISC_StartEnumRetryTimer @ 0x1C002843C
 * Callers:
 *     HUBDSM_StartingTimerForEnumRetryOnRenum @ 0x1C001BA10 (HUBDSM_StartingTimerForEnumRetryOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C00118A4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall HUBMISC_StartEnumRetryTimer(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+28h] [rbp-20h]

  v5 = 500;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    3u,
    a3,
    0xEu,
    (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
    v5,
    a1);
  return ExSetTimer(*(_QWORD *)(a1 + 1544), -5000000LL, 0LL, 0LL);
}
