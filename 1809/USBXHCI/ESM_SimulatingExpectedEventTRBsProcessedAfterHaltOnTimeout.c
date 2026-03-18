/*
 * XREFs of ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C0040CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout(__int64 a1)
{
  WPP_RECORDER_SF_i(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 80LL),
    2u,
    0xDu,
    0x79u,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 150LL;
}
