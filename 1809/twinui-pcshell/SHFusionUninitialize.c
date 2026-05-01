/*
 * XREFs of SHFusionUninitialize @ 0x1800E4788
 * Callers:
 *     DllMain @ 0x180088ECC (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 SHFusionUninitialize()
{
  __int64 result; // rax

  if ( g_hActCtx != (HANDLE)-1LL )
  {
    ReleaseActCtx(g_hActCtx);
    g_hActCtx = (HANDLE)-1LL;
  }
  result = (__int64)hModule;
  if ( hModule )
    result = -1LL;
  hModule = (HMODULE)result;
  return result;
}
