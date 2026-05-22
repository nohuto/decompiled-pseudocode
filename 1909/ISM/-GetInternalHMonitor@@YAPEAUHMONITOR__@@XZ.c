/*
 * XREFs of ?GetInternalHMonitor@@YAPEAUHMONITOR__@@XZ @ 0x1800C6700
 * Callers:
 *     ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x1800C6554 (-CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ.c)
 *     ?GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1800C66B0 (-GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

LPARAM GetInternalHMonitor(void)
{
  BOOL v0; // eax
  LPARAM dwData; // [rsp+30h] [rbp+8h] BYREF

  dwData = 0LL;
  v0 = EnumDisplayMonitors(
         0LL,
         0LL,
         (MONITORENUMPROC)lambda_4027eb8bfab1a227953126f8f5378831_::_lambda_invoker_cdecl_,
         (LPARAM)&dwData);
  return dwData & -(__int64)v0;
}
