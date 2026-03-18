/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01197A4
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0119040 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C01198E8 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0119914 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C0119970 (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C01199DC (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E00 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E44 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0119E8C (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C011A604 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C77BC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v3; // r14d
  int v4; // r11d
  int v5; // r8d
  int v6; // r8d
  WIDEPATHOBJ *v7; // rcx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  WIDEPATHOBJ *v11; // rcx
  int v12; // r8d
  int v13; // [rsp+60h] [rbp+30h] BYREF
  int v14; // [rsp+64h] [rbp+34h]
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+74h] [rbp+44h]
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

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
      WIDENER::vecOutPerp(this, &v15);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13, v9);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v13,
        0);
      if ( v13 != v15 || v14 != v16 )
      {
        v11 = (WIDENER *)((char *)this + 984);
        if ( !v3 )
          v11 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v11, (struct _POINTFIX *)((char *)this + 692), v10);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v15,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15, v12);
      }
    }
    else
    {
      WIDENER::vecInPerp(this, &v13);
      WIDENER::vecOutPerp(this, &v15);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v13, v5);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v13,
        0);
      if ( v13 != v15 || v14 != v16 )
      {
        if ( (unsigned int)bComputeIntersect(
                             (struct EVECTORFX *)&v13,
                             (struct EVECTORFX *)(*((_QWORD *)this + 88) + 40LL),
                             (struct EVECTORFX *)&v15,
                             (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL),
                             (struct EVECTORFX *)&v17)
          && (unsigned int)WIDENER::bMiterInLimit(this, v17) )
        {
          if ( v3 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 1136),
              (struct _POINTFIX *)((char *)this + 692),
              (struct EVECTORFX *)&v17,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)&v17, v6);
        }
        v7 = (WIDENER *)((char *)this + 984);
        if ( !v3 )
          v7 = (WIDENER *)((char *)this + 1136);
        WIDEPATHOBJ::vAddPoint(v7, (struct _POINTFIX *)((char *)this + 692), v6);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v15, v8);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1136),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v15,
          0);
      }
    }
  }
}
