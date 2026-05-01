/*
 * XREFs of ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18029F2CC
 * Callers:
 *     ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18029EB00 (-WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::GetMonitor(ImmersiveMonitorHelper *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IImmersiveMonitor **)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 8);
  *a2 = *v2;
  return 0LL;
}
