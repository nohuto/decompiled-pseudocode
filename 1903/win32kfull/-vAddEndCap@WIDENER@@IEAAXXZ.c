/*
 * XREFs of ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C015A314
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0119040 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0119914 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E44 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C015A5EC (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C015A740 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C015A784 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vAddEndCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  struct _POINTFIX *v4; // rbx
  WIDEPATHOBJ *v5; // rdi
  int v6; // r9d
  struct EVECTORFX *v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF

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
      v12 = *(_QWORD *)(v8 + 56);
      v13 = v12;
      v9 = WIDENER::vecInPerp(this, &v14);
      LODWORD(v12) = *v9 + v12;
      HIDWORD(v12) += v9[1];
      v10 = WIDENER::vecInPerp(this, &v14);
      v4 = (struct _POINTFIX *)((char *)this + 692);
      v5 = (WIDENER *)((char *)this + 1136);
      LODWORD(v13) = v13 - *v10;
      HIDWORD(v13) -= v10[1];
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v12,
        0);
      v6 = 0;
      v7 = (struct EVECTORFX *)&v13;
      goto LABEL_6;
    }
    if ( v3 != 1 )
      return;
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v12 = *WIDENER::vecInPerp(this, &v12);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v12,
      0);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v11 = (__int64 *)WIDENER::vecInDraw(this, &v12);
    else
      v11 = WIDENER::vecInPerp(this, &v12);
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v12 = *v11;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v12,
      0);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 88),
      0,
      *((_DWORD *)this + 10) & 0x10);
  }
  v6 = 1;
  v7 = (struct EVECTORFX *)&v12;
LABEL_6:
  WIDEPATHOBJ::vAddPoint(v5, v4, v7, v6);
}
