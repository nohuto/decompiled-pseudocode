/*
 * XREFs of ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0121910
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C012149C (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C029D494 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C029D810 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0121644 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInPerp(WIDENER *a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 4) == 0 )
  {
    WIDENER::vVecPerpCompute(a1, (struct LINEDATA *)v4);
    v4 = *((_QWORD *)a1 + 88);
  }
  *a2 = *(_QWORD *)(v4 + 64);
  return a2;
}
