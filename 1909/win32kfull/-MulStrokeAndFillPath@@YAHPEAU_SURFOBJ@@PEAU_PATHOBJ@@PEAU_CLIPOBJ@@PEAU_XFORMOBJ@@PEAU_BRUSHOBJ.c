/*
 * XREFs of ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029D5F0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokeAndFillPath @ 0x1C014C680 (EngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C0150628 (OffStrokeAndFillPath.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027AA50 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0299868 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0299AB4 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0299C60 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0299D10 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C029E61C (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C029F374 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C029F7C4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        struct _BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // r14d
  FLOAT_LONG v14; // ebx
  unsigned int v15; // edi
  int i; // eax
  struct SURFACE *v17; // rax
  struct SURFACE *v18; // rax
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v23[12]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v24[14]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v25[56]; // [rsp+F0h] [rbp-10h] BYREF
  struct _DISPSURF *v26; // [rsp+128h] [rbp+28h]
  SURFOBJ *v27; // [rsp+130h] [rbp+30h]
  CLIPOBJ *v28; // [rsp+138h] [rbp+38h]
  int *v29; // [rsp+140h] [rbp+40h]
  _BYTE v30[88]; // [rsp+150h] [rbp+50h] BYREF
  SURFOBJ *pso; // [rsp+1A8h] [rbp+A8h]
  struct _RECTFX prectfx; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v33; // [rsp+1D0h] [rbp+D0h] BYREF

  dhpdev = a1->dhpdev;
  v13 = 1;
  LODWORD(v14.e) = plineattrs->elStyleState;
  v15 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v30, a1);
    v13 = EngStrokeAndFillPath(pso, ppo, a3, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v30);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v23,
    pboStroke,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v23[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v24,
      pboFill,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v24[0] )
    {
      *(_QWORD *)&v33.left = 0LL;
      *(_QWORD *)&v33.right = 0LL;
      *(_QWORD *)&prectfx.xLeft = 0LL;
      *(_QWORD *)&prectfx.xRight = 0LL;
      PATHOBJ_vGetBounds(ppo, &prectfx);
      v33.left = prectfx.xLeft >> 4;
      v33.top = prectfx.yTop >> 4;
      v33.right = (prectfx.xRight >> 4) + 2;
      v33.bottom = (prectfx.yBottom >> 4) + 2;
      for ( i = MSURF::bFindSurface((MSURF *)v25, a1, a3, &v33); i; i = MSURF::bNextSurface((MSURF *)v25) )
      {
        plineattrs->elStyleState = v14;
        PATHOBJ_vEnumStart(ppo);
        v17 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v23, v26, v17);
        v18 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v24, v26, v18);
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x80u) == 0 )
          v19 = EngStrokeAndFillPath;
        else
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v26 + 7) + 2816LL);
        v13 &= OffStrokeAndFillPath(
                 (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))v19,
                 v29,
                 v27,
                 ppo,
                 v28,
                 a4,
                 pboStroke,
                 plineattrs,
                 pboFill,
                 pptlBrushOrg,
                 mixFill,
                 flOptions);
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v23, *((_DWORD *)v26 + 4));
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v24, *((_DWORD *)v26 + 4));
      }
      return v13;
    }
  }
  return v15;
}
