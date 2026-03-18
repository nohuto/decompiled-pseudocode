/*
 * XREFs of MNGetpItem @ 0x1C0222D2C
 * Callers:
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
