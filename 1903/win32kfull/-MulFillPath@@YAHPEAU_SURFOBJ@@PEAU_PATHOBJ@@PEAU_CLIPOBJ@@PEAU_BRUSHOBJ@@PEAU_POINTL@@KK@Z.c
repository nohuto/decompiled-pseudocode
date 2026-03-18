/*
 * XREFs of ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029C6D0
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C0078A80 (EngFillPath.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027B110 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0299E18 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A064 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029A210 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029A2C0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C029EBCC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C029F924 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C029FD74 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffFillPath @ 0x1C02C1500 (OffFillPath.c)
 */

__int64 __fastcall MulFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  DHPDEV dhpdev; // rsi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int i; // eax
  struct SURFACE *v15; // rax
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  _DWORD v18[14]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[56]; // [rsp+90h] [rbp-70h] BYREF
  struct _DISPSURF *v20; // [rsp+C8h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  _BYTE v24[88]; // [rsp+F0h] [rbp-10h] BYREF
  SURFOBJ *pso; // [rsp+148h] [rbp+48h]
  struct _RECTFX prectfx; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v27; // [rsp+170h] [rbp+70h] BYREF

  dhpdev = a1->dhpdev;
  v12 = 1;
  v13 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v24, a1);
    v12 = EngFillPath(pso, ppo, a3, a4, pptlBrushOrg, mix, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v24);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v18,
    a4,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v18[0] )
  {
    *(_QWORD *)&v27.left = 0LL;
    *(_QWORD *)&v27.right = 0LL;
    *(_QWORD *)&prectfx.xLeft = 0LL;
    *(_QWORD *)&prectfx.xRight = 0LL;
    PATHOBJ_vGetBounds(ppo, &prectfx);
    v27.left = prectfx.xLeft >> 4;
    v27.top = prectfx.yTop >> 4;
    v27.right = (prectfx.xRight >> 4) + 2;
    v27.bottom = (prectfx.yBottom >> 4) + 2;
    for ( i = MSURF::bFindSurface((MSURF *)v19, a1, a3, &v27); i; i = MSURF::bNextSurface((MSURF *)v19) )
    {
      PATHOBJ_vEnumStart(ppo);
      v15 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v21);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v18, v20, v15);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) & 0x40) != 0 )
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v20 + 7) + 2808LL);
      else
        v16 = EngFillPath;
      v12 &= OffFillPath(v16, v23, v21, ppo, v22, a4, pptlBrushOrg, mix, flOptions);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v18, *((_DWORD *)v20 + 4));
    }
    return v12;
  }
  return v13;
}
