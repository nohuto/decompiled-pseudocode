/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14
 * Callers:
 *     GreGetAppClipBox @ 0x1C00590F8 (GreGetAppClipBox.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00759DC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreRectVisible @ 0x1C0075A84 (GreRectVisible.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F31C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F360 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiGetPixel @ 0x1C0080060 (NtGdiGetPixel.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00FA93C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00FB5F8 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C00FB994 (GreSetBoundsRect.c)
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028E0C8 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C0299820 (NtGdiPtVisible.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02B7A60 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
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
