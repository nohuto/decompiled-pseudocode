/*
 * XREFs of ?GetOcclusionInflation@CDirtyRegion@@QEBAMXZ @ 0x180065A7C
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDirtyRegion::GetOcclusionInflation(CDirtyRegion *this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4

  v1 = 0.0;
  if ( !*((_BYTE *)this + 2883) )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 719) - 1.0)) & _xmm);
    if ( v2 >= 0.0000011920929 || *((_BYTE *)this + 2885) )
      return *((float *)this + 719);
  }
  return v1;
}
