/*
 * XREFs of ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0286750
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngGradientFill @ 0x1C00909F0 (EngGradientFill.c)
 *     OffGradientFill @ 0x1C014BA34 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025768C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0261A64 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0283FAC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289674 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0289AC4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C028A028 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  __int64 v11; // r12
  unsigned int v15; // r14d
  int i; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  XLATEOBJ *v19; // rdi
  __int64 v20; // rcx
  struct PALETTE *v21; // r11
  ULONG iUniq; // r10d
  int v23; // r9d
  FLONG flXlate; // ecx
  ULONG v25; // r8d
  ULONG *pulXlate; // rdx
  int inited; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  XLATEOBJ *v30; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  _BYTE v33[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  struct _CLIPOBJ *v36; // [rsp+C8h] [rbp-38h]
  LONG *v37; // [rsp+D0h] [rbp-30h]
  _BYTE v38[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+108h] [rbp+8h]
  char v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+114h] [rbp+14h]
  SURFOBJ *psoDest; // [rsp+138h] [rbp+38h]
  RECTL *prclExtents; // [rsp+140h] [rbp+40h]

  v11 = (__int64)pMesh;
  v32 = (__int64)pMesh;
  pptlDitherOrg = a9;
  v15 = 1;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    MULTISURF::vInit((MULTISURF *)v38, a1, a8);
    v15 = EngGradientFill(psoDest, a2, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v38);
  }
  for ( i = MSURF::bFindSurface((MSURF *)v33, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v33) )
  {
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v35);
    v30 = 0LL;
    v18 = v17;
    if ( *(_DWORD *)(v17 + 96) <= 3u )
    {
      v19 = pxlo;
      if ( *(_DWORD *)(v34 + 24) )
      {
        v20 = *(_QWORD *)(v34 + 48);
        v21 = ppalDefault;
        if ( (*(_DWORD *)(v20 + 2172) & 0x100) != 0 )
          v21 = DrvRealizeHalftonePalette((_QWORD *)v20, 0);
        if ( pxlo )
          iUniq = pxlo[1].iUniq;
        else
          iUniq = 0;
        if ( pxlo )
          v23 = *(_DWORD *)&pxlo[1].iSrcType;
        else
          v23 = 0;
        if ( pxlo )
          flXlate = pxlo[1].flXlate;
        else
          flXlate = 0;
        if ( pxlo )
          v25 = pxlo[3].iUniq;
        else
          v25 = 0;
        if ( pxlo )
          pulXlate = pxlo[2].pulXlate;
        else
          pulXlate = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v30,
                   (__int64)pulXlate,
                   v25,
                   (__int64)gppalRGB,
                   *(_QWORD *)(v18 + 128),
                   (__int64)v21,
                   (__int64)v21,
                   flXlate,
                   v23,
                   iUniq,
                   0);
        v11 = v32;
        if ( inited )
          v19 = v30;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v35) + 112) & 0x20000) != 0 )
      v28 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v34 + 56) + 3232LL);
    else
      v28 = EngGradientFill;
    v15 &= OffGradientFill(
             (__int64 (__fastcall *)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, _DWORD *, _DWORD *, int))v28,
             v37,
             v35,
             v36,
             (__int64)v19,
             pVertex,
             nVertex,
             v11,
             nMesh,
             a8,
             pptlDitherOrg,
             ulMode);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
  }
  return v15;
}
