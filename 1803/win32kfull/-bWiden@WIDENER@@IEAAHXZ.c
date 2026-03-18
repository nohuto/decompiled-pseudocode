/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012114C (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C012149C (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C012185C (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C0121A40 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0121AF0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0121B40 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0121E74 (-vNextEvent@LINER@@QEAAXXZ.c)
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C029D310 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C029D34C (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C029D3D4 (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C029D494 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C029DA30 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C029DC98 (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C029DD00 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall WIDENER::bWiden(WIDENER *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  WIDEPATHOBJ *v8; // rbx
  WIDEPATHOBJ *v9; // rcx
  char v10; // r10
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  float v15; // xmm1_4
  int v16; // ecx
  __int64 v17; // r8
  int v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // eax
  char *v21; // rdx
  WIDENER *v22; // rcx
  _DWORD *StyleLength; // rax
  __int64 v24; // r8
  int v25; // xmm0_4
  __int64 v26; // rax
  struct WIDEPATHOBJ *v27; // r10
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
              v15 = *((float *)this + 187);
              if ( v15 < *((float *)this + 186) )
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
              *((float *)this + 187) = v15 - *((float *)this + 186);
              LINER::vNextEvent(this);
              v16 = *((_DWORD *)this + 172);
              if ( (unsigned int)(v16 - 3) > 1 )
                break;
              v17 = *((_QWORD *)this + 89);
              *((_DWORD *)this + 188) = FP_0_0;
              v18 = *(_DWORD *)STYLER::efWorldLength(this, &v30, *(_QWORD *)(v17 + 40));
              *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
              *((_DWORD *)this + 189) = v18;
              *((_DWORD *)this + 186) = v18;
            }
            if ( v16 == 1 )
              LINER::vNextEvent(this);
            *((_DWORD *)this + 10) &= ~4u;
            *((_DWORD *)this + 172) = 8;
            goto LABEL_3;
          }
          v19 = *((float *)this + 187);
          if ( v19 <= *((float *)this + 186) )
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
          *((float *)this + 187) = v19 - *((float *)this + 186);
        }
        LINER::vNextEvent(this);
        v20 = *((_DWORD *)this + 172);
        if ( v20 )
        {
          if ( (unsigned int)(v20 - 3) > 1 )
          {
            *((_DWORD *)this + 10) &= ~4u;
            goto LABEL_3;
          }
          v21 = &v33;
          v22 = this;
        }
        else
        {
          *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          StyleLength = (_DWORD *)STYLER::efNextStyleLength(this, v28);
          v21 = &v29;
          *((_DWORD *)this + 187) = *StyleLength;
        }
        v24 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v25 = *(_DWORD *)STYLER::efWorldLength(v22, v21, *(_QWORD *)(v24 + 40));
        v26 = *(_QWORD *)((char *)this + 692);
        *((_DWORD *)this + 10) |= 4u;
        *((_QWORD *)this + 95) = v26;
        *((_DWORD *)this + 186) = v25;
        *((_DWORD *)this + 189) = v25;
LABEL_3:
        v3 = *((_DWORD *)this + 172);
        if ( v3 > 5 )
          break;
        if ( v3 == 5 )
          goto LABEL_46;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( !v6 )
              {
                v7 = 0;
                goto LABEL_10;
              }
              if ( v6 == 1 )
              {
                v7 = 1;
LABEL_10:
                WIDENER::vAddJoin(this, v7);
              }
            }
            else
            {
              WIDENER::vAddJoin(this, 0);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
              v8 = (WIDENER *)((char *)this + 1136);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1136));
              v9 = (WIDENER *)((char *)this + 1136);
              if ( (v10 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 143) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v9) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), (WIDENER *)((char *)this + 984));
                goto LABEL_14;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(v9) )
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
LABEL_46:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 984));
            if ( !(unsigned int)WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1136), v27);
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
      v11 = v3 - 6;
      if ( !v11 )
        break;
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
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
        v8 = (WIDENER *)((char *)this + 1136);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1136)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
LABEL_14:
        WIDEPATHOBJ::vEndFigure(v8);
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
