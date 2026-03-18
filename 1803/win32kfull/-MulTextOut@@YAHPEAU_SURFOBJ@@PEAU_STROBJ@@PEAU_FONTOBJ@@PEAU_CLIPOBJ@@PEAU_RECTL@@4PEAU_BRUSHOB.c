/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0274D30
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02498F8 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0270C10 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C0270CEC (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0270E50 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C0270E94 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0270FDC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C0271074 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0275644 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0276318 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C027673C (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffTextOut @ 0x1C029713C (OffTextOut.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *prclExtra,
        struct _RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rdi
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // r14
  RECTL *p_rclBkGround; // rcx
  struct _RECTL v19; // xmm6
  __int64 v20; // rdi
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rcx
  BOOL (__stdcall *v24)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  ULONG cGlyphs; // [rsp+68h] [rbp-A0h]
  RECTL *v27; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h]
  _DWORD v31[12]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v32[12]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v33[56]; // [rsp+118h] [rbp+10h] BYREF
  struct _DISPSURF *v34; // [rsp+150h] [rbp+48h]
  __int64 v35; // [rsp+158h] [rbp+50h]
  __int64 v36; // [rsp+160h] [rbp+58h]
  __int64 v37; // [rsp+168h] [rbp+60h]
  _BYTE v38[88]; // [rsp+178h] [rbp+70h] BYREF
  SURFOBJ *pso; // [rsp+1D0h] [rbp+C8h]

  dhpdev = a1->dhpdev;
  v15 = 1;
  v16 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v38, a1);
    v15 = EngTextOut(pso, pstro, a3, a4, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v38);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v31,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v31[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v32,
      pboOpaque,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v32[0] )
    {
      MULTIFONT::MULTIFONT((MULTIFONT *)&v29, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v17 = v30;
      if ( v30 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &pstro->rclBkGround;
        v27 = p_rclBkGround;
        cGlyphs = pstro[1].cGlyphs;
        v19 = *p_rclBkGround;
        if ( (unsigned int)MSURF::bFindSurface((MSURF *)v33, a1, a4, p_rclBkGround) )
        {
          v20 = v29;
          do
          {
            *(_QWORD *)&pstro[1].cGlyphs = 0LL;
            if ( v20 )
              *(_QWORD *)(v20 + 48) = *(_QWORD *)(v17 + 8LL * *((int *)v34 + 4) + 8);
            v21 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v35);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v31, v34, v21);
            v22 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v35);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v32, v34, v22);
            v23 = v35;
            pstro[1].cGlyphs = cGlyphs;
            *v27 = v19;
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 8) != 0 )
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v34 + 7) + 2864LL);
            else
              v24 = EngTextOut;
            v15 &= OffTextOut(v24, v37, v35, pstro, a3, v36, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v31, *((_DWORD *)v34 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v32, *((_DWORD *)v34 + 4));
            if ( v20 )
              *(_QWORD *)(v17 + 8LL * *((int *)v34 + 4) + 8) = *(_QWORD *)(v20 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v33) );
        }
        v16 = v15;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v29);
    }
  }
  return v16;
}
