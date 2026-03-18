/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x1800C5AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        const struct CRegion **a2)
{
  const struct CRegion *v2; // r8

  v2 = (const struct CRegion *)*((_QWORD *)this + 3);
  if ( !v2 || !**(_DWORD **)v2 )
    v2 = 0LL;
  *a2 = v2;
  return 0LL;
}
