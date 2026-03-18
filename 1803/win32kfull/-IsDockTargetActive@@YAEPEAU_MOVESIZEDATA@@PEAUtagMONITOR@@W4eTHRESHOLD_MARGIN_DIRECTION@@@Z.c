/*
 * XREFs of ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0EE4
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01C1C0C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C4330 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01C6F94 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDockTargetActive(__int64 a1, __int64 a2, int a3)
{
  bool result; // al

  if ( (*(_DWORD *)(a1 + 196) & 0x100000) == 0 )
    return *(_BYTE *)(a3 + a2 + 560) != 0;
  result = 0;
  if ( *(_BYTE *)(a3 + a2 + 536) )
    return *(_BYTE *)(a3 + a2 + 540) != 0;
  return result;
}
