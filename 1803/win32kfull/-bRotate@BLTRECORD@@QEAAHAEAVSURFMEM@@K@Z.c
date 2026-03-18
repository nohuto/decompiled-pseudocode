/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C025CBF0
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C025C970 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009CFC4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C025CE48 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C025CF5C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
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
  _QWORD v19[4]; // [rsp+70h] [rbp-29h] BYREF
  POINTFIX pptfx; // [rsp+90h] [rbp-9h] BYREF
  int v21; // [rsp+98h] [rbp-1h]
  int v22; // [rsp+9Ch] [rbp+3h]
  int v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A4h] [rbp+Bh]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]

  BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
  memset(v19, 0, sizeof(v19));
  v6 = 0;
  x = pptlBrushOrg.x;
  y = pptlBrushOrg.y;
  HIDWORD(v19[0]) = v17 - pptlBrushOrg.x;
  LODWORD(v19[0]) = 1;
  LODWORD(v19[1]) = v18 - pptlBrushOrg.y;
  v19[2] = 0LL;
  LODWORD(v19[3]) = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v9 = 16 * x;
    v10 = 16 * y;
    pptfx.x = this[7].right - v9;
    pptfx.y = this[7].bottom - v10;
    v21 = this[8].left - v9;
    v22 = this[8].top - v10;
    v23 = this[8].right - v9;
    v24 = this[8].bottom - v10;
    v25 = this[9].left - v9;
    v26 = this[9].top - v10;
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
