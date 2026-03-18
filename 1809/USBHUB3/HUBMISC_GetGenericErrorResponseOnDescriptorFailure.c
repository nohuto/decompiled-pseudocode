/*
 * XREFs of HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C00271BC
 * Callers:
 *     HUBDSM_ReturningErrorResponseOnProductStringQuery @ 0x1C001C350 (HUBDSM_ReturningErrorResponseOnProductStringQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0011A7C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_GetGenericErrorResponseOnDescriptorFailure(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = *(_WORD *)(a1 + 1990) > 0x200u ? 0xFFFFFFF8 : 0;
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    (*(_WORD *)(a1 + 1990) > 0x200u) + 92,
    (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
    a1);
  return v1 + 4025;
}
