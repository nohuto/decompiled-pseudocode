/*
 * XREFs of SimBitBlt @ 0x1C0275800
 * Callers:
 *     EngBitBlt @ 0x1C0054D60 (EngBitBlt.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 * Callees:
 *     EngBitBlt @ 0x1C0054D60 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02756A8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
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
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r10
  int v23; // r11d
  SURFOBJ *v24; // rdx
  int (*v25)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v26; // eax
  signed __int32 v27; // ett
  int v28; // edi
  int v29; // r13d
  int v30; // r15d
  RECTL v31; // xmm0
  POINTL v32; // rax
  int v33; // r9d
  LONG v34; // eax
  int v35; // r8d
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  LONG right; // ecx
  LONG bottom; // edx
  POINTL *v41; // r12
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  __int64 v43; // rdi
  int v44; // eax
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v46; // rcx
  SURFOBJ *v47; // rdi
  XLATEOBJ *v48; // r13
  __int64 v49; // rcx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v51; // rcx
  SURFOBJ *v52; // rcx
  int v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+70h] [rbp-90h]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  POINTL v58; // [rsp+80h] [rbp-80h] BYREF
  SURFOBJ *psoMask; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoTrg; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  char v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A4h] [rbp-5Ch]
  SURFOBJ *v64; // [rsp+A8h] [rbp-58h]
  POINTL *pptlBrush; // [rsp+B0h] [rbp-50h]
  POINTL v66; // [rsp+B8h] [rbp-48h] BYREF
  BRUSHOBJ *pbo; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *pco; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h] BYREF
  char v70; // [rsp+D8h] [rbp-28h]
  int v71; // [rsp+DCh] [rbp-24h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  _DWORD v73[2]; // [rsp+E8h] [rbp-18h] BYREF
  RECTL *v74; // [rsp+F0h] [rbp-10h]
  __int64 *v75; // [rsp+F8h] [rbp-8h]
  DEVLOCKBLTOBJ *v76; // [rsp+100h] [rbp+0h]
  _DWORD v77[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v78; // [rsp+118h] [rbp+18h]
  int v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+124h] [rbp+24h]
  _DWORD v81[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+140h] [rbp+40h]
  int v84; // [rsp+144h] [rbp+44h]
  int v85[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v86; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  pbo = a9;
  psoTrg = a1;
  pptlBrush = a10;
  v76 = a12;
  psoMask = a3;
  v64 = a2;
  pco = a4;
  v74 = prclTrg;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v75 = (__int64 *)pptlSrc;
  v54 = v14 & 0xD4;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v19 = *(unsigned __int16 *)(v15 + 100);
  v20 = 0LL;
  v21 = *(_QWORD *)(v15 + 48);
  v22 = v16;
  v23 = v54;
  v72 = v16;
  if ( (_WORD)v19 || v54 && *(_WORD *)(v16 + 100) )
  {
    v24 = psoMask;
  }
  else
  {
    v24 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v21 + 40) & 0x8000) != 0 )
      {
        v26 = EngBitBlt(psoTrg, a2, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v25 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v26 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v25)(
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
      LODWORD(v20) = v26;
      return (unsigned int)v20;
    }
  }
  if ( v21 )
  {
    _m_prefetchw((const void *)(v21 + 40));
    do
      v27 = *(_DWORD *)(v21 + 40);
    while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 40), v27 | 0x40000, v27) );
    v19 = *(unsigned __int16 *)(v15 + 100);
  }
  if ( (_WORD)v19 == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
  {
    v28 = *(_DWORD *)(v21 + 2584);
    v29 = v28 + *(_DWORD *)(v15 + 56);
    v30 = *(_DWORD *)(v21 + 2588);
    v19 = (unsigned int)(v30 + *(_DWORD *)(v15 + 60));
    v56 = v30 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v30 = 0;
    v29 = *(_DWORD *)(v15 + 56);
    v28 = 0;
    v56 = *(_DWORD *)(v15 + 60);
  }
  v55 = 0LL;
  v31 = *v74;
  v32.y = 0;
  v58 = 0LL;
  *(RECTL *)v85 = v31;
  if ( v54 )
  {
    v19 = *v75;
    v55 = *v75;
  }
  if ( v24 )
  {
    if ( bUMPDSecurityGateEx(v19, (__int64)v24, v17, v18) && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 708);
      return (unsigned int)v20;
    }
    v32 = *pptlMask;
    v22 = v72;
    v23 = v54;
    v58 = *pptlMask;
  }
  v33 = v85[1];
  if ( v85[1] < v30 )
  {
    v85[1] = v30;
    HIDWORD(v55) += v30 - v33;
    v34 = v30 + v32.y - v33;
    v33 = v30;
    v58.y = v34;
  }
  v35 = v85[0];
  if ( v85[0] < v28 )
  {
    v85[0] = v28;
    LODWORD(v55) = v28 - v35 + v55;
    v36 = v28 - v35;
    v35 = v28;
    v58.x += v36;
  }
  v37 = v85[3];
  v38 = v85[2];
  if ( v85[3] > v56 )
    v37 = v56;
  v85[3] = v37;
  if ( v85[2] > v29 )
    v38 = v29;
  v85[2] = v38;
  if ( v33 >= v37 || v35 >= v38 )
  {
    LODWORD(v20) = 1;
    return (unsigned int)v20;
  }
  right = v38 - v35;
  *(_QWORD *)&v86.left = 0LL;
  bottom = v37 - v33;
  v86.right = right;
  v86.bottom = bottom;
  v41 = (POINTL *)&v55;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v21 + 2108) )
  {
    v69 = 0LL;
    v42 = EngCopyBits;
    v70 = 0;
    v71 = 0;
    if ( v23 && *(_WORD *)(v22 + 100) )
    {
      v43 = *(_QWORD *)(v22 + 48);
      v77[0] = *(_DWORD *)(v21 + 2108);
      v44 = *(_DWORD *)(v22 + 112) & 0x40000;
      v77[1] = right;
      v77[2] = bottom;
      v79 = v44;
      v77[3] = 0;
      v80 = 0;
      v78 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v69, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_71:
        SURFMEM::~SURFMEM((SURFMEM *)&v69);
        return (unsigned int)v20;
      }
      if ( (*(_DWORD *)(v72 + 112) & 0x400) != 0 )
        v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v43 + 2840);
      else
        v45 = EngCopyBits;
      v46 = 0LL;
      if ( v69 )
        v46 = v69 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, __int64 *))v45)(
        v46,
        v64,
        0LL,
        pxlo,
        &v86,
        &v55);
      v41 = &gptl00;
      v47 = 0LL;
      if ( v69 )
        v47 = (SURFOBJ *)(v69 + 24);
      v48 = xloIdent;
      bottom = v86.bottom;
      right = v86.right;
    }
    else
    {
      v48 = pxlo;
      v47 = v64;
    }
    v81[3] = 0;
    v84 = 0;
    v81[0] = *(_DWORD *)(v21 + 2108);
    v81[1] = right;
    v81[2] = bottom;
    v82 = 0LL;
    v83 = *(_DWORD *)(v15 + 112) & 0x40000;
    v61 = 0LL;
    v62 = 0;
    v63 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v49 = v61;
    if ( v61 )
    {
      v73[0] = v85[0];
      v73[1] = v85[1];
      v66 = 0LL;
      if ( pptlBrush )
      {
        v66.x = pptlBrush->x - v85[0];
        v66.y = pptlBrush->y - v85[1];
      }
      if ( (*(_DWORD *)(v21 + 40) & 0x80u) != 0 && v76 )
      {
        DEVLOCKBLTOBJ::vUnLock(v76);
        v49 = v61;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v21 + 2840);
      else
        v50 = EngCopyBits;
      if ( v49 )
        v51 = v49 + 24;
      else
        v51 = 0LL;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v50)(
        v51,
        psoTrg,
        0LL,
        xloIdent,
        &v86,
        v73);
      if ( v61 )
        v52 = (SURFOBJ *)(v61 + 24);
      else
        v52 = 0LL;
      EngBitBlt(v52, v47, psoMask, 0LL, v48, &v86, v41, &v58, pbo, &v66, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v21 + 2840);
      if ( v61 )
        v20 = v61 + 24;
      LODWORD(v20) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v42)(
                       psoTrg,
                       v20,
                       pco,
                       xloIdent,
                       v85,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v61);
    goto LABEL_71;
  }
  return (unsigned int)v20;
}
