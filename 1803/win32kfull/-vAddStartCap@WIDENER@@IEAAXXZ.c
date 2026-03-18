/*
 * XREFs of ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C029DA30
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01218CC (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0121B88 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C029D6B8 (-vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C029DE44 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C029DF24 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddStartCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int64 *v4; // rax
  int v5; // r9d
  unsigned __int64 *v6; // r8
  WIDEPATHOBJ *v7; // rdi
  struct _POINTFIX *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _DWORD *v11; // rax
  int v12; // ecx
  int *v13; // rax
  int v14; // ecx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 323);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = WIDENER::vecOutPerp(this, &v16);
      v5 = 1;
      v6 = &v16;
      v16 = *v4;
    }
    else
    {
      v9 = *((_QWORD *)this + 89);
      if ( (*(_DWORD *)v9 & 2) == 0 )
      {
        WIDENER::vVecSquareCompute(this, *((struct LINEDATA **)this + 89));
        v9 = *((_QWORD *)this + 89);
      }
      v10 = *(_QWORD *)(v9 + 56);
      LODWORD(v10) = -(int)v10;
      v16 = __PAIR64__(-HIDWORD(v10), v10);
      v17 = __PAIR64__(-HIDWORD(v10), v10);
      v11 = WIDENER::vecOutPerp(this, &v18);
      v12 = v11[1];
      LODWORD(v16) = v10 + *v11;
      HIDWORD(v16) = v12 - HIDWORD(v10);
      v13 = (int *)WIDENER::vecOutPerp(this, &v18);
      v6 = &v17;
      v14 = *v13;
      HIDWORD(v17) -= v13[1];
      LODWORD(v17) = v17 - v14;
      v5 = 0;
    }
    v7 = (WIDENER *)((char *)this + 1136);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)v6,
      v5);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v15 = (unsigned __int64 *)WIDENER::vecOutDraw(this, &v16);
    else
      v15 = WIDENER::vecOutPerp(this, &v16);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    v7 = (WIDENER *)((char *)this + 1136);
    v16 = *v15;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v16,
      1);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 89),
      1,
      *((_DWORD *)this + 10) & 0x10);
  }
  WIDEPATHOBJ::vAddPoint(v7, v8, (struct EVECTORFX *)&v16, 0);
}
