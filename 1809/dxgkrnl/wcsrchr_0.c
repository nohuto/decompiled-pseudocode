/*
 * XREFs of wcsrchr_0 @ 0x1C00207BF
 * Callers:
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z @ 0x1C0016E98 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z.c)
 *     DpiGdoCreateServiceEntry @ 0x1C0147D38 (DpiGdoCreateServiceEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsrchr_0(const wchar_t *Str, wchar_t Ch)
{
  return wcsrchr(Str, Ch);
}
