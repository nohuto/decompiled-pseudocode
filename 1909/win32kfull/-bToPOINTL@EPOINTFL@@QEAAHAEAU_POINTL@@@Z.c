/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C009596C
 * Callers:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0095584 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 * Callees:
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // r8d

  v5 = 0;
  if ( (unsigned int)bFToL(this, a2, 6LL) && (unsigned int)bFToL(v3, &a2->y, v4) )
    return (unsigned int)(v6 - 5);
  return v5;
}
