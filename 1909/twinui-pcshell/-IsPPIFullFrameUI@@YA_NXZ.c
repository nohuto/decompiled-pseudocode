/*
 * XREFs of ?IsPPIFullFrameUI@@YA_NXZ @ 0x18015C018
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180048430 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x1803B8D08 (-RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ.c)
 *     ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803B9010 (-TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool IsPPIFullFrameUI(void)
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\PPI\\DeviceCapabilities", L"FullFrameUI", &v1) < 0
      || v1 == 1;
}
