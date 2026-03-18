/*
 * XREFs of ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618
 * Callers:
 *     hsurfCreateCompatibleSurface @ 0x1C0008EB4 (hsurfCreateCompatibleSurface.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     EngStretchBltROP @ 0x1C009FBB0 (EngStretchBltROP.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     EngPaint @ 0x1C011CCC0 (EngPaint.c)
 *     SimBitBlt @ 0x1C0243FDC (SimBitBlt.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

int (*__fastcall SURFACE::pfnBitBlt(
        SURFACE *this))(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_DWORD *)this + 28) & 1) != 0 )
    return *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_QWORD *)this + 6) + 2824LL);
  else
    return EngBitBlt;
}
