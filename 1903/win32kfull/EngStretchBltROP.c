/*
 * XREFs of EngStretchBltROP @ 0x1C010A420
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01551D0 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02973B0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C005D7E0 (EngStretchBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

BOOL __stdcall EngStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r14
  SURFOBJ *v22; // rbx
  SURFOBJ *v23; // r13
  SURFOBJ *v24; // r15
  ULONG v26; // eax
  LONG right; // ecx
  __int64 v28; // rbx
  int v29; // r12d
  LONG left; // eax
  LONG top; // eax
  LONG bottom; // ecx
  __int64 v33; // r10
  int v34; // r8d
  int v35; // r8d
  int v36; // ecx
  LONG v37; // ecx
  LONG v38; // edx
  int v39; // eax
  int (*v40)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v41; // r8
  __int64 v42; // rax
  LONG v43; // edx
  LONG v44; // r8d
  LONG x; // edx
  LONG y; // r8d
  LONG v47; // ecx
  LONG v48; // edx
  bool v49; // cc
  __int64 v50; // r8
  int v51; // [rsp+60h] [rbp-A0h]
  POINTL v52; // [rsp+68h] [rbp-98h] BYREF
  ULONG v53; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrca; // [rsp+78h] [rbp-88h]
  SURFOBJ *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  SURFOBJ *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  char v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A4h] [rbp-5Ch]
  _QWORD v61[4]; // [rsp+A8h] [rbp-58h] BYREF
  POINTL *v62; // [rsp+C8h] [rbp-38h]
  POINTL *v63; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v64; // [rsp+D8h] [rbp-28h]
  CLIPOBJ *v65; // [rsp+E0h] [rbp-20h]
  BRUSHOBJ *v66; // [rsp+E8h] [rbp-18h]
  RECTL v67; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v68; // [rsp+100h] [rbp+0h] BYREF
  RECTL v69; // [rsp+110h] [rbp+10h] BYREF

  v55 = psoDest;
  v64 = pxlo;
  v52 = (POINTL)pca;
  v63 = pptlHTOrg;
  v62 = pptlMask;
  v66 = pbo;
  v65 = pco;
  v57 = psoMask;
  psoSrca = psoSrc;
  v14 = SURFOBJ_TO_SURFACE(psoDest);
  v15 = SURFOBJ_TO_SURFACE(psoSrc);
  v16 = v15;
  if ( rop4 != 52428 && rop4 != 43724 )
  {
    v26 = 3;
    right = prclDest->right;
    if ( iMode != 4 )
      v26 = iMode;
    v28 = 0LL;
    v53 = v26;
    v29 = 0;
    left = prclDest->left;
    v51 = 0;
    if ( prclDest->left > right )
    {
      prclDest->left = right;
      prclDest->right = left;
      v51 = 1;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      v29 = 1;
      prclDest->bottom = top;
    }
    memset(v61, 0, sizeof(v61));
    *(_QWORD *)&v68.left = 0LL;
    v33 = 0LL;
    LOBYTE(v68.right) = 0;
    v68.bottom = 0;
    v58 = 0LL;
    v34 = (unsigned __int8)gajRop3[BYTE1(rop4)];
    v59 = 0;
    v60 = 0;
    v52 = 0LL;
    v35 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v34;
    v36 = v35 | 0x10000;
    if ( (unsigned __int8)rop4 == BYTE1(rop4) )
      v36 = v35;
    v56 = v36;
    if ( (v36 & 0x10000) != 0 )
    {
      v42 = SURFOBJ_TO_SURFACE(v57);
      v43 = prclDest->right - prclDest->left;
      v44 = prclDest->bottom - prclDest->top;
      HIDWORD(v61[0]) = v43;
      LODWORD(v61[1]) = v44;
      LODWORD(v61[0]) = 1;
      v61[2] = 0LL;
      LODWORD(v42) = *(_DWORD *)(v42 + 112) & 0x40000;
      *(_QWORD *)&v67.left = 0LL;
      LODWORD(v61[3]) = v42;
      v67.right = v43;
      v67.bottom = v44;
      if ( v51 )
      {
        v67.left = v43;
        v67.right = 0;
      }
      if ( v29 )
      {
        v67.top = v44;
        v67.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v61, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v58 )
        goto LABEL_30;
      x = v62->x;
      y = v62->y;
      v69.right = v62->x + prclSrc->right - prclSrc->left;
      v69.bottom = y + prclSrc->bottom - prclSrc->top;
      v69.left = x;
      v69.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v58 + 24), v57, 0LL, 0LL, 0LL, 0LL, &v52, &v67, &v69, 0LL, v53) )
        goto LABEL_30;
      v33 = *(_QWORD *)&v68.left;
      LOBYTE(v36) = v56;
    }
    if ( (v36 & 0xD4) != 0 )
    {
      v37 = prclDest->right - prclDest->left;
      v38 = prclDest->bottom - prclDest->top;
      LODWORD(v61[0]) = *(_DWORD *)(v16 + 96);
      v39 = *(_DWORD *)(v16 + 112) & 0x40000;
      HIDWORD(v61[0]) = v37;
      LODWORD(v61[1]) = v38;
      v61[2] = 0LL;
      LODWORD(v61[3]) = v39;
      *(_QWORD *)&v67.left = 0LL;
      v67.right = v37;
      v67.bottom = v38;
      if ( v51 )
      {
        v67.left = v37;
        v67.right = 0;
      }
      if ( v29 )
      {
        v67.top = v38;
        v67.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)v61, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v68.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v68.left + 24LL),
              psoSrca,
              0LL,
              0LL,
              0LL,
              0LL,
              &v52,
              &v67,
              prclSrc,
              0LL,
              v53) )
      {
        goto LABEL_30;
      }
      v33 = *(_QWORD *)&v68.left;
    }
    if ( v33 )
      v28 = v33 + 24;
    v40 = SURFACE::pfnBitBlt((SURFACE *)v14);
    LODWORD(v28) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v40)(
                     v55,
                     v28,
                     v41,
                     v65,
                     v64,
                     prclDest,
                     &v52,
                     &v52,
                     v66,
                     v63,
                     rop4);
LABEL_30:
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
    SURFMEM::~SURFMEM((SURFMEM *)&v68);
    return v28;
  }
  v17 = *(_DWORD **)(v15 + 48);
  v18 = *(_DWORD *)(v14 + 112);
  ++*(_DWORD *)(v14 + 92);
  v19 = *(_QWORD *)(v14 + 48);
  v20 = v18 & 2;
  if ( v20 )
    v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v19 + 2848);
  else
    v21 = EngStretchBlt;
  v22 = 0LL;
  if ( v20 && (*(_DWORD *)(v19 + 40) & 0x20000) == 0 )
  {
    if ( iMode == 4 && (*(_BYTE *)(v19 + 1824) & 0x10) == 0 )
      v21 = EngStretchBlt;
    if ( *(_WORD *)(v16 + 100) == 1 && v17 && (v17[10] & 0x20000) != 0 )
    {
      v47 = v17[646];
      if ( prclSrc->left < v47 )
        goto LABEL_55;
      v48 = v17[647];
      if ( prclSrc->top < v48 || prclSrc->right > *(_DWORD *)(v16 + 56) + v47 )
        goto LABEL_55;
      v49 = prclSrc->bottom <= v48 + *(_DWORD *)(v16 + 60);
    }
    else
    {
      if ( prclSrc->left < 0 || prclSrc->top < 0 || prclSrc->right > *(_DWORD *)(v16 + 56) )
        goto LABEL_55;
      v49 = prclSrc->bottom <= *(_DWORD *)(v16 + 60);
    }
    if ( v49 )
    {
LABEL_56:
      v68 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v68);
      v24 = psoSrca;
      v23 = v55;
      if ( psoSrca == v55 && (unsigned int)bIntersect(prclSrc, &v68, v50) )
        v21 = EngStretchBlt;
      goto LABEL_6;
    }
LABEL_55:
    v21 = EngStretchBlt;
    goto LABEL_56;
  }
  v23 = v55;
  v24 = psoSrca;
LABEL_6:
  if ( rop4 != 52428 )
    v22 = v57;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v21)(
           v23,
           v24,
           v22,
           v65,
           v64,
           v52,
           v63,
           prclDest,
           prclSrc,
           v62,
           iMode);
}
