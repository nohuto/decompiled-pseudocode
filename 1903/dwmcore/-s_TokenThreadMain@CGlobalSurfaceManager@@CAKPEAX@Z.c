/*
 * XREFs of ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z @ 0x1800E2500
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800E2518 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::s_TokenThreadMain(CGlobalSurfaceManager *Parameter)
{
  CGlobalSurfaceManager::ProcessKernelTokens(Parameter);
  return 0LL;
}
