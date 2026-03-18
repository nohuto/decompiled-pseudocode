/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004D274
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C004CE40 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0098B8C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *((_DWORD *)a1 + 28);
  if ( (v4 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81), a2, a3, a4);
  if ( (v4 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1, a2, a3, a4);
  return 1LL;
}
