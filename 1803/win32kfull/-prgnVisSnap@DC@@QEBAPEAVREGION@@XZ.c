/*
 * XREFs of ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0078610 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     GreGetAppClipBox @ 0x1C009B63C (GreGetAppClipBox.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009D650 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C00E4180 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C012E870 (NtGdiOffsetClipRgn.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnVisSnap(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 194) )
    return (struct REGION *)*((_QWORD *)v1 + 192);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 192);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 192);
  return result;
}
