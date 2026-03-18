/*
 * XREFs of ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C029D494
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0121910 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0121B88 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C029D6B8 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C029DE44 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C029DEE0 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddEndCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  struct _POINTFIX *v4; // rbx
  WIDEPATHOBJ *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbx
  int *v8; // rax
  int v9; // edx
  _DWORD *v10; // rax
  int v11; // r9d
  struct EVECTORFX *v12; // r8
  __int64 *v13; // rax
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 323);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      v6 = *((_QWORD *)this + 88);
      if ( (*(_DWORD *)v6 & 2) == 0 )
      {
        WIDENER::vVecSquareCompute(this, *((struct LINEDATA **)this + 88));
        v6 = *((_QWORD *)this + 88);
      }
      v7 = *(_QWORD *)(v6 + 56);
      v14 = v7;
      v15 = v7;
      v8 = (int *)WIDENER::vecInPerp(this, &v16);
      v9 = *v8;
      HIDWORD(v14) += v8[1];
      LODWORD(v14) = v7 + v9;
      v10 = WIDENER::vecInPerp(this, &v16);
      v5 = (WIDENER *)((char *)this + 1136);
      LODWORD(v7) = v7 - *v10;
      HIDWORD(v15) -= v10[1];
      LODWORD(v15) = v7;
      v4 = (struct _POINTFIX *)((char *)this + 692);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v14,
        0);
      v11 = 0;
      v12 = (struct EVECTORFX *)&v15;
      goto LABEL_13;
    }
    if ( v3 != 1 )
      return;
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v14 = *WIDENER::vecInPerp(this, &v14);
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
      v13 = WIDENER::vecInPerp(this, &v14);
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
  v11 = 1;
  v12 = (struct EVECTORFX *)&v14;
LABEL_13:
  WIDEPATHOBJ::vAddPoint(v5, v4, v12, v11);
}
