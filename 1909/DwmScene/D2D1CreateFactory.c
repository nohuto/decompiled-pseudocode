/*
 * XREFs of D2D1CreateFactory @ 0x180114C5E
 * Callers:
 *     sub_180028B80 @ 0x180028B80 (sub_180028B80.c)
 *     sub_18003F6B0 @ 0x18003F6B0 (sub_18003F6B0.c)
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
