/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01449BC
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0144830 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0144AF4 (-vNextEvent@LINER@@QEAAXXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0144D64 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0144DB4 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C0144EEC (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C014501C (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C0145084 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C014514C (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C01451F4 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C02B0F88 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02B0FC4 (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02B1050 (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02B1110 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02B1864 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall WIDENER::bWiden(WIDENER *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  struct WIDEPATHOBJ *v9; // r10
  float v10; // xmm1_4
  int v11; // ecx
  __int64 v12; // r8
  int v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // eax
  char *v16; // rdx
  WIDENER *v17; // rcx
  _DWORD *StyleLength; // rax
  __int64 v19; // r8
  int v20; // xmm0_4
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  WIDEPATHOBJ *v25; // rbx
  WIDEPATHOBJ *v26; // rcx
  char v27; // r10
  char v28[4]; // [rsp+20h] [rbp-28h] BYREF
  char v29; // [rsp+24h] [rbp-24h] BYREF
  char v30; // [rsp+50h] [rbp+8h] BYREF
  char v31; // [rsp+58h] [rbp+10h] BYREF
  char v32; // [rsp+60h] [rbp+18h] BYREF
  char v33; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = *((_DWORD *)this + 10);
        if ( (v2 & 2) == 0 )
        {
          LINER::vNextEvent(this);
          goto LABEL_3;
        }
        if ( (v2 & 4) != 0 )
        {
          if ( *((_DWORD *)this + 172) == 5 )
          {
            while ( 1 )
            {
              v10 = *((float *)this + 187);
              if ( v10 < *((float *)this + 186) )
              {
                *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
                *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
                *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                              *(struct _POINTFIX *)((char *)this + 760),
                                                              *((struct LINEDATA **)this + 89),
                                                              (WIDENER *)((char *)this + 752),
                                                              (WIDENER *)((char *)this + 756));
                *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v31);
                *((_DWORD *)this + 172) = 6;
                goto LABEL_3;
              }
              *((float *)this + 187) = v10 - *((float *)this + 186);
              LINER::vNextEvent(this);
              v11 = *((_DWORD *)this + 172);
              if ( (unsigned int)(v11 - 3) > 1 )
                break;
              v12 = *((_QWORD *)this + 89);
              *((_DWORD *)this + 188) = FP_0_0;
              v13 = *(_DWORD *)STYLER::efWorldLength(this, &v30, *(_QWORD *)(v12 + 40));
              *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
              *((_DWORD *)this + 189) = v13;
              *((_DWORD *)this + 186) = v13;
            }
            if ( v11 == 1 )
              LINER::vNextEvent(this);
            *((_DWORD *)this + 10) &= ~4u;
            *((_DWORD *)this + 172) = 8;
            goto LABEL_3;
          }
          v14 = *((float *)this + 187);
          if ( v14 <= *((float *)this + 186) )
          {
            *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
            *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
            *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                          *(struct _POINTFIX *)((char *)this + 760),
                                                          *((struct LINEDATA **)this + 89),
                                                          (WIDENER *)((char *)this + 752),
                                                          (WIDENER *)((char *)this + 756));
            *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
            *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v32);
            *((_DWORD *)this + 172) = 5;
            goto LABEL_3;
          }
          *((float *)this + 187) = v14 - *((float *)this + 186);
        }
        LINER::vNextEvent(this);
        v15 = *((_DWORD *)this + 172);
        if ( v15 )
        {
          if ( (unsigned int)(v15 - 3) > 1 )
          {
            *((_DWORD *)this + 10) &= ~4u;
            goto LABEL_3;
          }
          v16 = &v33;
          v17 = this;
        }
        else
        {
          *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          StyleLength = (_DWORD *)STYLER::efNextStyleLength(this, v28);
          v16 = &v29;
          *((_DWORD *)this + 187) = *StyleLength;
        }
        v19 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v20 = *(_DWORD *)STYLER::efWorldLength(v17, v16, *(_QWORD *)(v19 + 40));
        v21 = *(_QWORD *)((char *)this + 692);
        *((_DWORD *)this + 10) |= 4u;
        *((_QWORD *)this + 95) = v21;
        *((_DWORD *)this + 186) = v20;
        *((_DWORD *)this + 189) = v20;
LABEL_3:
        v3 = *((_DWORD *)this + 172);
        if ( v3 > 5 )
          break;
        if ( v3 == 5 )
          goto LABEL_15;
        if ( v3 )
        {
          v8 = v3 - 1;
          if ( v8 )
          {
            v22 = v8 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 == 1 )
                {
                  v24 = 1;
                  goto LABEL_43;
                }
              }
              else
              {
                v24 = 0;
LABEL_43:
                WIDENER::vAddJoin(this, v24);
              }
            }
            else
            {
              WIDENER::vAddJoin(this, 0);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
              v25 = (WIDENER *)((char *)this + 1136);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
              v26 = (WIDENER *)((char *)this + 1136);
              if ( (v27 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v26) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), (WIDENER *)((char *)this + 984));
                goto LABEL_47;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v26) )
                return 0LL;
              WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), (WIDENER *)((char *)this + 984));
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
              WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 1136));
              WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1136));
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
            }
          }
          else
          {
LABEL_15:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
            if ( !(unsigned int)WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), v9);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
            *((_DWORD *)this + 10) |= 8u;
          }
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 984))
            || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
          {
            return 0LL;
          }
          *((_DWORD *)this + 10) &= ~8u;
          *((_QWORD *)this + 160) = *(_QWORD *)(*((_QWORD *)this + 143) + 40LL);
        }
      }
      v4 = v3 - 6;
      if ( !v4 )
        break;
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return WIDENER::bValid(this);
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
            return 0LL;
          WIDENER::vAddStartCap(this);
          WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
          WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1136));
        }
      }
      else if ( !*((_DWORD *)this + 323) )
      {
        v25 = (WIDENER *)((char *)this + 1136);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
LABEL_47:
        WIDEPATHOBJ::vEndFigure(v25);
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
      }
    }
    if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 984))
      || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
    {
      return 0LL;
    }
    WIDENER::vAddStartCap(this);
  }
}
