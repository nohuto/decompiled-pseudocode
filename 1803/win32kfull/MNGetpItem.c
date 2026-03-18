/*
 * XREFs of MNGetpItem @ 0x1C01E52D8
 * Callers:
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02057B0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
