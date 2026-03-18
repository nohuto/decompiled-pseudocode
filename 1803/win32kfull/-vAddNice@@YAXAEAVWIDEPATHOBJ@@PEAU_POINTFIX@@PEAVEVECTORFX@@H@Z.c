/*
 * XREFs of ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C029D640
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C029D084 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C029D60C (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C029D6B8 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0121B88 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall vAddNice(struct WIDEPATHOBJ *this, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( ((LOBYTE(a2->x) | LOBYTE(a2->y)) & 0xF) == 0 )
  {
    if ( a4 )
    {
      LODWORD(v5) = -*(_DWORD *)a3;
      v6 = -*((_DWORD *)a3 + 1);
      v9 = __PAIR64__(v6, v5);
      a4 = 0;
    }
    else
    {
      v5 = *(_QWORD *)a3;
      v9 = *(_QWORD *)a3;
      v6 = HIDWORD(v9);
    }
    if ( (int)v5 <= 0 )
    {
      if ( (int)v5 >= 0 )
        goto LABEL_10;
      v7 = v5 + 1;
    }
    else
    {
      v7 = v5 - 1;
    }
    LODWORD(v9) = v7;
LABEL_10:
    if ( v6 <= 0 )
    {
      if ( v6 >= 0 )
      {
LABEL_15:
        a3 = (struct EVECTORFX *)&v9;
        goto LABEL_16;
      }
      v8 = v6 + 1;
    }
    else
    {
      v8 = v6 - 1;
    }
    HIDWORD(v9) = v8;
    goto LABEL_15;
  }
LABEL_16:
  WIDEPATHOBJ::vAddPoint(this, a2, a3, a4);
}
