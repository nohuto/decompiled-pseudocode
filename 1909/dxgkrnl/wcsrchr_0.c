/*
 * XREFs of wcsrchr_0 @ 0x1C002339F
 * Callers:
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z @ 0x1C0018FA8 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z.c)
 *     DpiGdoCreateServiceEntry @ 0x1C0160DFC (DpiGdoCreateServiceEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsrchr_0(const wchar_t *Str, wchar_t Ch)
{
  return wcsrchr(Str, Ch);
}
