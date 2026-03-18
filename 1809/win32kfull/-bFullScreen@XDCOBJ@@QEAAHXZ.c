/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C009C47C (GreGradientFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013CB98 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C013D130 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0141900 (NtGdiExtFloodFill.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025F864 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0260448 (GreDrawEscape.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiUpdateColors @ 0x1C029BF50 (NtGdiUpdateColors.c)
 *     NtGdiSwapBuffers @ 0x1C029E800 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
    return 1LL;
  v2 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v2 & 0x1000) != 0 && (v2 & 0x4000) == 0 )
    return 1LL;
  return result;
}
