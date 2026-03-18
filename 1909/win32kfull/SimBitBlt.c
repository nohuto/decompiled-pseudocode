/*
 * XREFs of SimBitBlt @ 0x1C0275140
 * Callers:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 * Callees:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00E4D80 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0274FE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
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
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r10
  int v22; // r11d
  SURFOBJ *v23; // rdx
  int (*v24)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v25; // eax
  signed __int32 v26; // ett
  int v27; // edi
  int v28; // r13d
  int v29; // r15d
  RECTL v30; // xmm0
  POINTL v31; // rax
  int v32; // r9d
  LONG v33; // eax
  int v34; // r8d
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  LONG right; // ecx
  LONG bottom; // edx
  POINTL *v40; // r12
  BOOL (__stdcall *v41)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  __int64 v42; // rdi
  int v43; // eax
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v45; // rcx
  SURFOBJ *v46; // rdi
  XLATEOBJ *v47; // r13
  __int64 v48; // rcx
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v50; // rcx
  SURFOBJ *v51; // rcx
  int v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+70h] [rbp-90h]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  POINTL v57; // [rsp+80h] [rbp-80h] BYREF
  SURFOBJ *psoMask; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoTrg; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  char v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A4h] [rbp-5Ch]
  SURFOBJ *v63; // [rsp+A8h] [rbp-58h]
  POINTL *pptlBrush; // [rsp+B0h] [rbp-50h]
  POINTL v65; // [rsp+B8h] [rbp-48h] BYREF
  BRUSHOBJ *pbo; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *pco; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  char v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  _DWORD v72[2]; // [rsp+E8h] [rbp-18h] BYREF
  RECTL *v73; // [rsp+F0h] [rbp-10h]
  __int64 *v74; // [rsp+F8h] [rbp-8h]
  DEVLOCKBLTOBJ *v75; // [rsp+100h] [rbp+0h]
  _DWORD v76[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v77; // [rsp+118h] [rbp+18h]
  int v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+124h] [rbp+24h]
  _DWORD v80[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v81; // [rsp+138h] [rbp+38h]
  int v82; // [rsp+140h] [rbp+40h]
  int v83; // [rsp+144h] [rbp+44h]
  int v84[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v85; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  pbo = a9;
  psoTrg = a1;
  pptlBrush = a10;
  v75 = a12;
  psoMask = a3;
  v63 = a2;
  pco = a4;
  v73 = prclTrg;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v74 = (__int64 *)pptlSrc;
  v53 = v14 & 0xD4;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v18 = *(unsigned __int16 *)(v15 + 100);
  v19 = 0LL;
  v20 = *(_QWORD *)(v15 + 48);
  v21 = v16;
  v22 = v53;
  v71 = v16;
  if ( (_WORD)v18 || v53 && *(_WORD *)(v16 + 100) )
  {
    v23 = psoMask;
  }
  else
  {
    v23 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v20 + 40) & 0x8000) != 0 )
      {
        v25 = EngBitBlt(psoTrg, a2, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v24 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v25 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v24)(
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
      LODWORD(v19) = v25;
      return (unsigned int)v19;
    }
  }
  if ( v20 )
  {
    _m_prefetchw((const void *)(v20 + 40));
    do
      v26 = *(_DWORD *)(v20 + 40);
    while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 40), v26 | 0x40000, v26) );
    v18 = *(unsigned __int16 *)(v15 + 100);
  }
  if ( (_WORD)v18 == 1 && v20 && (*(_DWORD *)(v20 + 40) & 0x20000) != 0 )
  {
    v27 = *(_DWORD *)(v20 + 2584);
    v28 = v27 + *(_DWORD *)(v15 + 56);
    v29 = *(_DWORD *)(v20 + 2588);
    v18 = (unsigned int)(v29 + *(_DWORD *)(v15 + 60));
    v55 = v29 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v29 = 0;
    v28 = *(_DWORD *)(v15 + 56);
    v27 = 0;
    v55 = *(_DWORD *)(v15 + 60);
  }
  v54 = 0LL;
  v30 = *v73;
  v31.y = 0;
  v57 = 0LL;
  *(RECTL *)v84 = v30;
  if ( v53 )
  {
    v18 = *v74;
    v54 = *v74;
  }
  if ( v23 )
  {
    if ( bUMPDSecurityGateEx(v18, (__int64)v23, v17) && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 708);
      return (unsigned int)v19;
    }
    v31 = *pptlMask;
    v21 = v71;
    v22 = v53;
    v57 = *pptlMask;
  }
  v32 = v84[1];
  if ( v84[1] < v29 )
  {
    v84[1] = v29;
    HIDWORD(v54) += v29 - v32;
    v33 = v29 + v31.y - v32;
    v32 = v29;
    v57.y = v33;
  }
  v34 = v84[0];
  if ( v84[0] < v27 )
  {
    v84[0] = v27;
    LODWORD(v54) = v27 - v34 + v54;
    v35 = v27 - v34;
    v34 = v27;
    v57.x += v35;
  }
  v36 = v84[3];
  v37 = v84[2];
  if ( v84[3] > v55 )
    v36 = v55;
  v84[3] = v36;
  if ( v84[2] > v28 )
    v37 = v28;
  v84[2] = v37;
  if ( v32 >= v36 || v34 >= v37 )
  {
    LODWORD(v19) = 1;
    return (unsigned int)v19;
  }
  right = v37 - v34;
  *(_QWORD *)&v85.left = 0LL;
  bottom = v36 - v32;
  v85.right = right;
  v85.bottom = bottom;
  v40 = (POINTL *)&v54;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v20 + 2108) )
  {
    v68 = 0LL;
    v41 = EngCopyBits;
    v69 = 0;
    v70 = 0;
    if ( v22 && *(_WORD *)(v21 + 100) )
    {
      v42 = *(_QWORD *)(v21 + 48);
      v76[0] = *(_DWORD *)(v20 + 2108);
      v43 = *(_DWORD *)(v21 + 112) & 0x40000;
      v76[1] = right;
      v76[2] = bottom;
      v78 = v43;
      v76[3] = 0;
      v79 = 0;
      v77 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)v76, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_71:
        SURFMEM::~SURFMEM((SURFMEM *)&v68);
        return (unsigned int)v19;
      }
      if ( (*(_DWORD *)(v71 + 112) & 0x400) != 0 )
        v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v42 + 2840);
      else
        v44 = EngCopyBits;
      v45 = 0LL;
      if ( v68 )
        v45 = v68 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, __int64 *))v44)(
        v45,
        v63,
        0LL,
        pxlo,
        &v85,
        &v54);
      v40 = &gptl00;
      v46 = 0LL;
      if ( v68 )
        v46 = (SURFOBJ *)(v68 + 24);
      v47 = xloIdent;
      bottom = v85.bottom;
      right = v85.right;
    }
    else
    {
      v47 = pxlo;
      v46 = v63;
    }
    v80[3] = 0;
    v83 = 0;
    v80[0] = *(_DWORD *)(v20 + 2108);
    v80[1] = right;
    v80[2] = bottom;
    v81 = 0LL;
    v82 = *(_DWORD *)(v15 + 112) & 0x40000;
    v60 = 0LL;
    v61 = 0;
    v62 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v60, (struct _DEVBITMAPINFO *)v80, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v48 = v60;
    if ( v60 )
    {
      v72[0] = v84[0];
      v72[1] = v84[1];
      v65 = 0LL;
      if ( pptlBrush )
      {
        v65.x = pptlBrush->x - v84[0];
        v65.y = pptlBrush->y - v84[1];
      }
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 && v75 )
      {
        DEVLOCKBLTOBJ::vUnLock(v75);
        v48 = v60;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2840);
      else
        v49 = EngCopyBits;
      if ( v48 )
        v50 = v48 + 24;
      else
        v50 = 0LL;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v49)(
        v50,
        psoTrg,
        0LL,
        xloIdent,
        &v85,
        v72);
      if ( v60 )
        v51 = (SURFOBJ *)(v60 + 24);
      else
        v51 = 0LL;
      EngBitBlt(v51, v46, psoMask, 0LL, v47, &v85, v40, &v57, pbo, &v65, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v41 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2840);
      if ( v60 )
        v19 = v60 + 24;
      LODWORD(v19) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v41)(
                       psoTrg,
                       v19,
                       pco,
                       xloIdent,
                       v84,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v60);
    goto LABEL_71;
  }
  return (unsigned int)v19;
}
