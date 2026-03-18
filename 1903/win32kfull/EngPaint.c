/*
 * XREFs of EngPaint @ 0x1C01477A0
 * Callers:
 *     EngFillPath @ 0x1C0078A80 (EngFillPath.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0146DC0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     EngStrokeAndFillPath @ 0x1C014B8D0 (EngStrokeAndFillPath.c)
 *     NtGdiEngPaint @ 0x1C02AC1E0 (NtGdiEngPaint.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  SURFACE *v9; // rax
  int (*v10)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v11; // rdx
  int v12; // r8d

  v9 = (SURFACE *)SURFOBJ_TO_SURFACE(pso);
  v10 = SURFACE::pfnBitBlt(v9);
  return ((__int64 (__fastcall *)(SURFOBJ *, _QWORD, _QWORD, CLIPOBJ *, _QWORD, __int64, _QWORD, _QWORD, BRUSHOBJ *, POINTL *, int))v10)(
           pso,
           0LL,
           0LL,
           pco,
           0LL,
           v11,
           0LL,
           0LL,
           pbo,
           pptlBrushOrg,
           v12);
}
