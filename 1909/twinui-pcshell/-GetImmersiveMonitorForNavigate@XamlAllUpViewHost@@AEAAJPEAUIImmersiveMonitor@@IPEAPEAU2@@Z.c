/*
 * XREFs of ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x1802E8A38
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1802E9070 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetImmersiveMonitorForNavigate(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        int a3,
        struct IImmersiveMonitor **a4)
{
  struct IImmersiveMonitor **v8; // rbx
  __int64 v9; // rbx
  struct IImmersiveMonitor *v11; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct IImmersiveMonitor **)((char *)this + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 30);
  *a4 = *v8;
  v9 = *((_QWORD *)this + 29);
  if ( v9 && (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) > 1 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    if ( (*(int (__fastcall **)(__int64, bool, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 104LL))(
           v9,
           a3 == 5,
           a2,
           &v11) >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      *a4 = v11;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
