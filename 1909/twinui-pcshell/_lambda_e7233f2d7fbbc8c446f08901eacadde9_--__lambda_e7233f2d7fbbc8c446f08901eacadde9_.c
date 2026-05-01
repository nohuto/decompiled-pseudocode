/*
 * XREFs of _lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x1802E3284
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___::_scalar_deleting_destructor_ @ 0x1802E54A0 (XamlExplorerHostWindowCreatedCallback__lambda_e7233f2d7fbbc8c446f08901eacadde9___--_scalar_delet.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E6C3C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$13 @ 0x1802E743E (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$13.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802E396C (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)(a1 + 12));
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[10];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[9];
  if ( v4 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[8];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[7];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[2];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(a1);
}
