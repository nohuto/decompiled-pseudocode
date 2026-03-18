/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275060
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x1C00B28E4 (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0270FDC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02721F8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0276318 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02765FC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C027673C (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276C54 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v8; // esi
  struct _RECTL *v9; // rdi
  struct _SURFOBJ *v13; // r13
  __int64 v14; // rdx
  int v15; // ebx
  int Surface; // eax
  int v17; // r15d
  int v18; // ebx
  BOOL v19; // r12d
  __int64 v20; // rax
  struct _XLATEOBJ *v21; // r15
  ULONG *pulXlate; // rbx
  struct PALETTE *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  ULONG iUniq; // edi
  int v28; // r11d
  FLONG flXlate; // r9d
  ULONG v30; // r8d
  ULONG *v31; // r10
  int NearestIndexFromColorref; // ebx
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v38; // [rsp+60h] [rbp-A0h]
  struct PALETTE *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v41; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  char v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+9Ch] [rbp-64h]
  _BYTE v46[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  _BYTE v52[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v53; // [rsp+148h] [rbp+48h]
  int v54[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v55; // [rsp+158h] [rbp+58h]
  int v56[2]; // [rsp+160h] [rbp+60h]
  _BYTE v57[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v58; // [rsp+198h] [rbp+98h]
  char v59; // [rsp+1A0h] [rbp+A0h]
  int v60; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v63; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = a6;
  v42 = a1;
  v43 = 0LL;
  v44 = 0;
  v13 = a2;
  v45 = 0;
  v14 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v63 = *a6;
  if ( v13->iType != 1 || !v14 || (*(_DWORD *)(v14 + 40) & 0x20000) == 0 )
  {
LABEL_8:
    v38 = 1;
    v15 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v52, a1, a3, a5);
    v47 = 0LL;
    v48 = 0;
    v49 = 0;
    v17 = Surface;
    MULTISURF::vInit((MULTISURF *)v46, v13, v9);
    if ( v15 )
    {
      v58 = 0LL;
      v59 = 0;
      v60 = 0;
      MULTISURF::vInit((MULTISURF *)v57, v42, a5);
      v38 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v18 = v38;
      MULTISURF::~MULTISURF((MULTISURF *)v57);
    }
    else
    {
      v18 = 1;
    }
    if ( !v17 )
    {
LABEL_63:
      v8 = v18;
      MULTISURF::~MULTISURF((MULTISURF *)v46);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v41 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v46, v53) == 0;
      *(_QWORD *)&v63.left = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v54);
      if ( v19 )
        goto LABEL_61;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v21 = a4;
      v40 = v20;
      if ( *((_DWORD *)v53 + 6) )
        break;
LABEL_51:
      NearestIndexFromColorref = iTransColor;
      if ( psoSrc != v13 )
      {
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
        v34 = *(_QWORD *)(v40 + 128);
        v35 = ulIndexToRGB(*(_QWORD *)(v33 + 128), ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v34, ppalDefault, v35, 1LL);
      }
      if ( !v19 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v54) + 112) & 0x8000) != 0 )
          v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v53 + 7) + 3272LL);
        else
          v36 = EngTransparentBlt;
        if ( psoSrc->iType == 1 && *(_QWORD *)(v40 + 48) != *(_QWORD *)(*(_QWORD *)&v63.left + 48LL) )
          v36 = EngTransparentBlt;
        v18 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v36,
                *(LONG **)v56,
                *(__int64 *)v54,
                (int *)&gptlZero,
                (__int64)psoSrc,
                v55,
                (__int64)v21,
                a5,
                prclSrc,
                NearestIndexFromColorref,
                ulReserved) & v38;
        goto LABEL_62;
      }
LABEL_61:
      v18 = 0;
LABEL_62:
      v38 = v18;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v41);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v52) )
        goto LABEL_63;
    }
    pulXlate = *(ULONG **)(v20 + 128);
    v23 = ppalDefault;
    v24 = *((_QWORD *)v53 + 6);
    v39 = ppalDefault;
    if ( (*(_DWORD *)(v24 + 2164) & 0x100) != 0 )
    {
      v23 = DrvRealizeHalftonePalette((_QWORD *)v24, 0);
      v39 = v23;
    }
    if ( !pulXlate )
    {
      if ( a4 && a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
LABEL_29:
        v26 = 0;
        if ( pulXlate )
        {
          if ( (pulXlate[6] & 0x800) != 0 )
          {
            v26 = 0x4000;
            if ( v23 == ppalDefault )
              v26 = 0x2000;
          }
        }
        if ( a4 )
          iUniq = a4[1].iUniq;
        else
          iUniq = 0;
        if ( a4 )
          v28 = *(_DWORD *)&a4[1].iSrcType;
        else
          v28 = 0;
        if ( a4 )
          flXlate = a4[1].flXlate;
        else
          flXlate = 0;
        if ( a4 )
          v30 = a4[3].iUniq;
        else
          v30 = 0;
        if ( a4 )
          v31 = a4[2].pulXlate;
        else
          v31 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v41,
                             (__int64)v31,
                             v30,
                             (__int64)pulXlate,
                             *(_QWORD *)(*(_QWORD *)&v63.left + 128LL),
                             (__int64)ppalDefault,
                             (__int64)v39,
                             flXlate,
                             v28,
                             iUniq,
                             v26) )
        {
          v21 = v41;
        }
        else
        {
          v19 = 1;
          v21 = a4;
        }
        goto LABEL_51;
      }
      v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v42);
      if ( !a4 || (a4->flXlate & 1) != 0 )
      {
        if ( psoSrc == v13 )
          pulXlate = *(ULONG **)(v25 + 128);
      }
      else
      {
        if ( *(_QWORD *)&a4[2].iSrcType )
        {
          v23 = *(struct PALETTE **)&a4[2].iSrcType;
          v39 = v23;
          if ( *(_DWORD *)(v40 + 96) == *(_DWORD *)(v25 + 96) )
            pulXlate = *(ULONG **)(v25 + 128);
          goto LABEL_29;
        }
        v19 = 1;
      }
    }
    v21 = a4;
    if ( v19 )
      goto LABEL_51;
    goto LABEL_29;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(v13, (struct SURFMEM *)&v43, &v63) )
  {
    if ( !v43 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v13 = (struct _SURFOBJ *)(v43 + 24);
    v9 = &v63;
    SURFOBJ_TO_SURFACE_NOT_NULL(v43 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v43);
  return v8;
}
