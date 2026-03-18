/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988
 * Callers:
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C0050CD0 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C0050D40 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C00571F0 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C0057310 (NtGdiEngTextOut.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C00577A0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiEngStretchBlt @ 0x1C00579B0 (NtGdiEngStretchBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiEngLockSurface @ 0x1C0134170 (NtGdiEngLockSurface.c)
 *     NtGdiEngUnlockSurface @ 0x1C0138170 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngCopyBits @ 0x1C0149620 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA824 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AAD40 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AAE40 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AAEB0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AAF30 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AAFA0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02AB0E0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AB1D0 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB240 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB4D0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB570 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCreateClip @ 0x1C02AB640 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02AB6F0 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02AB780 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB810 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AB990 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02ABBA0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABFD0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AC1E0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC390 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC800 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ACB30 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02ACE00 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02AD050 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AD160 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AD3A0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD4E0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AD630 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02AD740 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AD950 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02ADAD0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02ADCA0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02ADD50 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02ADF00 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AE020 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02AE140 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02AE1B0 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02AE2E0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02AE490 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AE5A0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02AE610 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( !a1 )
    return 0LL;
  v1 = (char *)a1 + 40;
  v2 = (char *)*((_QWORD *)a1 + 5);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(v2 - 40);
}
