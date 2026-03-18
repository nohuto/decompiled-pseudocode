/*
 * XREFs of ?Release@CD3DResource@@UEAAKXZ @ 0x1800684B0
 * Callers:
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800F0BE0 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CD3DResource::Release(CD3DSurface *this)
{
  return CD3DSurface::Release(this);
}
