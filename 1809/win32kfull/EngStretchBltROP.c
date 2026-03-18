/*
 * XREFs of EngStretchBltROP @ 0x1C00A05D0
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C014DE10 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0280DE0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v51; // r9
  int v52; // [rsp+60h] [rbp-A0h]
  POINTL v53; // [rsp+68h] [rbp-98h] BYREF
  ULONG v54; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrca; // [rsp+78h] [rbp-88h]
  SURFOBJ *v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  SURFOBJ *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  char v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+A4h] [rbp-5Ch]
  _QWORD v62[4]; // [rsp+A8h] [rbp-58h] BYREF
  POINTL *v63; // [rsp+C8h] [rbp-38h]
  POINTL *v64; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *v65; // [rsp+D8h] [rbp-28h]
  CLIPOBJ *v66; // [rsp+E0h] [rbp-20h]
  BRUSHOBJ *v67; // [rsp+E8h] [rbp-18h]
  RECTL v68; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v69; // [rsp+100h] [rbp+0h] BYREF
  RECTL v70; // [rsp+110h] [rbp+10h] BYREF

  v56 = psoDest;
  v65 = pxlo;
  v53 = (POINTL)pca;
  v64 = pptlHTOrg;
  v63 = pptlMask;
  v67 = pbo;
  v66 = pco;
  v58 = psoMask;
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
    v54 = v26;
    v29 = 0;
    left = prclDest->left;
    v52 = 0;
    if ( prclDest->left > right )
    {
      prclDest->left = right;
      prclDest->right = left;
      v52 = 1;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      v29 = 1;
      prclDest->bottom = top;
    }
    memset(v62, 0, sizeof(v62));
    *(_QWORD *)&v69.left = 0LL;
    v33 = 0LL;
    LOBYTE(v69.right) = 0;
    v69.bottom = 0;
    v59 = 0LL;
    v34 = gajRop3[BYTE1(rop4)];
    v60 = 0;
    v61 = 0;
    v53 = 0LL;
    v35 = gajRop3[(unsigned __int8)rop4] | v34;
    v36 = v35 | 0x10000;
    if ( (unsigned __int8)rop4 == BYTE1(rop4) )
      v36 = v35;
    v57 = v36;
    if ( (v36 & 0x10000) != 0 )
    {
      v42 = SURFOBJ_TO_SURFACE(v58);
      v43 = prclDest->right - prclDest->left;
      v44 = prclDest->bottom - prclDest->top;
      HIDWORD(v62[0]) = v43;
      LODWORD(v62[1]) = v44;
      LODWORD(v62[0]) = 1;
      v62[2] = 0LL;
      LODWORD(v42) = *(_DWORD *)(v42 + 112) & 0x40000;
      *(_QWORD *)&v68.left = 0LL;
      LODWORD(v62[3]) = v42;
      v68.right = v43;
      v68.bottom = v44;
      if ( v52 )
      {
        v68.left = v43;
        v68.right = 0;
      }
      if ( v29 )
      {
        v68.top = v44;
        v68.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)v62, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v59 )
        goto LABEL_30;
      x = v63->x;
      y = v63->y;
      v70.right = v63->x + prclSrc->right - prclSrc->left;
      v70.bottom = y + prclSrc->bottom - prclSrc->top;
      v70.left = x;
      v70.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v59 + 24), v58, 0LL, 0LL, 0LL, 0LL, &v53, &v68, &v70, 0LL, v54) )
        goto LABEL_30;
      v33 = *(_QWORD *)&v69.left;
      LOBYTE(v36) = v57;
    }
    if ( (v36 & 0xD4) != 0 )
    {
      v37 = prclDest->right - prclDest->left;
      v38 = prclDest->bottom - prclDest->top;
      LODWORD(v62[0]) = *(_DWORD *)(v16 + 96);
      v39 = *(_DWORD *)(v16 + 112) & 0x40000;
      HIDWORD(v62[0]) = v37;
      LODWORD(v62[1]) = v38;
      v62[2] = 0LL;
      LODWORD(v62[3]) = v39;
      *(_QWORD *)&v68.left = 0LL;
      v68.right = v37;
      v68.bottom = v38;
      if ( v52 )
      {
        v68.left = v37;
        v68.right = 0;
      }
      if ( v29 )
      {
        v68.top = v38;
        v68.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v69, (struct _DEVBITMAPINFO *)v62, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v69.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v69.left + 24LL),
              psoSrca,
              0LL,
              0LL,
              0LL,
              0LL,
              &v53,
              &v68,
              prclSrc,
              0LL,
              v54) )
      {
        goto LABEL_30;
      }
      v33 = *(_QWORD *)&v69.left;
    }
    if ( v33 )
      v28 = v33 + 24;
    v40 = SURFACE::pfnBitBlt((SURFACE *)v14);
    LODWORD(v28) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v40)(
                     v56,
                     v28,
                     v41,
                     v66,
                     v65,
                     prclDest,
                     &v53,
                     &v53,
                     v67,
                     v64,
                     rop4);
LABEL_30:
    SURFMEM::~SURFMEM((SURFMEM *)&v59);
    SURFMEM::~SURFMEM((SURFMEM *)&v69);
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
      v69 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v69);
      v24 = psoSrca;
      v23 = v56;
      if ( psoSrca == v56 && (unsigned int)bIntersect(prclSrc, &v69, v50, v51) )
        v21 = EngStretchBlt;
      goto LABEL_6;
    }
LABEL_55:
    v21 = EngStretchBlt;
    goto LABEL_56;
  }
  v23 = v56;
  v24 = psoSrca;
LABEL_6:
  if ( rop4 != 52428 )
    v22 = v58;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v21)(
           v23,
           v24,
           v22,
           v66,
           v65,
           v53,
           v64,
           prclDest,
           prclSrc,
           v63,
           iMode);
}
