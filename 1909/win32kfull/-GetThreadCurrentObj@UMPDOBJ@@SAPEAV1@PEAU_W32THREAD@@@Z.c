/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218
 * Callers:
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C009A530 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009A5A0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C00A0A80 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C00A1030 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiEngStretchBlt @ 0x1C00A1240 (NtGdiEngStretchBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiEngLockSurface @ 0x1C010ECC0 (NtGdiEngLockSurface.c)
 *     NtGdiEngUnlockSurface @ 0x1C0112170 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA374 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AA890 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AA990 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AAA00 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AAA80 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AAAF0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02AAC30 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AAD20 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AAD90 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB020 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB0C0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCreateClip @ 0x1C02AB190 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02AB240 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02AB2D0 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB360 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AB4E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AB6F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABB20 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02ABD30 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ABEE0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AC680 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AC950 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02ACBA0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ACCB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ACEF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD030 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AD180 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02AD290 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AD4A0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AD620 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02AD7F0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AD8A0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02ADA50 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02ADB70 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02ADC90 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02ADD00 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02ADE30 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02ADFE0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AE0F0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02AE160 (NtGdiXLATEOBJ_iXlate.c)
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
