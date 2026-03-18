/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02B1110
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01449BC (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0144FEC (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0145110 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0145280 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0155A98 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C02B0A60 (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C02B0C90 (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C02B12E4 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C02B13BC (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02B1550 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  BOOL v3; // r14d
  int v4; // r11d
  int v5; // r8d
  int v6; // r8d
  WIDEPATHOBJ *v7; // rcx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  WIDEPATHOBJ *v11; // rcx
  int v12; // r8d
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_DWORD *)this + 322) || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
  }
  else
  {
    v3 = bTurnLeftRandom(
           (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
           (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
    if ( v4 == 1 )
    {
      WIDENER::vecInPerp(this, &v13);
      WIDENER::vecOutPerp(this, &v14);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13, v5);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v13,
        0);
      if ( (_DWORD)v13 != (_DWORD)v14 || HIDWORD(v13) != HIDWORD(v14) )
      {
        v7 = (WIDENER *)((char *)this + 984);
        if ( !v3 )
          v7 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v7, (struct _POINTFIX *)((char *)this + 692), v6);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v14,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14, v8);
      }
    }
    else
    {
      WIDENER::vecInPerp(this, &v13);
      WIDENER::vecOutPerp(this, &v14);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13, v9);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v13,
        0);
      if ( (_DWORD)v13 != (_DWORD)v14 || HIDWORD(v13) != HIDWORD(v14) )
      {
        if ( bComputeIntersect(
               (struct EVECTORFX *)&v13,
               (struct EVECTORFX *)(*((_QWORD *)this + 88) + 40LL),
               (struct EVECTORFX *)&v14,
               (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL),
               (struct EVECTORFX *)&v15)
          && WIDENER::bMiterInLimit((__int64)this, v15) )
        {
          if ( v3 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 1136),
              (struct _POINTFIX *)((char *)this + 692),
              (struct EVECTORFX *)&v15,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15, v10);
        }
        v11 = (WIDENER *)((char *)this + 984);
        if ( !v3 )
          v11 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v11, (struct _POINTFIX *)((char *)this + 692), v10);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v14, v12);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v14,
          0);
      }
    }
  }
}
