/*
 * XREFs of D3D11CreateDevice @ 0x180114B48
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_18003D3F0 @ 0x18003D3F0 (sub_18003D3F0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall D3D11CreateDevice(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        HMODULE Software,
        UINT Flags,
        const D3D_FEATURE_LEVEL *pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        ID3D11Device **ppDevice,
        D3D_FEATURE_LEVEL *pFeatureLevel,
        ID3D11DeviceContext **ppImmediateContext)
{
  return __imp_D3D11CreateDevice(
           pAdapter,
           DriverType,
           Software,
           Flags,
           pFeatureLevels,
           FeatureLevels,
           SDKVersion,
           ppDevice,
           pFeatureLevel,
           ppImmediateContext);
}
