/*
 * XREFs of ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18005CA80
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ @ 0x1801976E4 (-RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1803A1554 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1803A24B4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall ARI::ProcessToken::SysAppId::OpenTokenForProcess(HANDLE ProcessHandle, PHANDLE TokenHandle, void **a3)
{
  if ( ProcessHandle == GetCurrentProcess() )
  {
    *TokenHandle = (void *)-4LL;
    return 0;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, TokenHandle) )
    return 0;
  return GetLastError();
}
