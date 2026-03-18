/*
 * XREFs of ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C029DEE0
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C029D494 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C029D810 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C01217E4 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInDraw(WIDENER *a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 8) == 0 )
  {
    WIDENER::vVecDrawCompute(a1, (struct LINEDATA *)v4);
    v4 = *((_QWORD *)a1 + 88);
  }
  *a2 = *(_QWORD *)(v4 + 72);
  return a2;
}
