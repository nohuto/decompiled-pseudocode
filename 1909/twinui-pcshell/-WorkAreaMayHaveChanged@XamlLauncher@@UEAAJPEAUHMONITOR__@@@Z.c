/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1803160B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1803167F4 (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  ImmersiveMonitorHelper *v6; // rbx
  int Monitor; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+40h] [rbp+8h] BYREF
  HMONITOR v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 30);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 120LL))(*((_QWORD *)this + 30)) )
  {
    v10 = 0LL;
    v6 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    Monitor = ImmersiveMonitorHelper::GetMonitor(v6, &v10);
    v8 = Monitor;
    if ( Monitor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)Monitor);
LABEL_10:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
      return (unsigned int)v8;
    }
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, HMONITOR *))(*(_QWORD *)v10 + 40LL))(v10, &v11);
    if ( v8 < 0 )
      goto LABEL_10;
    if ( a2 == v11 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
      if ( v8 < 0 )
        goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
