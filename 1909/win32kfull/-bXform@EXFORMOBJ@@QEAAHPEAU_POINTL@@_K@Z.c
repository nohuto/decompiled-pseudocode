/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C01256C4
 * Callers:
 *     GreGetAppClipBox @ 0x1C00A29F8 (GreGetAppClipBox.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGradientFill @ 0x1C0124B4C (GreGradientFill.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C012548C (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreRectVisible @ 0x1C0125534 (GreRectVisible.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0125B1C (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0125B64 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C0127818 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C0127BB4 (GreSetBoundsRect.c)
 *     NtGdiGetPixel @ 0x1C0128580 (NtGdiGetPixel.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028DAA4 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C0299270 (NtGdiPtVisible.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02B75B0 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ecx
  int v6; // eax

  v3 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v3 + 32) & 0x43) == 0x43 )
    return 1;
  v6 = bCvtPts1(v3, a2, a3);
  v4 = 0;
  if ( v6 )
    return 1;
  return v4;
}
