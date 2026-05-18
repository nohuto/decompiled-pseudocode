/*
 * XREFs of D2D1CreateFactory @ 0x180114B4E
 * Callers:
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 *     sub_18003F5A0 @ 0x18003F5A0 (sub_18003F5A0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall D2D1CreateFactory(
        D2D1_FACTORY_TYPE factoryType,
        const IID *const riid,
        const D2D1_FACTORY_OPTIONS *pFactoryOptions,
        void **ppIFactory)
{
  return __imp_D2D1CreateFactory(factoryType, riid, pFactoryOptions, ppIFactory);
}
