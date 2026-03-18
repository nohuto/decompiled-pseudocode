/*
 * XREFs of EngGradientFill @ 0x1C00909F0
 * Callers:
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0279800 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027DB20 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0280290 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0286750 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0090478 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C0090C94 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0145A64 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngGradientFill(
        SURFOBJ *psoDest,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  __int64 v13; // r13
  int v14; // r14d
  RECTL v15; // xmm0
  struct SURFACE *v16; // rax
  struct SURFACE *v17; // r12
  int v18; // eax
  BOOL v19; // r14d
  LONG left; // eax
  LONG right; // ecx
  LONG v23; // eax
  LONG top; // ecx
  LONG v25; // eax
  LONG bottom; // ecx
  LONG v27; // eax
  LONG v28; // edx
  LONG v29; // r8d
  TRIVERTEX *v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  LONG v33; // ecx
  LONG v34; // edx
  __int64 v35; // rax
  size_t Size; // [rsp+28h] [rbp-99h]
  int v37; // [rsp+50h] [rbp-71h]
  struct _XLATEOBJ *v38; // [rsp+58h] [rbp-69h] BYREF
  struct _GRADIENT_RECT *v39; // [rsp+60h] [rbp-61h]
  __int64 v40; // [rsp+68h] [rbp-59h] BYREF
  char v41; // [rsp+70h] [rbp-51h]
  int v42; // [rsp+74h] [rbp-4Dh]
  __int64 v43; // [rsp+78h] [rbp-49h] BYREF
  struct _RECTL *v44; // [rsp+80h] [rbp-41h]
  struct _RECTL v45; // [rsp+90h] [rbp-31h] BYREF
  RECTL v46; // [rsp+A0h] [rbp-21h] BYREF

  v39 = (struct _GRADIENT_RECT *)pMesh;
  v44 = prclExtents;
  v38 = pxlo;
  v13 = SURFOBJ_TO_SURFACE(psoDest);
  v40 = 0LL;
  v14 = 0;
  v41 = 0;
  v42 = 0;
  v43 = *(_QWORD *)(v13 + 48);
  v37 = 0;
  PDEVOBJ::vSync((PDEVOBJ *)&v43, psoDest, 0LL, 0);
  v15 = *prclExtents;
  v46 = *prclExtents;
  if ( pco && pco->iDComplexity )
  {
    left = v46.left;
    if ( v46.left < pco->rclBounds.left )
      left = pco->rclBounds.left;
    right = pco->rclBounds.right;
    v46.left = left;
    v23 = v46.right;
    if ( v46.right > right )
      v23 = right;
    top = pco->rclBounds.top;
    v46.right = v23;
    v25 = v46.top;
    if ( v46.top < top )
      v25 = top;
    bottom = pco->rclBounds.bottom;
    v46.top = v25;
    v27 = v46.bottom;
    if ( v46.bottom > bottom )
      v27 = bottom;
    v46.bottom = v27;
    v15 = v46;
  }
  v45 = v15;
  if ( pco && pco->iDComplexity >= 2u )
    v14 = 1;
  v16 = psSetupDstSurface((struct SURFACE *)v13, &v45, (struct SURFMEM *)&v40, v14, ulMode > 1);
  v17 = v16;
  if ( v16 )
  {
    if ( v16 != (struct SURFACE *)v13 )
    {
      v28 = v46.top;
      v29 = v46.left;
      v37 = 1;
      if ( nVertex )
      {
        v30 = pVertex;
        v31 = nVertex;
        do
        {
          v30->x -= v29;
          v30->y -= v28;
          ++v30;
          --v31;
        }
        while ( v31 );
      }
      pptlDitherOrg->x += v29;
      pptlDitherOrg->y += v28;
    }
    if ( ulMode == 2 )
    {
      LODWORD(Size) = nMesh;
      v18 = bTriangleMesh(
              v17,
              v38,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)v39,
              Size,
              2u,
              &v45,
              v44,
              pptlDitherOrg);
    }
    else
    {
      v18 = bRectangleMesh(v17, v38, pVertex, nVertex, v39, nMesh, ulMode, &v45, pptlDitherOrg);
    }
    v19 = v18;
    if ( v37 )
    {
      v32 = (*(_DWORD *)(v13 + 112) & 0x400) == 0;
      v38 = 0LL;
      if ( v32 )
        ((void (__fastcall *)(__int64, char *, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))EngCopyBits)(
          v13 + 24,
          (char *)v17 + 24,
          pco,
          xloIdent,
          &v46,
          &v38);
      else
        (*(void (__fastcall **)(__int64, __int64, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))(*(_QWORD *)(v13 + 48) + 2840LL))(
          v13 + 24,
          (__int64)v17 + 24,
          pco,
          xloIdent,
          &v46,
          &v38);
      v33 = v46.top;
      v34 = v46.left;
      if ( nVertex )
      {
        v35 = nVertex;
        do
        {
          pVertex->x += v34;
          pVertex->y += v33;
          ++pVertex;
          --v35;
        }
        while ( v35 );
      }
      pptlDitherOrg->x -= v34;
      pptlDitherOrg->y -= v33;
    }
  }
  else
  {
    EngSetLastError(8u);
    v19 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return v19;
}
