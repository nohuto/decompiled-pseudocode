/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A4C0
 * Callers:
 *     <none>
 * Callees:
 *     OffAlphaBlend @ 0x1C003FBB0 (OffAlphaBlend.c)
 *     EngAlphaBlend @ 0x1C005B220 (EngAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0270FBC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027B110 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029A210 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C029B498 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C029F924 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029FC2C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C029FD74 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A02D0 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v7; // edi
  struct _RECTL *v9; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ebx
  int Surface; // eax
  int v17; // r15d
  int v18; // r12d
  BOOL v19; // r14d
  __int64 v20; // rax
  struct _XLATEOBJ *v21; // r15
  __int64 v22; // r12
  ULONG *pulXlate; // r15
  struct PALETTE *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r10d
  FLONG flXlate; // r9d
  int v29; // r12d
  ULONG iUniq; // r14d
  ULONG v31; // r8d
  ULONG *v32; // rdx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  BOOL v35; // [rsp+60h] [rbp-A0h]
  struct PALETTE *v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  struct _SURFOBJ *v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h] BYREF
  char v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  _BYTE v52[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h]
  char v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+124h] [rbp+24h]
  SURFOBJ *psoSrc; // [rsp+148h] [rbp+48h]
  RECTL *prclSrc; // [rsp+150h] [rbp+50h]
  _BYTE v58[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v59; // [rsp+198h] [rbp+98h]
  int v60[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v61; // [rsp+1A8h] [rbp+A8h]
  int v62[2]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v63[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  char v65; // [rsp+1F0h] [rbp+F0h]
  int v66; // [rsp+1F4h] [rbp+F4h]
  SURFOBJ *psoDest; // [rsp+218h] [rbp+118h]
  RECTL *prclDest; // [rsp+220h] [rbp+120h]
  struct _RECTL v69; // [rsp+230h] [rbp+130h] BYREF

  v7 = 0;
  v9 = a6;
  v49 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v50 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v13 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  v45 = a1;
  v51 = v13;
  v38 = a2;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  v14 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 48);
  v69 = *a6;
  if ( a2->iType != 1 || !v14 || (*(_DWORD *)(v14 + 40) & 0x20000) == 0 )
  {
LABEL_8:
    v35 = 1;
    v15 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v58, a1, a3, a5);
    v53 = 0LL;
    v17 = Surface;
    v54 = 0;
    v55 = 0;
    MULTISURF::vInit((MULTISURF *)v52, v38, v9);
    if ( v15 )
    {
      v64 = 0LL;
      v65 = 0;
      v66 = 0;
      MULTISURF::vInit((MULTISURF *)v63, v45, a5);
      v35 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v18 = v35;
      MULTISURF::~MULTISURF((MULTISURF *)v63);
    }
    else
    {
      v18 = 1;
    }
    if ( !v17 )
    {
LABEL_64:
      v7 = v18;
      MULTISURF::~MULTISURF((MULTISURF *)v52);
      goto LABEL_65;
    }
    while ( 1 )
    {
      v44 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      v41 = 0LL;
      v19 = MULTISURF::bLoadSource((MULTISURF *)v52, v59) == 0;
      v40 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60);
      if ( v19 )
        goto LABEL_62;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(psoSrc);
      v21 = a4;
      v22 = v20;
      v39 = v20;
      if ( !*((_DWORD *)v59 + 6) )
        goto LABEL_55;
      pulXlate = *(ULONG **)(v20 + 128);
      v24 = ppalDefault;
      v25 = *((_QWORD *)v59 + 6);
      v36 = ppalDefault;
      if ( (*(_DWORD *)(v25 + 2172) & 0x100) != 0 )
      {
        v24 = DrvRealizeHalftonePalette((_QWORD *)v25, 0);
        v36 = v24;
      }
      if ( pulXlate )
        goto LABEL_28;
      if ( a4 && a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
      }
      else
      {
        v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
        if ( !a4 || (a4->flXlate & 1) != 0 )
        {
          if ( psoSrc == v38 )
            pulXlate = *(ULONG **)(v26 + 128);
LABEL_28:
          if ( v19 )
            goto LABEL_62;
          goto LABEL_29;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v19 = 1;
          goto LABEL_28;
        }
        v24 = *(struct PALETTE **)&a4[2].iSrcType;
        v36 = v24;
        if ( *(_DWORD *)(v39 + 96) == *(_DWORD *)(v26 + 96) )
          pulXlate = *(ULONG **)(v26 + 128);
      }
LABEL_29:
      v27 = 0;
      if ( pulXlate )
      {
        if ( (pulXlate[6] & 0x800) != 0 )
        {
          v27 = 0x4000;
          if ( v24 == ppalDefault )
            v27 = 0x2000;
        }
      }
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      v37 = flXlate;
      if ( a4 )
        v29 = *(_DWORD *)&a4[1].iSrcType;
      else
        v29 = 0;
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v31 = a4[3].iUniq;
      else
        v31 = 0;
      if ( a4 )
        v32 = a4[2].pulXlate;
      else
        v32 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v44,
                           (__int64)v32,
                           v31,
                           (__int64)pulXlate,
                           *(_QWORD *)(v40 + 128),
                           (__int64)ppalDefault,
                           (__int64)v36,
                           flXlate,
                           v29,
                           iUniq,
                           v27) )
      {
        *(_QWORD *)&v69.left = v44;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v43,
                             0LL,
                             0,
                             *(_QWORD *)(v40 + 128),
                             (__int64)gppalRGB,
                             (__int64)v36,
                             (__int64)v36,
                             v37,
                             v29,
                             iUniq,
                             0) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v43;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v42,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v40 + 128),
                               (__int64)v36,
                               (__int64)v36,
                               v37,
                               v29,
                               iUniq,
                               0) )
          {
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v42;
            if ( psoSrc == v38 )
              goto LABEL_54;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v41,
                                 0LL,
                                 0,
                                 *(_QWORD *)(v39 + 128),
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v36,
                                 v37,
                                 v29,
                                 iUniq,
                                 0) )
            {
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v41;
LABEL_54:
              v22 = v39;
              v21 = *(struct _XLATEOBJ **)&v69.left;
LABEL_55:
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v60) + 112) & 0x10000) != 0 )
                v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v59 + 7) + 3256LL);
              else
                v33 = EngAlphaBlend;
              if ( psoSrc->iType == 1 && *(_QWORD *)(v22 + 48) != *(_QWORD *)(v40 + 48) )
                v33 = EngAlphaBlend;
              v18 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, __int64))v33,
                      *(int **)v62,
                      *(__int64 *)v60,
                      (int *)&gptlZero,
                      (__int64)psoSrc,
                      v61,
                      (__int64)v21,
                      (__int64 *)&a5->left,
                      (__int64 *)&prclSrc->left,
                      (__int64)pBlendObj) & v35;
              goto LABEL_63;
            }
          }
        }
      }
LABEL_62:
      v18 = 0;
LABEL_63:
      *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v49;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v50;
      *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v51;
      v35 = v18;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v41);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v42);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v44);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v58) )
        goto LABEL_64;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v46, &v69) )
  {
    if ( !v46 )
    {
      v7 = 1;
      goto LABEL_65;
    }
    v9 = &v69;
    v38 = (struct _SURFOBJ *)(v46 + 24);
    SURFOBJ_TO_SURFACE_NOT_NULL(v46 + 24);
    goto LABEL_8;
  }
LABEL_65:
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v7;
}
