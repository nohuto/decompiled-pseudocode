/*
 * XREFs of CreateDXGIFactory1 @ 0x180114B54
 * Callers:
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateDXGIFactory1(const IID *const riid, void **ppFactory)
{
  return __imp_CreateDXGIFactory1(riid, ppFactory);
}
