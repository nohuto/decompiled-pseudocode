/*
 * XREFs of EngTransparentBlt @ 0x1C00F2BB0
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C003F280 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     EngBitBlt @ 0x1C0054D60 (EngBitBlt.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02907A0 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297DB0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029E590 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C02ACE00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C005BCE8 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00F49A4 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C028BB7C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  CLIPOBJ *v8; // r15
  SURFOBJ *v10; // rsi
  int v11; // edi
  __int64 v12; // r13
  struct SURFACE *v13; // rbx
  struct _SURFOBJ *v14; // rcx
  struct _SURFOBJ *p_hdev; // rbx
  HDEV v16; // rax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // r12
  struct _RECTL rclBounds; // xmm0
  struct _XLATEOBJ *v20; // rcx
  unsigned int iBitmapFormat; // r10d
  unsigned int v22; // r9d
  unsigned int i; // ebx
  LONG left; // r8d
  LONG v25; // r11d
  LONG top; // ecx
  LONG v27; // ecx
  LONG bottom; // edx
  int v29; // ecx
  int v30; // eax
  __int64 (__fastcall *v31)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  HDEV v32; // rax
  __int64 v33; // rax
  ULONG v35; // [rsp+60h] [rbp-318h]
  struct _SURFOBJ *v36; // [rsp+68h] [rbp-310h] BYREF
  LONG v37; // [rsp+70h] [rbp-308h]
  int v38; // [rsp+74h] [rbp-304h]
  unsigned int v39; // [rsp+78h] [rbp-300h]
  struct _XLATEOBJ *v40; // [rsp+80h] [rbp-2F8h]
  __int64 v41; // [rsp+88h] [rbp-2F0h] BYREF
  char v42; // [rsp+90h] [rbp-2E8h]
  int v43; // [rsp+94h] [rbp-2E4h]
  SURFOBJ *v44; // [rsp+98h] [rbp-2E0h]
  CLIPOBJ *v45; // [rsp+A0h] [rbp-2D8h]
  __int64 v46; // [rsp+A8h] [rbp-2D0h] BYREF
  char v47; // [rsp+B0h] [rbp-2C8h]
  int v48; // [rsp+B4h] [rbp-2C4h]
  HDEV hdev; // [rsp+B8h] [rbp-2C0h] BYREF
  HDEV v50; // [rsp+C0h] [rbp-2B8h] BYREF
  HDEV *v51; // [rsp+C8h] [rbp-2B0h]
  struct SURFACE *v52; // [rsp+D0h] [rbp-2A8h]
  __int64 v53; // [rsp+D8h] [rbp-2A0h]
  CLIPOBJ *v54; // [rsp+E0h] [rbp-298h]
  _DWORD v55[2]; // [rsp+E8h] [rbp-290h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-288h]
  int v57; // [rsp+F8h] [rbp-280h]
  int v58; // [rsp+FCh] [rbp-27Ch]
  HDEV v59; // [rsp+100h] [rbp-278h]
  _QWORD v60[3]; // [rsp+110h] [rbp-268h] BYREF
  int v61; // [rsp+128h] [rbp-250h]
  int v62; // [rsp+12Ch] [rbp-24Ch]
  int v63; // [rsp+130h] [rbp-248h]
  int v64; // [rsp+134h] [rbp-244h]
  LONG lDelta; // [rsp+138h] [rbp-240h]
  LONG v66; // [rsp+13Ch] [rbp-23Ch]
  int v67; // [rsp+140h] [rbp-238h]
  int v68; // [rsp+144h] [rbp-234h]
  int v69; // [rsp+148h] [rbp-230h]
  LONG v70; // [rsp+14Ch] [rbp-22Ch]
  int v71; // [rsp+150h] [rbp-228h]
  struct _SURFOBJ *v72; // [rsp+158h] [rbp-220h]
  unsigned int v73; // [rsp+19Ch] [rbp-1DCh]
  unsigned int v74; // [rsp+1A0h] [rbp-1D8h]
  ULONG v75; // [rsp+1A4h] [rbp-1D4h]
  struct _RECTL v76; // [rsp+1B0h] [rbp-1C8h] BYREF
  RECTL v77; // [rsp+1C0h] [rbp-1B8h] BYREF
  struct _RECTL v78; // [rsp+1D0h] [rbp-1A8h] BYREF
  _DWORD v79[84]; // [rsp+1E0h] [rbp-198h] BYREF

  v40 = pxlo;
  v8 = pco;
  v36 = psoSrc;
  v10 = psoDst;
  v44 = psoDst;
  v45 = pco;
  v35 = iTransColor;
  v11 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v12 = SURFOBJ_TO_SURFACE(psoDst);
    v13 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
    v76 = *prclDst;
    v77 = *prclSrc;
    hdev = v10->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v10, 0LL, 0);
    v50 = v36->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v50, v36, 0LL, 0);
    v78 = (struct _RECTL)0LL;
    v54 = v8;
    v46 = 0LL;
    v47 = 0;
    v48 = 0;
    v14 = (struct _SURFOBJ *)psSetupTransparentSrcSurface(
                               v13,
                               (struct SURFACE *)v12,
                               &v76,
                               0LL,
                               &v77,
                               (struct SURFMEM *)&v46,
                               1u,
                               iTransColor);
    v36 = v14;
    if ( v14 )
    {
      if ( v76.left != v76.right )
      {
        p_hdev = (struct _SURFOBJ *)&v14->hdev;
        v51 = &v14->hdev;
        v41 = 0LL;
        v42 = 0;
        v43 = 0;
        v53 = v12;
        v78 = v76;
        v16 = v10->hdev;
        v59 = v16;
        if ( *(_WORD *)(v12 + 100) && (*((_DWORD *)v16 + 10) & 0x80u) != 0 )
        {
          v11 = GreTransparentBltPS(v10, p_hdev, v8, v40, &v76, &v77, iTransColor);
          goto LABEL_56;
        }
        v17 = psSetupDstSurface((struct SURFACE *)v12, &v76, (struct SURFMEM *)&v41, 0, 1);
        v18 = v17;
        v52 = v17;
        if ( !v17 )
        {
LABEL_56:
          SURFMEM::~SURFMEM((SURFMEM *)&v41);
          goto LABEL_57;
        }
        if ( v17 != (struct SURFACE *)v12 )
        {
          v10 = (SURFOBJ *)((char *)v17 + 24);
          v44 = (SURFOBJ *)((char *)v17 + 24);
          v8 = 0LL;
          v45 = 0LL;
        }
        v71 = 0;
        v75 = iTransColor;
        lDelta = p_hdev->lDelta;
        v66 = v10->lDelta;
        v72 = v36;
        memset(v79, 0, 0x144uLL);
        if ( v8 && v8->iDComplexity )
        {
          if ( v8->iDComplexity != 1 )
          {
            if ( v8->iDComplexity == 3 )
            {
              v35 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v8->rclBounds;
        }
        else
        {
          rclBounds = v76;
        }
        v35 = 0;
        v79[0] = 1;
        *(struct _RECTL *)&v79[1] = rclBounds;
LABEL_13:
        v20 = v40;
        if ( !v40 )
          v20 = xloIdent;
        v60[0] = v20;
        v61 = 1;
        v64 = 1;
        iBitmapFormat = v10->iBitmapFormat;
        v74 = iBitmapFormat;
        v22 = p_hdev->iBitmapFormat;
        v73 = v22;
        if ( v35 )
          goto LABEL_54;
        while ( v22 <= 6 && iBitmapFormat <= 6 || !v79[0] )
        {
          for ( i = 0; ; ++i )
          {
            v39 = i;
            if ( i >= v79[0] )
              break;
            left = v76.left;
            if ( v79[4 * i + 1] < v76.left )
              v79[4 * i + 1] = v76.left;
            if ( v79[4 * i + 3] > v76.right )
              v79[4 * i + 3] = v76.right;
            v25 = v79[4 * i + 2];
            top = v76.top;
            if ( v25 < v76.top )
            {
              v79[4 * i + 2] = v76.top;
              v25 = top;
            }
            v27 = v79[4 * i + 4];
            v37 = v27;
            bottom = v76.bottom;
            if ( v27 > v76.bottom )
            {
              v79[4 * i + 4] = v76.bottom;
              v27 = bottom;
              v37 = bottom;
            }
            if ( v25 < v27 )
            {
              v29 = v79[4 * i + 1];
              v38 = v29;
              v30 = v79[4 * i + 3];
              LODWORD(v40) = v30;
              if ( v29 < v30 )
              {
                v62 = v30 - v38;
                v63 = v37 - v25;
                v67 = v77.left - left + v29;
                v68 = v77.left - left + (_DWORD)v40;
                v69 = v38;
                v70 = v25;
                v60[1] = (char *)v51[7] + (v25 + v77.top - v76.top) * *((_DWORD *)v51 + 16);
                v60[2] = (char *)v10->pvScan0 + v25 * v10->lDelta;
                if ( (*(_DWORD *)(v60[0] + 4LL) & 1) != 0 && v22 == iBitmapFormat )
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v22 - 7))(v60);
                else
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v22 + iBitmapFormat - 7))(v60);
                iBitmapFormat = v74;
                v22 = v73;
              }
            }
          }
          if ( !v35 )
          {
            if ( (struct SURFACE *)v12 != v18 )
            {
              v33 = *(_QWORD *)(v12 + 48);
              v36 = 0LL;
              if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
                (*(void (__fastcall **)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct _SURFOBJ **))(v33 + 2840))(
                  v12 + 24,
                  v10,
                  v54,
                  xloIdent,
                  &v78,
                  &v36);
              else
                ((void (__fastcall *)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct _SURFOBJ **))EngCopyBits)(
                  v12 + 24,
                  v10,
                  v54,
                  xloIdent,
                  &v78,
                  &v36);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v41);
            SURFMEM::~SURFMEM((SURFMEM *)&v46);
            LODWORD(v31) = 1;
            return (int)v31;
          }
LABEL_54:
          v35 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, v79, 0LL);
          iBitmapFormat = v74;
          v22 = v73;
        }
        goto LABEL_56;
      }
      v11 = 1;
    }
LABEL_57:
    SURFMEM::~SURFMEM((SURFMEM *)&v46);
    LODWORD(v31) = v11;
    return (int)v31;
  }
  v55[1] = 0;
  v58 = 0;
  v32 = psoDst->hdev;
  if ( !v32 )
    v32 = psoSrc->hdev;
  v55[0] = iTransColor;
  v57 = 0;
  v56 = 0LL;
  v31 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)v32 + 354);
  if ( v31 )
    LODWORD(v31) = v31(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v55, 0LL, 52394);
  return (int)v31;
}
