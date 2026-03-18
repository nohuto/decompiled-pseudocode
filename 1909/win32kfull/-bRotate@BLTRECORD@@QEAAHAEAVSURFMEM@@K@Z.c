/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0288064
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0287DE8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00091F0 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0009210 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00DED28 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bRotate(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v6; // ebx
  LONG x; // r14d
  LONG y; // r15d
  int v9; // r14d
  int v10; // r15d
  struct SURFACE *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+6Ch] [rbp-2Dh]
  _DWORD v19[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-9h] BYREF
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]

  BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
  v6 = 0;
  x = pptlBrushOrg.x;
  y = pptlBrushOrg.y;
  v19[1] = v17 - pptlBrushOrg.x;
  v19[3] = 0;
  v19[2] = v18 - pptlBrushOrg.y;
  v22 = 0;
  v19[0] = 1;
  v20 = 0LL;
  v21 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v9 = 16 * x;
    v10 = 16 * y;
    pptfx.x = this[7].right - v9;
    pptfx.y = this[7].bottom - v10;
    v24 = this[8].left - v9;
    v25 = this[8].top - v10;
    v26 = this[8].right - v9;
    v27 = this[8].bottom - v10;
    v28 = this[9].left - v9;
    v29 = this[9].top - v10;
    BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngPlgBlt(
           (SURFOBJ *)(v12 + 24),
           (SURFOBJ *)(((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlBrushOrg,
           &pptfx,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v13 = *(_QWORD *)&this[5].left;
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      v14 = *(_QWORD *)a2;
      this[12].left = 0;
      this[12].top = 0;
      v6 = 1;
      *(_QWORD *)&this[5].left = v14;
    }
  }
  return v6;
}
