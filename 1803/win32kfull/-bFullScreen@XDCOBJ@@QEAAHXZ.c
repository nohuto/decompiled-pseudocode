/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C
 * Callers:
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreGetAppClipBox @ 0x1C009B63C (GreGetAppClipBox.c)
 *     GreExtTextOutRect @ 0x1C009D380 (GreExtTextOutRect.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     GrePolyTextOutW @ 0x1C00DB94C (GrePolyTextOutW.c)
 *     GreGetBoundsRect @ 0x1C00DE048 (GreGetBoundsRect.c)
 *     NtGdiFastPolyPolyline @ 0x1C00E27E0 (NtGdiFastPolyPolyline.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247998 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0248434 (GreDrawEscape.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C024F110 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C0288210 (NtGdiUpdateColors.c)
 *     NtGdiSwapBuffers @ 0x1C028AA70 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)this + 504LL) )
    return 1LL;
  v2 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v2 & 0x1000) != 0 && (v2 & 0x4000) == 0 )
    return 1LL;
  return result;
}
