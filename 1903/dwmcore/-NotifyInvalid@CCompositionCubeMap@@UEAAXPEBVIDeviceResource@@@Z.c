/*
 * XREFs of ?NotifyInvalid@CCompositionCubeMap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionCubeMap::NotifyInvalid(CCompositionCubeMap *this, const struct IDeviceResource *a2)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 7);
}
