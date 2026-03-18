/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C02605E0
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009C3E8 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009CFC4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall BLTRECORD::bStretch(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // ecx
  LONG v9; // edx
  LONG v10; // r8d
  struct SURFACE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  POINTL pptlHTOrg; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v16[4]; // [rsp+68h] [rbp-1h] BYREF
  RECTL prclDest; // [rsp+88h] [rbp+1Fh] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = 0;
  v7 = this[10].top - this[9].bottom;
  HIDWORD(v16[0]) = this[10].left - this[9].right;
  LODWORD(v16[1]) = v7;
  LODWORD(v16[0]) = 1;
  v16[2] = 0LL;
  v8 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  prclDest.bottom = v9;
  LODWORD(v16[3]) = v8;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = v10;
  BLTRECORD::vMirror((BLTRECORD *)this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v16, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    pptlHTOrg = 0LL;
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngStretchBlt(
           (SURFOBJ *)(v12 + 24),
           (SURFOBJ *)(((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlHTOrg,
           &prclDest,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v13 = *(_QWORD *)&this[5].left;
      this[12].left = 0;
      this[12].top = 0;
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      v6 = 1;
      *(_QWORD *)&this[5].left = *(_QWORD *)a2;
    }
  }
  return v6;
}
