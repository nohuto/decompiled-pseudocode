/*
 * XREFs of ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C026DB24
 * Callers:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B380 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 */

void __fastcall vFindAndReplaceRFONT(struct PDEVOBJ *this, struct PDEVOBJ *a2, struct PDEVOBJ *a3)
{
  struct RFONT *i; // r9
  struct RFONT *j; // r8
  struct RFONT *k; // r8
  struct RFONT *m; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = PDEVOBJ::prfntActive(this); i; i = (struct RFONT *)*((_QWORD *)i + 82) )
  {
    if ( *((_QWORD *)i + 10) == *(_QWORD *)a2 )
      *((_QWORD *)i + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)i + 11) == *(_QWORD *)a2 )
      *((_QWORD *)i + 11) = *(_QWORD *)a3;
  }
  for ( j = PDEVOBJ::prfntInactive(this); j; j = (struct RFONT *)*((_QWORD *)j + 82) )
  {
    if ( *((_QWORD *)j + 10) == *(_QWORD *)a2 )
      *((_QWORD *)j + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)j + 11) == *(_QWORD *)a2 )
      *((_QWORD *)j + 11) = *(_QWORD *)a3;
  }
  for ( k = PDEVOBJ::prfntActive(this); k; k = (struct RFONT *)*((_QWORD *)k + 61) )
  {
    if ( *((_QWORD *)k + 10) == *(_QWORD *)a2 )
      *((_QWORD *)k + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)k + 11) == *(_QWORD *)a2 )
      *((_QWORD *)k + 11) = *(_QWORD *)a3;
  }
  for ( m = PDEVOBJ::prfntInactive(this); m; m = (struct RFONT *)*((_QWORD *)m + 61) )
  {
    if ( *((_QWORD *)m + 10) == *(_QWORD *)a2 )
      *((_QWORD *)m + 10) = *(_QWORD *)a3;
    if ( *((_QWORD *)m + 11) == *(_QWORD *)a2 )
      *((_QWORD *)m + 11) = *(_QWORD *)a3;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
