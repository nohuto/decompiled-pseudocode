/*
 * XREFs of EngTransparentBlt @ 0x1C00B1C40
 * Callers:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00B2220 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02667A0 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C026D6A0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275060 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C0284600 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00A212C (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00B0764 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0261E8C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
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
  struct SURFACE *v12; // r13
  struct SURFACE *v13; // rbx
  struct SURFACE *v14; // rcx
  struct _SURFOBJ *v15; // rbx
  HDEV v16; // rax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // r12
  struct _RECTL rclBounds; // xmm0
  XLATEOBJ *v20; // rcx
  unsigned int iBitmapFormat; // r10d
  unsigned int v22; // r9d
  unsigned int i; // ebx
  LONG v24; // ecx
  LONG v25; // r11d
  LONG top; // edx
  LONG v27; // edx
  LONG bottom; // r8d
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  HDEV v32; // rax
  unsigned int v34; // [rsp+60h] [rbp-318h]
  struct SURFACE *v36; // [rsp+68h] [rbp-310h]
  LONG v37; // [rsp+70h] [rbp-308h]
  __int64 v39; // [rsp+88h] [rbp-2F0h] BYREF
  char v40; // [rsp+90h] [rbp-2E8h]
  int v41; // [rsp+94h] [rbp-2E4h]
  SURFOBJ *v42; // [rsp+98h] [rbp-2E0h]
  CLIPOBJ *v43; // [rsp+A0h] [rbp-2D8h]
  __int64 v44; // [rsp+A8h] [rbp-2D0h] BYREF
  char v45; // [rsp+B0h] [rbp-2C8h]
  int v46; // [rsp+B4h] [rbp-2C4h]
  HDEV hdev; // [rsp+B8h] [rbp-2C0h] BYREF
  HDEV v48; // [rsp+C0h] [rbp-2B8h] BYREF
  char *v49; // [rsp+C8h] [rbp-2B0h]
  struct SURFACE *v50; // [rsp+D0h] [rbp-2A8h]
  struct SURFACE *v51; // [rsp+D8h] [rbp-2A0h]
  CLIPOBJ *v52; // [rsp+E0h] [rbp-298h]
  ULONG v53; // [rsp+E8h] [rbp-290h]
  __int64 v54; // [rsp+F0h] [rbp-288h]
  int v55; // [rsp+F8h] [rbp-280h]
  HDEV v56; // [rsp+100h] [rbp-278h]
  XLATEOBJ *v57; // [rsp+110h] [rbp-268h]
  __int64 v58; // [rsp+118h] [rbp-260h]
  char *v59; // [rsp+120h] [rbp-258h]
  int v60; // [rsp+128h] [rbp-250h]
  int v61; // [rsp+12Ch] [rbp-24Ch]
  int v62; // [rsp+130h] [rbp-248h]
  int v63; // [rsp+134h] [rbp-244h]
  LONG lDelta; // [rsp+138h] [rbp-240h]
  LONG v65; // [rsp+13Ch] [rbp-23Ch]
  int v66; // [rsp+140h] [rbp-238h]
  int v67; // [rsp+144h] [rbp-234h]
  int v68; // [rsp+148h] [rbp-230h]
  LONG v69; // [rsp+14Ch] [rbp-22Ch]
  int v70; // [rsp+150h] [rbp-228h]
  struct SURFACE *v71; // [rsp+158h] [rbp-220h]
  unsigned int v72; // [rsp+19Ch] [rbp-1DCh]
  unsigned int v73; // [rsp+1A0h] [rbp-1D8h]
  ULONG v74; // [rsp+1A4h] [rbp-1D4h]
  struct _RECTL v75; // [rsp+1B0h] [rbp-1C8h] BYREF
  RECTL v76; // [rsp+1C0h] [rbp-1B8h] BYREF
  struct _RECTL v77; // [rsp+1D0h] [rbp-1A8h]
  unsigned int v78; // [rsp+1E0h] [rbp-198h] BYREF
  _OWORD v79[20]; // [rsp+1E4h] [rbp-194h]

  v8 = pco;
  v10 = psoDst;
  v42 = psoDst;
  v43 = pco;
  v34 = iTransColor;
  v11 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v12 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoDst);
    v13 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
    v75 = *prclDst;
    v76 = *prclSrc;
    hdev = v10->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v10, 0LL, 0);
    v48 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v48, psoSrc, 0LL, 0);
    v52 = v8;
    v44 = 0LL;
    v45 = 0;
    v46 = 0;
    v14 = psSetupTransparentSrcSurface(v13, v12, &v75, 0LL, &v76, (struct SURFMEM *)&v44, 1u, iTransColor);
    v36 = v14;
    if ( v14 )
    {
      if ( v75.left != v75.right )
      {
        v15 = (struct _SURFOBJ *)((char *)v14 + 24);
        v49 = (char *)v14 + 24;
        v39 = 0LL;
        v40 = 0;
        v41 = 0;
        v51 = v12;
        v77 = v75;
        v16 = v10->hdev;
        v56 = v16;
        if ( *((_WORD *)v12 + 50) && (*((_DWORD *)v16 + 10) & 0x80u) != 0 )
        {
          v11 = GreTransparentBltPS(v10, v15, v8, pxlo, &v75, &v76, iTransColor);
          goto LABEL_53;
        }
        v17 = psSetupDstSurface(v12, &v75, (struct SURFMEM *)&v39, 0, 1);
        v18 = v17;
        v50 = v17;
        if ( !v17 )
        {
LABEL_53:
          SURFMEM::~SURFMEM((SURFMEM *)&v39);
          goto LABEL_54;
        }
        if ( v17 != v12 )
        {
          v10 = (SURFOBJ *)((char *)v17 + 24);
          v42 = (SURFOBJ *)((char *)v17 + 24);
          v8 = 0LL;
          v43 = 0LL;
        }
        v70 = 0;
        v74 = iTransColor;
        lDelta = v15->lDelta;
        v65 = v10->lDelta;
        v71 = v36;
        if ( v8 && v8->iDComplexity )
        {
          if ( v8->iDComplexity != 1 )
          {
            if ( v8->iDComplexity == 3 )
            {
              v34 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v8->rclBounds;
        }
        else
        {
          rclBounds = v75;
        }
        v34 = 0;
        v78 = 1;
        v79[0] = rclBounds;
LABEL_13:
        v20 = pxlo;
        if ( !pxlo )
          v20 = xloIdent;
        v57 = v20;
        v60 = 1;
        v63 = 1;
        iBitmapFormat = v10->iBitmapFormat;
        v73 = iBitmapFormat;
        v22 = v15->iBitmapFormat;
        v72 = v22;
        if ( v34 )
          goto LABEL_51;
        while ( v22 <= 6 && iBitmapFormat <= 6 || !v78 )
        {
          for ( i = 0; i < v78; ++i )
          {
            if ( SLODWORD(v79[i]) < v75.left )
              LODWORD(v79[i]) = v75.left;
            if ( SDWORD2(v79[i]) > v75.right )
              DWORD2(v79[i]) = v75.right;
            v24 = DWORD1(v79[i]);
            v25 = v24;
            top = v75.top;
            if ( v24 < v75.top )
            {
              DWORD1(v79[i]) = v75.top;
              v24 = top;
              v25 = top;
            }
            v27 = HIDWORD(v79[i]);
            v37 = v27;
            bottom = v75.bottom;
            if ( v27 > v75.bottom )
            {
              HIDWORD(v79[i]) = v75.bottom;
              v27 = bottom;
              v37 = bottom;
            }
            if ( v24 < v27 )
            {
              v29 = v79[i];
              v30 = DWORD2(v79[i]);
              if ( v29 < v30 )
              {
                v61 = v30 - v29;
                v62 = v37 - v25;
                v66 = v76.left - v75.left + v29;
                v67 = v76.left - v75.left + v30;
                v68 = v29;
                v69 = v25;
                v58 = *((_QWORD *)v49 + 7) + (v25 + v76.top - v75.top) * *((_DWORD *)v49 + 16);
                v59 = (char *)v10->pvScan0 + v25 * v10->lDelta;
                _guard_dispatch_icall_fptr();
              }
            }
          }
          if ( !v34 )
          {
            if ( v12 != v18 )
              _guard_dispatch_icall_fptr();
            SURFMEM::~SURFMEM((SURFMEM *)&v39);
            SURFMEM::~SURFMEM((SURFMEM *)&v44);
            LODWORD(v31) = 1;
            return v31;
          }
LABEL_51:
          v34 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v78, 0LL);
          iBitmapFormat = v73;
          v22 = v72;
        }
        goto LABEL_53;
      }
      v11 = 1;
    }
LABEL_54:
    SURFMEM::~SURFMEM((SURFMEM *)&v44);
    LODWORD(v31) = v11;
    return v31;
  }
  v32 = psoDst->hdev;
  if ( !v32 )
    v32 = psoSrc->hdev;
  v53 = iTransColor;
  v55 = 0;
  v54 = 0LL;
  v31 = *((_QWORD *)v32 + 353);
  if ( v31 )
    LODWORD(v31) = _guard_dispatch_icall_fptr();
  return v31;
}
