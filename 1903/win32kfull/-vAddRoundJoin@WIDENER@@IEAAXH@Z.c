/*
 * XREFs of ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C77BC
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01197A4 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C01198E8 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0119914 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E00 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E44 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0119E8C (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C011A604 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C015A704 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C015A740 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02C7400 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 */

void __fastcall WIDENER::vAddRoundJoin(WIDENER *this)
{
  int v2; // r15d
  int v3; // r11d
  __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  int v7; // ebx
  int v8; // r13d
  struct _POINTFIX *v9; // rdx
  WIDEPATHOBJ *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  BOOL v12; // [rsp+90h] [rbp+40h]
  __int64 v13; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v12 = bTurnLeftRandom(
          (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
          (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || v3 )
  {
    v4 = WIDENER::vecInDraw(this, &v14);
  }
  else
  {
    v2 = 1;
    v4 = WIDENER::vecInPerp(this, &v13);
  }
  v5 = *v4;
  v13 = *v4;
  if ( v2 )
    v6 = WIDENER::vecOutPerp(this, &v14);
  else
    v6 = WIDENER::vecOutDraw(this, &v11);
  v14 = *v6;
  v7 = v14;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1136),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v13,
    0);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13);
  if ( (_DWORD)v5 != v7 || HIDWORD(v13) != HIDWORD(v14) )
  {
    v8 = WIDEPENOBJ::cptAddRound(
           (WIDENER *)((char *)this + 824),
           this,
           *((struct LINEDATA **)this + 88),
           *((struct LINEDATA **)this + 89),
           v12,
           v2,
           v2);
    v9 = (struct _POINTFIX *)((char *)this + 692);
    if ( v12 )
    {
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 984), v9);
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
        if ( v8 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            0,
            v2,
            v2);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13);
        v10 = (WIDENER *)((char *)this + 984);
LABEL_19:
        WIDEPATHOBJ::vAddPoint(v10, (struct _POINTFIX *)((char *)this + 692));
      }
    }
    else
    {
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1136), v9);
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v14,
          0);
        if ( v8 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            1,
            v2,
            v2);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v13,
          0);
        v10 = (WIDENER *)((char *)this + 1136);
        goto LABEL_19;
      }
    }
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v14,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14);
  }
}
