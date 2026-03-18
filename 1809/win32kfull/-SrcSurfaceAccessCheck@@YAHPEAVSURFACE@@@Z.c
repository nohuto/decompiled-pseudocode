/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0098B8C
 * Callers:
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004D274 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !*((_DWORD *)a1 + 164) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 164) )
    return (unsigned int)_SurfaceAccessCheck(a1, a2, a3, a4);
  return v4;
}
