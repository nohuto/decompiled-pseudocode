/*
 * XREFs of ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802E8C10
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1802E9070 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlAllUpViewHost::GetMonitorForHWND(
        XamlAllUpViewHost *this,
        HWND a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  struct IImmersiveMonitor *v8; // rbx
  struct IImmersiveMonitor *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 41);
  v6 = *((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 2147647531LL;
    if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)v4 + 48LL)) == a2 )
      break;
    v4 += 8LL;
  }
  v8 = *(struct IImmersiveMonitor **)(*(_QWORD *)v4 + 40LL);
  v9 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  *a3 = v8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
