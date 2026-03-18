/*
 * XREFs of ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C
 * Callers:
 *     EngStrokePath @ 0x1C013BB90 (EngStrokePath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C013D880 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C026CAE0 (EngStrokeAndFillPath.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02913E0 (NtGdiWidenPath.c)
 * Callees:
 *     ??1WIDENER@@QEAA@XZ @ 0x1C01435B4 (--1WIDENER@@QEAA@XZ.c)
 *     ?vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z @ 0x1C0143604 (-vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z.c)
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0144830 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C0144EEC (-bValid@WIDENER@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C0252790 (-bEfToL@EFLOAT@@QEAAHAEAJ@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02B18D8 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EPATHOBJ::bWiden(EPATHOBJ *this, struct EPATHOBJ *a2, struct _XFORMOBJ *a3, struct _LINEATTRS *a4)
{
  unsigned int v7; // edi
  FLOAT_LONG v8; // xmm0_4
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT_LONG v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v12[1312]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[8]; // [rsp+560h] [rbp+460h] BYREF

  WIDENER::WIDENER((WIDENER *)v12, a2, (struct EXFORMOBJ *)a3, a4);
  v7 = WIDENER::bValid((WIDENER *)v12);
  if ( v7 )
  {
    WIDENER::vMakeItWide((WIDENER *)v12, this);
    LODWORD(v8.e) = a4->elWidth;
    v10 = 0;
    v11[0] = v8;
    EFLOAT::bEfToL((EFLOAT *)v11, &v10);
    v13[5] = 0;
    v13[6] = 0;
    v13[0] = v10;
    v13[1] = v10;
    v13[2] = v10;
    v13[4] = v10;
    v13[3] = -v10;
    v13[7] = -v10;
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)v13, (struct _VECTORFX *)v13, 4uLL, 1) )
      EPATHOBJ::vReComputeBounds(this);
  }
  WIDENER::~WIDENER((WIDENER *)v12);
  return v7;
}
