/*
 * XREFs of ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C01451F4
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01449BC (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0145280 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0155A98 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C02B13F8 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02B19A8 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02B1B4C (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddEndCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  struct _POINTFIX *v4; // rbx
  WIDEPATHOBJ *v5; // rdi
  int v6; // r9d
  struct EVECTORFX *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbx
  int *v10; // rax
  int v11; // edx
  _DWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  char v16; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 323);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      v8 = *((_QWORD *)this + 88);
      if ( (*(_DWORD *)v8 & 2) == 0 )
      {
        WIDENER::vVecSquareCompute(this, *((struct LINEDATA **)this + 88));
        v8 = *((_QWORD *)this + 88);
      }
      v9 = *(_QWORD *)(v8 + 56);
      v14 = v9;
      v15 = v9;
      v10 = (int *)WIDENER::vecInPerp(this, &v16);
      v11 = *v10;
      HIDWORD(v14) += v10[1];
      LODWORD(v14) = v9 + v11;
      v12 = (_DWORD *)WIDENER::vecInPerp(this, &v16);
      v5 = (WIDENER *)((char *)this + 1136);
      LODWORD(v9) = v9 - *v12;
      HIDWORD(v15) -= v12[1];
      LODWORD(v15) = v9;
      v4 = (struct _POINTFIX *)((char *)this + 692);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v14,
        0);
      v6 = 0;
      v7 = (struct EVECTORFX *)&v15;
      goto LABEL_6;
    }
    if ( v3 != 1 )
      return;
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v14 = *(_QWORD *)WIDENER::vecInPerp(this, &v14);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v14,
      0);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v13 = (__int64 *)WIDENER::vecInDraw(this, &v14);
    else
      v13 = (__int64 *)WIDENER::vecInPerp(this, &v14);
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v14 = *v13;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v14,
      0);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 88),
      0,
      *((_DWORD *)this + 10) & 0x10);
  }
  v6 = 1;
  v7 = (struct EVECTORFX *)&v14;
LABEL_6:
  WIDEPATHOBJ::vAddPoint(v5, v4, v7, v6);
}
