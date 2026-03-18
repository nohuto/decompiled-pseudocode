/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DA8C
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009D650 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00AD89C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 28);
  if ( (v1 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81));
  if ( (v1 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1);
  return 1LL;
}
