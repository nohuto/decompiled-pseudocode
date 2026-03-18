/*
 * XREFs of ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029D900
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 *     OffStrokePath @ 0x1C0150A74 (OffStrokePath.c)
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

__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  DHPDEV dhpdev; // r14
  unsigned int v11; // esi
  FLOAT_LONG v12; // ebx
  unsigned int v13; // edi
  int i; // eax
  SURFOBJ *v15; // rcx
  struct SURFACE *v16; // rax
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _DWORD v21[12]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v23; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v24; // [rsp+E0h] [rbp-20h]
  CLIPOBJ *v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  _BYTE v27[88]; // [rsp+100h] [rbp+0h] BYREF
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  struct _RECTFX prectfx; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v30; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v11 = 1;
  LODWORD(v12.e) = plineattrs->elStyleState;
  v13 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v27, a1);
    v11 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v27);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v21,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v21[0] )
  {
    *(_QWORD *)&v30.left = 0LL;
    *(_QWORD *)&v30.right = 0LL;
    *(_QWORD *)&prectfx.xLeft = 0LL;
    *(_QWORD *)&prectfx.xRight = 0LL;
    PATHOBJ_vGetBounds(ppo, &prectfx);
    v30.left = prectfx.xLeft >> 4;
    v30.top = prectfx.yTop >> 4;
    v30.right = (prectfx.xRight >> 4) + 2;
    v30.bottom = (prectfx.yBottom >> 4) + 2;
    for ( i = MSURF::bFindSurface((MSURF *)v22, a1, a3, &v30); i; i = MSURF::bNextSurface((MSURF *)v22) )
    {
      PATHOBJ_vEnumStart(ppo);
      v15 = v24;
      plineattrs->elStyleState = v12;
      v16 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v15);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v21, v23, v16);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x20) != 0 )
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v23 + 7) + 2800LL);
      else
        v17 = EngStrokePath;
      v11 &= OffStrokePath(
               (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v17,
               v26,
               v24,
               ppo,
               v25,
               a4,
               pbo,
               pptlBrushOrg,
               plineattrs,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v21, *((_DWORD *)v23 + 4));
    }
    return v11;
  }
  return v13;
}
