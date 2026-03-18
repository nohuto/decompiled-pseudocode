/*
 * XREFs of ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C015D8A0
 * Callers:
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C015B59C (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02C6F50 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02C72D8 (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00F3924 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall vAddNice(struct WIDEPATHOBJ *a1, struct _POINTFIX *a2, struct EVECTORFX *a3, int a4)
{
  unsigned __int64 *v4; // r11
  int v5; // r8d
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = (unsigned __int64 *)a3;
  if ( ((LOBYTE(a2->x) | LOBYTE(a2->y)) & 0xF) == 0 )
  {
    if ( a4 )
    {
      v5 = -*(_DWORD *)a3;
      v6 = -*((_DWORD *)v4 + 1);
      v9 = __PAIR64__(v6, v5);
      a4 = 0;
    }
    else
    {
      v9 = *(_QWORD *)a3;
      v6 = HIDWORD(v9);
      v5 = v9;
    }
    if ( v5 <= 0 )
    {
      if ( v5 >= 0 )
      {
LABEL_7:
        if ( v6 > 0 )
        {
          v8 = v6 - 1;
        }
        else
        {
          if ( v6 >= 0 )
          {
LABEL_11:
            v4 = &v9;
            goto LABEL_12;
          }
          v8 = v6 + 1;
        }
        HIDWORD(v9) = v8;
        goto LABEL_11;
      }
      v7 = v5 + 1;
    }
    else
    {
      v7 = v5 - 1;
    }
    LODWORD(v9) = v7;
    goto LABEL_7;
  }
LABEL_12:
  WIDEPATHOBJ::vAddPoint(a1, a2, (struct EVECTORFX *)v4, a4);
}
