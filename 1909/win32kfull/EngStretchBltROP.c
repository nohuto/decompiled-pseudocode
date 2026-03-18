/*
 * XREFs of EngStretchBltROP @ 0x1C00E49C0
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0155F90 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0296E00 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C00A6F40 (EngStretchBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00E4D80 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  int v50; // [rsp+60h] [rbp-A0h]
  POINTL v51; // [rsp+68h] [rbp-98h] BYREF
  ULONG v52; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrca; // [rsp+78h] [rbp-88h]
  SURFOBJ *v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  SURFOBJ *v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  char v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A4h] [rbp-5Ch]
  _QWORD v60[4]; // [rsp+A8h] [rbp-58h] BYREF
  POINTL *v61; // [rsp+C8h] [rbp-38h]
  POINTL *v62; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v63; // [rsp+D8h] [rbp-28h]
  CLIPOBJ *v64; // [rsp+E0h] [rbp-20h]
  BRUSHOBJ *v65; // [rsp+E8h] [rbp-18h]
  RECTL v66; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v67; // [rsp+100h] [rbp+0h] BYREF
  RECTL v68; // [rsp+110h] [rbp+10h] BYREF

  v54 = psoDest;
  v63 = pxlo;
  v51 = (POINTL)pca;
  v62 = pptlHTOrg;
  v61 = pptlMask;
  v65 = pbo;
  v64 = pco;
  v56 = psoMask;
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
    v52 = v26;
    v29 = 0;
    left = prclDest->left;
    v50 = 0;
    if ( prclDest->left > right )
    {
      prclDest->left = right;
      prclDest->right = left;
      v50 = 1;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      v29 = 1;
      prclDest->bottom = top;
    }
    memset(v60, 0, sizeof(v60));
    *(_QWORD *)&v67.left = 0LL;
    v33 = 0LL;
    LOBYTE(v67.right) = 0;
    v67.bottom = 0;
    v57 = 0LL;
    v34 = (unsigned __int8)gajRop3[BYTE1(rop4)];
    v58 = 0;
    v59 = 0;
    v51 = 0LL;
    v35 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v34;
    v36 = v35 | 0x10000;
    if ( (unsigned __int8)rop4 == BYTE1(rop4) )
      v36 = v35;
    v55 = v36;
    if ( (v36 & 0x10000) != 0 )
    {
      v42 = SURFOBJ_TO_SURFACE(v56);
      v43 = prclDest->right - prclDest->left;
      v44 = prclDest->bottom - prclDest->top;
      HIDWORD(v60[0]) = v43;
      LODWORD(v60[1]) = v44;
      LODWORD(v60[0]) = 1;
      v60[2] = 0LL;
      LODWORD(v42) = *(_DWORD *)(v42 + 112) & 0x40000;
      *(_QWORD *)&v66.left = 0LL;
      LODWORD(v60[3]) = v42;
      v66.right = v43;
      v66.bottom = v44;
      if ( v50 )
      {
        v66.left = v43;
        v66.right = 0;
      }
      if ( v29 )
      {
        v66.top = v44;
        v66.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v57, (struct _DEVBITMAPINFO *)v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v57 )
        goto LABEL_30;
      x = v61->x;
      y = v61->y;
      v68.right = v61->x + prclSrc->right - prclSrc->left;
      v68.bottom = y + prclSrc->bottom - prclSrc->top;
      v68.left = x;
      v68.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v57 + 24), v56, 0LL, 0LL, 0LL, 0LL, &v51, &v66, &v68, 0LL, v52) )
        goto LABEL_30;
      v33 = *(_QWORD *)&v67.left;
      LOBYTE(v36) = v55;
    }
    if ( (v36 & 0xD4) != 0 )
    {
      v37 = prclDest->right - prclDest->left;
      v38 = prclDest->bottom - prclDest->top;
      LODWORD(v60[0]) = *(_DWORD *)(v16 + 96);
      v39 = *(_DWORD *)(v16 + 112) & 0x40000;
      HIDWORD(v60[0]) = v37;
      LODWORD(v60[1]) = v38;
      v60[2] = 0LL;
      LODWORD(v60[3]) = v39;
      *(_QWORD *)&v66.left = 0LL;
      v66.right = v37;
      v66.bottom = v38;
      if ( v50 )
      {
        v66.left = v37;
        v66.right = 0;
      }
      if ( v29 )
      {
        v66.top = v38;
        v66.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v67.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v67.left + 24LL),
              psoSrca,
              0LL,
              0LL,
              0LL,
              0LL,
              &v51,
              &v66,
              prclSrc,
              0LL,
              v52) )
      {
        goto LABEL_30;
      }
      v33 = *(_QWORD *)&v67.left;
    }
    if ( v33 )
      v28 = v33 + 24;
    v40 = SURFACE::pfnBitBlt((SURFACE *)v14);
    LODWORD(v28) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v40)(
                     v54,
                     v28,
                     v41,
                     v64,
                     v63,
                     prclDest,
                     &v51,
                     &v51,
                     v65,
                     v62,
                     rop4);
LABEL_30:
    SURFMEM::~SURFMEM((SURFMEM *)&v57);
    SURFMEM::~SURFMEM((SURFMEM *)&v67);
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
      v67 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v67);
      v24 = psoSrca;
      v23 = v54;
      if ( psoSrca == v54 && (unsigned int)bIntersect(prclSrc, &v67) )
        v21 = EngStretchBlt;
      goto LABEL_6;
    }
LABEL_55:
    v21 = EngStretchBlt;
    goto LABEL_56;
  }
  v23 = v54;
  v24 = psoSrca;
LABEL_6:
  if ( rop4 != 52428 )
    v22 = v56;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v21)(
           v23,
           v24,
           v22,
           v64,
           v63,
           v51,
           v62,
           prclDest,
           prclSrc,
           v61,
           iMode);
}
