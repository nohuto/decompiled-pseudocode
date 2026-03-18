/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C0029470
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C001DE30 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0012C28 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_GetGenericErrorResponseOnDescriptorFailure(__int64 a1)
{
  unsigned int v1; // ebx

  if ( *(_WORD *)(a1 + 1990) > 0x200u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x5Eu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        a1);
    return 4017;
  }
  else
  {
    v1 = 4025;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x5Du,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        a1);
  }
  return v1;
}
