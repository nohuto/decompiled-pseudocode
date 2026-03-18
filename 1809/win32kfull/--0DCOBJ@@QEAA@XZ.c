/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C0137840
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004CB44 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0056B24 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiSetPixel @ 0x1C0056E90 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiGetDCObject @ 0x1C0099E10 (NtGdiGetDCObject.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0099FE4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C01229A0 (NtGdiOffsetClipRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013CB98 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0141900 (NtGdiExtFloodFill.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015F82C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025FEA8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0260448 (GreDrawEscape.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C026FAD0 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiPtVisible @ 0x1C02832D0 (NtGdiPtVisible.c)
 *     NtGdiUpdateColors @ 0x1C029BF50 (NtGdiUpdateColors.c)
 *     NtGdiSetPixelFormat @ 0x1C029E5D0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  return this;
}
