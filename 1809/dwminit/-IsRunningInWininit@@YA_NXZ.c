/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x180001504
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180002F10 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x180002F80 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800033C0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
