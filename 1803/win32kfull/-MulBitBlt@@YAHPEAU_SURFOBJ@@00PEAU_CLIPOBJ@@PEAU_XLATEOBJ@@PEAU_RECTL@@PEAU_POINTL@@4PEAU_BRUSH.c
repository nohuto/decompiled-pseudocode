/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0271F30 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02721F8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0270C10 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0270FDC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0271074 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0275644 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02756D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0275BAC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0276318 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02765FC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C027673C (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276C54 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C0296A70 (OffCopyBits.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  int v14; // ebx
  char v15; // cl
  USHORT iType; // r15
  DHPDEV dhpdev; // r14
  char v19; // si
  struct _SURFOBJ *v20; // r10
  int v21; // ecx
  int v22; // r8d
  struct _SURFOBJ *v23; // rdx
  struct _RECTL *v24; // r8
  LONG y; // ecx
  int v26; // r12d
  CLIPOBJ *v27; // rcx
  int Source; // eax
  BOOL v29; // r14d
  struct _XLATEOBJ *v30; // rsi
  __int64 v31; // r13
  struct _RECTL *v32; // rax
  ULONG *pulXlate; // rsi
  struct PALETTE *v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  ULONG iUniq; // r14d
  int v39; // r11d
  FLONG flXlate; // r9d
  ULONG v41; // r10d
  ULONG *v42; // rdx
  struct SURFACE *v43; // rax
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v46; // [rsp+70h] [rbp-90h] BYREF
  POINTL *pptlBrush; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *pbo; // [rsp+80h] [rbp-80h]
  POINTL *pptlMask; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoMask; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v52; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v53; // [rsp+A8h] [rbp-58h]
  struct _RECTL *v54; // [rsp+B0h] [rbp-50h]
  _DWORD v55[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v56[12]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v57; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v58[8]; // [rsp+110h] [rbp+10h] BYREF
  RECTL v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+144h] [rbp+44h]
  struct _DISPSURF *v62; // [rsp+148h] [rbp+48h]
  int v63[2]; // [rsp+150h] [rbp+50h]
  CLIPOBJ *pco; // [rsp+158h] [rbp+58h]
  int v65[2]; // [rsp+160h] [rbp+60h]
  BYTE v66; // [rsp+168h] [rbp+68h]
  _BYTE v67[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v68; // [rsp+198h] [rbp+98h]
  char v69; // [rsp+1A0h] [rbp+A0h]
  int v70; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoSrc; // [rsp+1C8h] [rbp+C8h]
  POINTL *pptlSrc; // [rsp+1D0h] [rbp+D0h]
  _BYTE v73[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v74; // [rsp+208h] [rbp+108h]
  char v75; // [rsp+210h] [rbp+110h]
  int v76; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoTrg; // [rsp+238h] [rbp+138h]
  RECTL *prclTrg; // [rsp+240h] [rbp+140h]

  pbo = a9;
  pptlMask = a8;
  pptlBrush = a10;
  psoMask = a3;
  v53 = a2;
  v52 = a1;
  v54 = a6;
  v14 = 0;
  v51 = IsMetaDevBitmapForMirroring(a1);
  if ( !a2 || (v15 = 1, a2->iType != 1) )
    v15 = 0;
  iType = a1->iType;
  v57 = *a6;
  if ( iType == 1 )
  {
    if ( v15 )
      return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v57, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  else if ( v15 )
  {
    return bBitBltFromScreen(a1, v53, psoMask, a4, pxlo, &v57, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  dhpdev = a1->dhpdev;
  LODWORD(v46) = 1;
  if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v58, v52, a4, a6) )
  {
    v19 = 1;
    v20 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
    v21 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
  }
  else
  {
    v19 = 0;
    v21 = 0;
    v20 = 0LL;
  }
  if ( v19 )
    v22 = *((_DWORD *)dhpdev + 4);
  else
    v22 = 0;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v56,
    (struct _BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v19 != 0)),
    v22,
    (struct _VDEV *)((unsigned __int64)dhpdev & -(__int64)(v19 != 0)),
    v20,
    v21);
  v23 = v53;
  v68 = 0LL;
  v69 = 0;
  v70 = 0;
  if ( v53 )
  {
    v24 = (struct _RECTL *)v55;
    y = a7->y;
    v55[0] = a7->x;
    v55[1] = y;
    v55[3] = v57.bottom + y - v57.top;
    v55[2] = v57.right + v55[0] - v57.left;
  }
  else
  {
    v24 = 0LL;
    v23 = 0LL;
  }
  MULTISURF::vInit((MULTISURF *)v67, v23, v24);
  if ( !v51 && iType )
  {
    v26 = (int)v46;
  }
  else
  {
    v74 = 0LL;
    v75 = 0;
    v76 = 0;
    MULTISURF::vInit((MULTISURF *)v73, v52, v54);
    v26 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    MULTISURF::~MULTISURF((MULTISURF *)v73);
  }
  if ( v19 )
  {
    if ( !v56[0] )
    {
      v27 = pco;
      if ( v60 && pco )
      {
        pco->rclBounds = v59;
        pco->iDComplexity = v66;
        v27 = pco;
      }
      if ( v61 == 1 )
        EngDeleteClip(v27);
      goto LABEL_85;
    }
    do
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v67, v62);
      v46 = 0LL;
      v29 = Source == 0;
      if ( !Source )
        goto LABEL_82;
      v30 = pxlo;
      if ( !psoSrc || !*((_DWORD *)v62 + 6) )
        goto LABEL_73;
      v31 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v32 = (struct _RECTL *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v63);
      pulXlate = *(ULONG **)(v31 + 128);
      v54 = v32;
      v34 = ppalDefault;
      v35 = *((_QWORD *)v62 + 6);
      if ( (*(_DWORD *)(v35 + 2164) & 0x100) != 0 )
      {
        v34 = DrvRealizeHalftonePalette((_QWORD *)v35, 0);
      }
      else if ( *((int *)v62 + 6) > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
      {
        v34 = *(struct PALETTE **)&pxlo[2].iSrcType;
      }
      if ( pulXlate )
        goto LABEL_51;
      if ( pxlo && pxlo[1].pulXlate )
      {
        pulXlate = pxlo[1].pulXlate;
      }
      else
      {
        v36 = SURFOBJ_TO_SURFACE_NOT_NULL(v52);
        if ( !pxlo || (pxlo->flXlate & 1) != 0 )
        {
          if ( psoSrc == v53 )
            pulXlate = *(ULONG **)(v36 + 128);
LABEL_51:
          if ( v29 )
            goto LABEL_82;
          goto LABEL_52;
        }
        if ( !*(_QWORD *)&pxlo[2].iSrcType )
        {
          v29 = 1;
          goto LABEL_51;
        }
        v34 = *(struct PALETTE **)&pxlo[2].iSrcType;
        if ( *(_DWORD *)(v31 + 96) == *(_DWORD *)(v36 + 96) )
          pulXlate = *(ULONG **)(v36 + 128);
      }
LABEL_52:
      v37 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v37 = 0x4000;
          if ( v34 == ppalDefault )
            v37 = 0x2000;
        }
      }
      if ( pxlo )
        iUniq = pxlo[1].iUniq;
      else
        iUniq = 0;
      if ( pxlo )
        v39 = *(_DWORD *)&pxlo[1].iSrcType;
      else
        v39 = 0;
      if ( pxlo )
        flXlate = pxlo[1].flXlate;
      else
        flXlate = 0;
      if ( pxlo )
        v41 = pxlo[3].iUniq;
      else
        v41 = 0;
      if ( pxlo )
        v42 = pxlo[2].pulXlate;
      else
        v42 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v46,
                           (__int64)v42,
                           v41,
                           (__int64)pulXlate,
                           *(_QWORD *)&v54[8].left,
                           (__int64)ppalDefault,
                           (__int64)v34,
                           flXlate,
                           v39,
                           iUniq,
                           v37) )
      {
        v30 = v46;
LABEL_73:
        v43 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v63);
        if ( rop4 == 52428 )
        {
          if ( (*((_DWORD *)v43 + 28) & 0x400) != 0 )
            v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v62 + 7) + 2832LL);
          else
            v44 = EngCopyBits;
          v26 &= OffCopyBits(
                   (int)v44,
                   v65[0],
                   v63[0],
                   (int)&gptlZero,
                   (__int64)psoSrc,
                   pco,
                   (__int64)v30,
                   (__int64)&v57,
                   (__int64)pptlSrc);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v56, v62, v43);
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v63) + 112) & 1) != 0 )
            v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v62 + 7) + 2824LL);
          else
            v45 = EngBitBlt;
          v26 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v45,
                   *(LONG **)v65,
                   *(__int64 *)v63,
                   &gptlZero,
                   (__int64)psoSrc,
                   (__int64)psoMask,
                   pco,
                   (__int64)v30,
                   &v57,
                   pptlSrc,
                   (__int64)pptlMask,
                   (__int64)pbo,
                   pptlBrush,
                   rop4);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v56, *((_DWORD *)v62 + 4));
        }
        goto LABEL_83;
      }
LABEL_82:
      v26 = 0;
LABEL_83:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v46);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v58) );
  }
  v14 = v26;
LABEL_85:
  MULTISURF::~MULTISURF((MULTISURF *)v67);
  return v14;
}
