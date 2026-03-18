/*
 * XREFs of SimBitBlt @ 0x1C025C140
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 * Callees:
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C025BFE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall SimBitBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  char v14; // cl
  __int64 v15; // r13
  __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  int v21; // r9d
  SURFOBJ *v22; // rdx
  int (*v23)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v24; // eax
  signed __int32 v25; // ett
  int v26; // edi
  int v27; // r12d
  int v28; // r14d
  int v29; // eax
  RECTL v30; // xmm0
  unsigned __int64 v31; // rcx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // r15d
  int v36; // r14d
  LONG right; // r14d
  LONG bottom; // r15d
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v40; // rdi
  __int64 v41; // r14
  int v42; // eax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v44; // rcx
  SURFOBJ *v45; // rdi
  __int64 v46; // rcx
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v48; // rcx
  SURFOBJ *v49; // r14
  SURFOBJ *v50; // rcx
  int v52; // [rsp+60h] [rbp-A0h]
  POINTL v53; // [rsp+68h] [rbp-98h] BYREF
  POINTL *v54; // [rsp+70h] [rbp-90h]
  POINTL v55; // [rsp+78h] [rbp-88h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-80h]
  SURFOBJ *psoMask; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  char v59; // [rsp+98h] [rbp-68h]
  int v60; // [rsp+9Ch] [rbp-64h]
  SURFOBJ *v61; // [rsp+A0h] [rbp-60h]
  POINTL *pptlBrush; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoTrg; // [rsp+B0h] [rbp-50h]
  POINTL v64; // [rsp+B8h] [rbp-48h] BYREF
  BRUSHOBJ *pbo; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *pco; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  char v68; // [rsp+D8h] [rbp-28h]
  int v69; // [rsp+DCh] [rbp-24h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  _DWORD v71[2]; // [rsp+E8h] [rbp-18h] BYREF
  RECTL *v72; // [rsp+F0h] [rbp-10h]
  POINTL *v73; // [rsp+F8h] [rbp-8h]
  DEVLOCKBLTOBJ *v74; // [rsp+100h] [rbp+0h]
  _QWORD v75[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v76[4]; // [rsp+128h] [rbp+28h] BYREF
  int v77[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v78; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  psoTrg = a1;
  pbo = a9;
  pptlBrush = a10;
  psoMask = a3;
  v74 = a12;
  v61 = a2;
  pco = a4;
  v72 = prclTrg;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v73 = pptlSrc;
  v52 = v14 & 0xD4;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = *(_WORD *)(v15 + 100);
  v18 = 0LL;
  v19 = *(_QWORD *)(v15 + 48);
  v20 = v16;
  v21 = v52;
  v70 = v16;
  if ( v17 || v52 && *(_WORD *)(v16 + 100) )
  {
    v22 = psoMask;
  }
  else
  {
    v22 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v19 + 40) & 0x8000) != 0 )
      {
        v24 = EngBitBlt(psoTrg, a2, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v23 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v24 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v23)(
                psoTrg,
                a2,
                0LL,
                pco,
                pxlo,
                prclTrg,
                pptlSrc,
                pptlMask,
                pbo,
                pptlBrush,
                rop4);
      }
      LODWORD(v18) = v24;
      return (unsigned int)v18;
    }
  }
  if ( v19 )
  {
    _m_prefetchw((const void *)(v19 + 40));
    do
      v25 = *(_DWORD *)(v19 + 40);
    while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 40), v25 | 0x40000, v25) );
    v17 = *(_WORD *)(v15 + 100);
  }
  if ( v17 == 1 && v19 && (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
  {
    v26 = *(_DWORD *)(v19 + 2584);
    v27 = v26 + *(_DWORD *)(v15 + 56);
    v28 = *(_DWORD *)(v19 + 2588);
    v29 = v28 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v27 = *(_DWORD *)(v15 + 56);
    v26 = 0;
    v29 = *(_DWORD *)(v15 + 60);
    v28 = 0;
  }
  LODWORD(v54) = v29;
  v30 = *v72;
  v53 = 0LL;
  v55 = 0LL;
  *(RECTL *)v77 = v30;
  if ( v52 )
    v53 = *v73;
  LODWORD(v31) = 0;
  if ( v22 )
  {
    if ( bUMPDSecurityGateEx(0LL, (__int64)v22) && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 708);
      return (unsigned int)v18;
    }
    v20 = v70;
    v21 = v52;
    v55 = *pptlMask;
    v31 = HIDWORD(*(unsigned __int64 *)&v55);
  }
  v32 = v77[1];
  if ( v77[1] < v28 )
  {
    v53.y += v28 - v77[1];
    v33 = v28 - v77[1];
    v32 = v28;
    v77[1] = v28;
    v55.y = v31 + v33;
  }
  v34 = v77[0];
  if ( v77[0] < v26 )
  {
    v53.x += v26 - v77[0];
    v34 = v26;
    v55.x += v26 - v77[0];
    v77[0] = v26;
  }
  v35 = v77[3];
  v36 = v77[2];
  if ( v77[3] > (int)v54 )
    v35 = (int)v54;
  v77[3] = v35;
  if ( v77[2] > v27 )
    v36 = v27;
  v77[2] = v36;
  if ( v32 >= v35 || v34 >= v36 )
  {
    LODWORD(v18) = 1;
    return (unsigned int)v18;
  }
  *(_QWORD *)&v78.left = 0LL;
  right = v36 - v34;
  v54 = &v53;
  bottom = v35 - v32;
  v78.right = right;
  v78.bottom = bottom;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v19 + 2108) )
  {
    v67 = 0LL;
    v39 = EngCopyBits;
    v68 = 0;
    v69 = 0;
    if ( v21 && *(_WORD *)(v20 + 100) )
    {
      v40 = *(_QWORD *)(v20 + 48);
      memset(v75, 0, sizeof(v75));
      LODWORD(v75[0]) = *(_DWORD *)(v19 + 2108);
      HIDWORD(v75[0]) = right;
      v41 = v70;
      LODWORD(v75[1]) = bottom;
      v42 = *(_DWORD *)(v70 + 112) & 0x40000;
      v75[2] = 0LL;
      LODWORD(v75[3]) = v42;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v75, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_71:
        SURFMEM::~SURFMEM((SURFMEM *)&v67);
        return (unsigned int)v18;
      }
      if ( (*(_DWORD *)(v41 + 112) & 0x400) != 0 )
        v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v40 + 2840);
      else
        v43 = EngCopyBits;
      v44 = 0LL;
      if ( v67 )
        v44 = v67 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))v43)(
        v44,
        v61,
        0LL,
        pxlo,
        &v78,
        &v53);
      v45 = 0LL;
      v54 = &gptl00;
      if ( v67 )
        v45 = (SURFOBJ *)(v67 + 24);
      bottom = v78.bottom;
      right = v78.right;
      pxlo = xloIdent;
    }
    else
    {
      v45 = v61;
    }
    memset(v76, 0, sizeof(v76));
    LODWORD(v76[0]) = *(_DWORD *)(v19 + 2108);
    HIDWORD(v76[0]) = right;
    LODWORD(v76[1]) = bottom;
    v76[2] = 0LL;
    LODWORD(v76[3]) = *(_DWORD *)(v15 + 112) & 0x40000;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v76, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v46 = v58;
    if ( v58 )
    {
      v71[0] = v77[0];
      v71[1] = v77[1];
      v64 = 0LL;
      if ( pptlBrush )
      {
        v64.x = pptlBrush->x - v77[0];
        v64.y = pptlBrush->y - v77[1];
      }
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 && v74 )
      {
        DEVLOCKBLTOBJ::vUnLock(v74);
        v46 = v58;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2840);
      else
        v47 = EngCopyBits;
      if ( v46 )
        v48 = v46 + 24;
      else
        v48 = 0LL;
      v49 = psoTrg;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v47)(
        v48,
        psoTrg,
        0LL,
        xloIdent,
        &v78,
        v71);
      if ( v58 )
        v50 = (SURFOBJ *)(v58 + 24);
      else
        v50 = 0LL;
      EngBitBlt(v50, v45, psoMask, 0LL, pxlo, &v78, v54, &v55, pbo, &v64, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2840);
      if ( v58 )
        v18 = v58 + 24;
      LODWORD(v18) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v39)(
                       v49,
                       v18,
                       pco,
                       xloIdent,
                       v77,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
    goto LABEL_71;
  }
  return (unsigned int)v18;
}
