/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094
 * Callers:
 *     GreRectangle @ 0x1C00FA310 (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00FA93C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolygonInternal @ 0x1C0148A14 (GrePolyPolygonInternal.c)
 *     GrePolylineTo @ 0x1C014DE70 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C014E080 (GrePolyBezierTo.c)
 *     GrePolyPolylineInternal @ 0x1C0156964 (GrePolyPolylineInternal.c)
 *     NtGdiRoundRect @ 0x1C0157180 (NtGdiRoundRect.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02696A0 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C0269D50 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C026A524 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C026A9F0 (NtGdiEllipse.c)
 *     NtGdiArcInternal @ 0x1C02AA0A0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0149454 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C01495B4 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014E274 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C02833CC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v6; // eax
  DC *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  struct _POINTL *v11; // r8
  struct HPATH__ *v12; // rdx
  _BYTE v13[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct HPATH__ **v15; // [rsp+38h] [rbp-C8h]
  _BYTE v16[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-48h]
  int v18; // [rsp+160h] [rbp+60h]
  int v19; // [rsp+164h] [rbp+64h]

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v6 = *((_DWORD *)*a2 + 62);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 62) = v6 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v16, *((struct HPATH__ **)*a2 + 25));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v14);
      if ( v15 && v17 && EPATHOBJ::bClone((EPATHOBJ *)v14, (struct EPATHOBJ *)v16) )
        v12 = *v15;
      else
        v12 = 0LL;
      DC::hpath(*a2, v12);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v14);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v16);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 28) )
    {
      PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 28) = 1;
    }
    EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 25));
    if ( *((_QWORD *)this + 1) && a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)a2, 0x204u);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v13,
          (struct _POINTL *)(*((_QWORD *)*a2 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
        v11 = (struct _POINTL *)*((_QWORD *)*a2 + 122);
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this);
        if ( v11[1].x == v18 && v11[1].y == v19 )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, v11 + 1);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = (char *)this + 120;
    *((_QWORD *)this + 18) = (char *)this + 440;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = (char *)this + 464;
    *((_DWORD *)this + 50) = 1;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 51) = 1;
    *((_DWORD *)this + 114) = 256;
    if ( a3 )
    {
      v7 = *a2;
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 152LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)a2, 0x204u);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v13,
          (struct _POINTL *)(*((_QWORD *)*a2 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
        v7 = *a2;
      }
      *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)v7 + 122) + 8LL);
      v8 = *((_QWORD *)*a2 + 122);
      v9 = *(_DWORD *)(v8 + 152);
      if ( (v9 & 0x400) != 0 )
      {
        *(_DWORD *)(v8 + 152) = v9 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 60) = 0;
      }
    }
  }
  return this;
}
