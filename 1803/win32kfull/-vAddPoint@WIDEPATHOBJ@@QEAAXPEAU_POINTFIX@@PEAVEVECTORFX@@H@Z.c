/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0121B88
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C012149C (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C01218A0 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C029D494 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C029D640 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C029D810 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C029DA30 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C029DBA4 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  _DWORD *v5; // rcx
  FIX x; // eax
  int v7; // r11d
  int v8; // ecx

  v5 = (_DWORD *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v5 >= *((_QWORD *)this + 17) )
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, a3, a4);
  }
  else
  {
    x = a2->x;
    v7 = *(_DWORD *)a3;
    if ( a4 )
    {
      *v5 = x - v7;
      v8 = a2->y - *((_DWORD *)a3 + 1);
    }
    else
    {
      *v5 = v7 + x;
      v8 = *((_DWORD *)a3 + 1) + a2->y;
    }
    *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = v8;
    *((_QWORD *)this + 16) += 8LL;
  }
}
