/*
 * XREFs of ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C015B6B4
 * Callers:
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C015B438 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C730C (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00F405C (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecOutDraw(WIDENER *a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 89);
  if ( (*(_DWORD *)v4 & 8) == 0 )
  {
    WIDENER::vVecDrawCompute(a1, (struct LINEDATA *)v4);
    v4 = *((_QWORD *)a1 + 89);
  }
  *a2 = *(_QWORD *)(v4 + 72);
  return a2;
}
