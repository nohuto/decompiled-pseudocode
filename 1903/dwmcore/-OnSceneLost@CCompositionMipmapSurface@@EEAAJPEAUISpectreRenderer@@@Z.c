/*
 * XREFs of ?OnSceneLost@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801D1880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneLost(CCompositionMipmapSurface *this, struct ISpectreRenderer *a2)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 8);
  return 0LL;
}
