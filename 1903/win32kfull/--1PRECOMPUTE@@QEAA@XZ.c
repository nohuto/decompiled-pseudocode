/*
 * XREFs of ??1PRECOMPUTE@@QEAA@XZ @ 0x1C014FBCC
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00788E0 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007AB84 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     EngLineTo @ 0x1C0102EC0 (EngLineTo.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0135B04 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C014F600 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C014F9A0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027C620 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PRECOMPUTE::~PRECOMPUTE(PRECOMPUTE *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) = 0LL;
    v7 = *(_QWORD *)this;
    v8 = *((_QWORD *)this + 1);
    v9 = *((_QWORD *)this + 2);
    v10 = *((_QWORD *)this + 3);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) = 0;
    v3 = *((_QWORD *)this + 4);
    v4 = *(_QWORD *)(v3 + 48);
    if ( v4 )
    {
      Win32FreePool(v4);
      v3 = *((_QWORD *)this + 4);
    }
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 4) + 60LL) = 0;
    v5 = *((_QWORD *)this + 4);
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 )
    {
      Win32FreePool(v6);
      v5 = *((_QWORD *)this + 4);
    }
    *(_QWORD *)(v5 + 64) = 0LL;
  }
}
