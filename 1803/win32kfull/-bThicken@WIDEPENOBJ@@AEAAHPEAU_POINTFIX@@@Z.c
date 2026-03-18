/*
 * XREFs of ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C0120EF4
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0120BC8 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0121AF0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0121B40 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0121BE4 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C012210C (-vHalve@@YAXAEAVEVECTORFX@@@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::bThicken(WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  int x; // r9d
  int y; // r11d
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  int v9; // ecx
  int v10; // r11d
  struct _POINTFIX v12; // rdi
  unsigned __int64 v13; // r8
  FIX v14; // ebx
  FIX v15; // ecx
  FIX v16; // r14d
  int v17; // r10d
  FIX v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  struct _POINTFIX v26; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v27; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v28; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v29; // [rsp+70h] [rbp+40h] BYREF

  v26 = *a2;
  v27 = a2[1];
  vHalve((struct EVECTORFX *)&v26);
  vHalve((struct EVECTORFX *)&v27);
  x = v26.x;
  if ( v26.x < 0 )
    x = -v26.x;
  y = v26.y;
  if ( v26.y < 0 )
    y = -v26.y;
  v5 = v27.x;
  if ( v27.x < 0 )
    v5 = -v27.x;
  v6 = v27.y;
  if ( v27.y < 0 )
    v6 = -v27.y;
  if ( ((x | y | v5 | v6) & 0xFFFFF000) != 0 )
    return 0LL;
  v7 = v26.x * v27.y;
  v8 = v26.x * v26.x + v26.y * v26.y;
  v9 = v26.y * v27.x;
  v10 = v27.x * v27.x + v27.y * v27.y;
  if ( v8 > v10 )
  {
    if ( 16LL * v8 < (v7 - v9) * (__int64)(v7 - v9) )
      return 0LL;
    v12 = v26;
  }
  else
  {
    if ( 16LL * v10 < (v9 - v7) * (__int64)(v9 - v7) )
      return 0LL;
    v12 = v27;
    v8 = v27.x * v27.x + v27.y * v27.y;
  }
  v29 = v12;
  v13 = HIDWORD(*(unsigned __int64 *)&v12);
  v14 = 8;
  if ( v8 >= 64 )
  {
    v16 = v29.y;
    v15 = v29.x;
  }
  else
  {
    v15 = 8;
    v16 = 0;
    v29 = (struct _POINTFIX)8LL;
    v12.x = 8;
  }
  v17 = abs32(v16);
  if ( v17 <= v15 )
  {
    v28.x = 0;
    v18 = 0;
    v28.y = -8;
    goto LABEL_29;
  }
  v19 = v15;
  v20 = 0;
  v21 = abs32(v19);
  if ( v8 >= 64 )
    v20 = v13;
  if ( v21 > -v20 )
  {
    if ( v17 <= -v12.x )
    {
      v28.x = 0;
      v18 = 0;
      v28.y = 8;
      v14 = -8;
      goto LABEL_29;
    }
    v28.x = 8;
    v18 = -8;
  }
  else
  {
    v28.x = -8;
    v18 = 8;
  }
  v28.y = 0;
  v14 = 0;
LABEL_29:
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  WIDEPATHOBJ::vAddPoint(this, &v29, v22);
  WIDEPATHOBJ::vAddPoint(this, &v28, v23);
  v28.x = v18;
  v29.x = -v12.x;
  v29.y = -v16;
  v28.y = v14;
  WIDEPATHOBJ::vAddPoint(this, &v29, v24);
  WIDEPATHOBJ::vAddPoint(this, &v28, v25);
  WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
