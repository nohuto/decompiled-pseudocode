/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x1800014F4
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180002EDC (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x180002F50 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x180003390 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
