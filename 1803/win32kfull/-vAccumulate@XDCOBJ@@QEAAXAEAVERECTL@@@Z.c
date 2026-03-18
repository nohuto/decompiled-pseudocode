/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiSetPixel @ 0x1C008E4B0 (NtGdiSetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreRectangle @ 0x1C00F6F20 (GreRectangle.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0242890 (DxgkEngAccumD3DPresentBounds.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C0288210 (NtGdiUpdateColors.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  XDCOBJ *v2; // r8
  __int64 v3; // rcx

  v2 = this;
  v3 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v3 + 36) & 0x20) != 0 )
  {
    ERECTL::operator|=(v3 + 1472, a2, v2);
    v3 = *(_QWORD *)v2;
  }
  if ( (*(_DWORD *)(v3 + 36) & 0x80u) != 0 )
    ERECTL::operator|=(v3 + 1504, a2, v2);
}
