/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C01144A0
 * Callers:
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C01140D4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  char v4; // r8
  unsigned int v5; // ebx
  int v6; // r8d

  v5 = 0;
  if ( (unsigned int)bFToL(*(float *)this, (int *)a2, 6) && (unsigned int)bFToL(*((float *)this + 1), &a2->y, v4) )
    return (unsigned int)(v6 - 5);
  return v5;
}
