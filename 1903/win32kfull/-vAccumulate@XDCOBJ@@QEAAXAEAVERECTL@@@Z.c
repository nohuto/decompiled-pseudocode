/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005C9F0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     GreDrawStream @ 0x1C0070630 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     GreRectangle @ 0x1C00FA310 (GreRectangle.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0146DC0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0273EA0 (DxgkEngAccumD3DPresentBounds.c)
 *     NtGdiUpdateColors @ 0x1C02B0E00 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0073078 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // r8

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 36) & 0x20) != 0 )
  {
    ERECTL::operator|=(v2 + 1064, a2);
    v2 = *v3;
  }
  if ( (*(_DWORD *)(v2 + 36) & 0x80u) != 0 )
    ERECTL::operator|=(v2 + 1096, a2);
}
