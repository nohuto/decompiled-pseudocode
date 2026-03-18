/*
 * XREFs of ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0122044
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0120BC8 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C012149C (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C029D810 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bTurnLeftRandom(struct EVECTORFX *a1, struct EVECTORFX *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *((int *)a1 + 1);
  v3 = *(int *)a1;
  v4 = *((int *)a2 + 1);
  if ( (int)(v2 ^ v4 ^ v3 ^ *(_DWORD *)a2) >= 0 )
    return v4 * v3 < v2 * *(int *)a2;
  else
    return ((int)v4 < 0) ^ ((int)v3 < 0);
}
