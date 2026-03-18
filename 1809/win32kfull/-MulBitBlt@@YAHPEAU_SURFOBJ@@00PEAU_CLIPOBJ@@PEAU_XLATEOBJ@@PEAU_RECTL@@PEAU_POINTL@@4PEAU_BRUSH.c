/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0284F40 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0285238 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025768C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0261A64 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0283BB4 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0283FAC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C028405C (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0288944 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02889D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0288ED0 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289674 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C028997C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0289AC4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C028A028 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x1C028A11C (-vRestore@MSURF@@QEAAXXZ.c)
 *     OffCopyBits @ 0x1C02AA74C (OffCopyBits.c)
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
  int Source; // eax
  BOOL v28; // r14d
  struct _XLATEOBJ *v29; // rsi
  __int64 v30; // r13
  struct _RECTL *v31; // rax
  ULONG *pulXlate; // rsi
  struct PALETTE *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  ULONG iUniq; // r14d
  int v38; // r11d
  FLONG flXlate; // r9d
  ULONG v40; // r10d
  ULONG *v41; // rdx
  struct SURFACE *v42; // rax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v45; // [rsp+70h] [rbp-90h] BYREF
  POINTL *pptlBrush; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *pbo; // [rsp+80h] [rbp-80h]
  POINTL *pptlMask; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoMask; // [rsp+90h] [rbp-70h]
  int v50; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v51; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v52; // [rsp+A8h] [rbp-58h]
  struct _RECTL *v53; // [rsp+B0h] [rbp-50h]
  _DWORD v54[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v55[12]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v56; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v57[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v58; // [rsp+148h] [rbp+48h]
  int v59[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v60; // [rsp+158h] [rbp+58h]
  int v61[2]; // [rsp+160h] [rbp+60h]
  _BYTE v62[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v63; // [rsp+198h] [rbp+98h]
  char v64; // [rsp+1A0h] [rbp+A0h]
  int v65; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoSrc; // [rsp+1C8h] [rbp+C8h]
  POINTL *pptlSrc; // [rsp+1D0h] [rbp+D0h]
  _BYTE v68[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v69; // [rsp+208h] [rbp+108h]
  char v70; // [rsp+210h] [rbp+110h]
  int v71; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoTrg; // [rsp+238h] [rbp+138h]
  RECTL *prclTrg; // [rsp+240h] [rbp+140h]

  pbo = a9;
  pptlMask = a8;
  pptlBrush = a10;
  psoMask = a3;
  v52 = a2;
  v51 = a1;
  v53 = a6;
  v14 = 0;
  v50 = IsMetaDevBitmapForMirroring(a1);
  if ( !a2 || (v15 = 1, a2->iType != 1) )
    v15 = 0;
  iType = a1->iType;
  v56 = *a6;
  if ( iType == 1 )
  {
    if ( v15 )
      return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v56, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  else if ( v15 )
  {
    return bBitBltFromScreen(a1, v52, psoMask, a4, pxlo, &v56, a7, pptlMask, pbo, pptlBrush, rop4);
  }
  dhpdev = a1->dhpdev;
  LODWORD(v45) = 1;
  if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v57, v51, a4, a6) )
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
    (MULTIBRUSH *)v55,
    (struct _BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v19 != 0)),
    v22,
    (struct _VDEV *)((unsigned __int64)dhpdev & -(__int64)(v19 != 0)),
    v20,
    v21);
  v23 = v52;
  v63 = 0LL;
  v64 = 0;
  v65 = 0;
  if ( v52 )
  {
    v24 = (struct _RECTL *)v54;
    y = a7->y;
    v54[0] = a7->x;
    v54[1] = y;
    v54[3] = v56.bottom + y - v56.top;
    v54[2] = v56.right + v54[0] - v56.left;
  }
  else
  {
    v24 = 0LL;
    v23 = 0LL;
  }
  MULTISURF::vInit((MULTISURF *)v62, v23, v24);
  if ( !v50 && iType )
  {
    v26 = (int)v45;
  }
  else
  {
    v69 = 0LL;
    v70 = 0;
    v71 = 0;
    MULTISURF::vInit((MULTISURF *)v68, v51, v53);
    v26 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    MULTISURF::~MULTISURF((MULTISURF *)v68);
  }
  if ( !v19 )
  {
LABEL_80:
    v14 = v26;
    goto LABEL_81;
  }
  if ( v55[0] )
  {
    while ( 1 )
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v62, v58);
      v45 = 0LL;
      v28 = Source == 0;
      if ( !Source )
        goto LABEL_78;
      v29 = pxlo;
      if ( !psoSrc || !*((_DWORD *)v58 + 6) )
        goto LABEL_69;
      v30 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v31 = (struct _RECTL *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v59);
      pulXlate = *(ULONG **)(v30 + 128);
      v53 = v31;
      v33 = ppalDefault;
      v34 = *((_QWORD *)v58 + 6);
      if ( (*(_DWORD *)(v34 + 2172) & 0x100) != 0 )
      {
        v33 = DrvRealizeHalftonePalette((_QWORD *)v34, 0);
      }
      else if ( *((int *)v58 + 6) > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
      {
        v33 = *(struct PALETTE **)&pxlo[2].iSrcType;
      }
      if ( pulXlate )
        goto LABEL_47;
      if ( pxlo && pxlo[1].pulXlate )
      {
        pulXlate = pxlo[1].pulXlate;
      }
      else
      {
        v35 = SURFOBJ_TO_SURFACE_NOT_NULL(v51);
        if ( !pxlo || (pxlo->flXlate & 1) != 0 )
        {
          if ( psoSrc == v52 )
            pulXlate = *(ULONG **)(v35 + 128);
LABEL_47:
          if ( v28 )
            goto LABEL_78;
          goto LABEL_48;
        }
        if ( !*(_QWORD *)&pxlo[2].iSrcType )
        {
          v28 = 1;
          goto LABEL_47;
        }
        v33 = *(struct PALETTE **)&pxlo[2].iSrcType;
        if ( *(_DWORD *)(v30 + 96) == *(_DWORD *)(v35 + 96) )
          pulXlate = *(ULONG **)(v35 + 128);
      }
LABEL_48:
      v36 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v36 = 0x4000;
          if ( v33 == ppalDefault )
            v36 = 0x2000;
        }
      }
      if ( pxlo )
        iUniq = pxlo[1].iUniq;
      else
        iUniq = 0;
      if ( pxlo )
        v38 = *(_DWORD *)&pxlo[1].iSrcType;
      else
        v38 = 0;
      if ( pxlo )
        flXlate = pxlo[1].flXlate;
      else
        flXlate = 0;
      if ( pxlo )
        v40 = pxlo[3].iUniq;
      else
        v40 = 0;
      if ( pxlo )
        v41 = pxlo[2].pulXlate;
      else
        v41 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v45,
                           (__int64)v41,
                           v40,
                           (__int64)pulXlate,
                           *(_QWORD *)&v53[8].left,
                           (__int64)ppalDefault,
                           (__int64)v33,
                           flXlate,
                           v38,
                           iUniq,
                           v36) )
      {
        v29 = v45;
LABEL_69:
        v42 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v59);
        if ( rop4 == 52428 )
        {
          if ( (*((_DWORD *)v42 + 28) & 0x400) != 0 )
            v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v58 + 7) + 2840LL);
          else
            v43 = EngCopyBits;
          v26 &= OffCopyBits(
                   (int)v43,
                   v61[0],
                   v59[0],
                   (int)&gptlZero,
                   (__int64)psoSrc,
                   v60,
                   (__int64)v29,
                   (__int64)&v56,
                   (__int64)pptlSrc);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v55, v58, v42);
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v59) + 112) & 1) != 0 )
            v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v58 + 7) + 2832LL);
          else
            v44 = EngBitBlt;
          v26 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v44,
                   *(int **)v61,
                   *(__int64 *)v59,
                   &gptlZero,
                   (__int64)psoSrc,
                   (__int64)psoMask,
                   v60,
                   (__int64)v29,
                   &v56,
                   pptlSrc,
                   (__int64)pptlMask,
                   (__int64)pbo,
                   pptlBrush,
                   rop4);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v55, *((_DWORD *)v58 + 4));
        }
        goto LABEL_79;
      }
LABEL_78:
      v26 = 0;
LABEL_79:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v57) )
        goto LABEL_80;
    }
  }
  MSURF::vRestore((MSURF *)v57);
LABEL_81:
  MULTISURF::~MULTISURF((MULTISURF *)v62);
  return v14;
}
