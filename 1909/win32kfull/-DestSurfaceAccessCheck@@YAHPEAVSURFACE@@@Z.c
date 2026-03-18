/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A4618
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A5E44 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 28)) && (*((_WORD *)a1 + 51) & 0x200) != 0 )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
