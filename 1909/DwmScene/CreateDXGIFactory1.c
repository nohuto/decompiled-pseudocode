/*
 * XREFs of CreateDXGIFactory1 @ 0x180114C64
 * Callers:
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateDXGIFactory1(const IID *const riid, void **ppFactory)
{
  return __imp_CreateDXGIFactory1(riid, ppFactory);
}
