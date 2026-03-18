/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C005AD18
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C005C6E4 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 28)) && (*((_WORD *)a1 + 51) & 0x200) != 0 )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
