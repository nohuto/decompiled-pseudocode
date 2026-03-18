/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0
 * Callers:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C00B1070 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiEngStretchBltROP @ 0x1C011DC30 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C011E7E0 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C011E990 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C011EAB0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C011EF00 (NtGdiEngStretchBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C01226F0 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngLockSurface @ 0x1C0122760 (NtGdiEngLockSurface.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0281F90 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02824A0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C0282590 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C0282600 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C0282680 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02826F0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C0282820 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C0282900 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C0282970 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C0282BE0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C0282C80 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C0282FA0 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C0283050 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02830E0 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C0283170 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02832D0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02834D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02838D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0283AD0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C0284090 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0284370 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C0284600 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C0284830 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0284940 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0284CD0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C0284E20 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C0284F30 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C0285130 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02852A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C0285460 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0285510 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02856A0 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02857B0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02858D0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C0285940 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C0285A70 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C0285C20 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C0285D30 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C0285DA0 (NtGdiXLATEOBJ_iXlate.c)
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
