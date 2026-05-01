/*
 * XREFs of ??1XamlLauncherState@@UEAA@XZ @ 0x180319C64
 * Callers:
 *     ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180311700 (--_EXamlLauncherState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x180045EB4 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18005F840 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180060088 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18011FFC0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18031129C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031A0AC (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18031DEE8 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall XamlLauncherState::~XamlLauncherState(XamlLauncherState *this)
{
  char *v2; // rcx
  FocusHoldingTank *v3; // rdi
  struct _TP_TIMER *v4; // rcx
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  struct _TP_TIMER *v8; // rcx
  struct _TP_TIMER *v9; // rcx

  *(_QWORD *)this = &XamlLauncherState::`vftable';
  *((_QWORD *)this + 3) = &XamlLauncherState::`vftable'{for `IXamlLauncherState'};
  *((_QWORD *)this + 4) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 5) = &XamlLauncherState::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 6) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  XamlLauncherState::CancelStartTelemetryTimeout(this, 0);
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  XamlLauncherState::CancelCortanaTelemetryTimeout(this);
  v2 = (char *)*((_QWORD *)this + 132);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (FocusHoldingTank *)*((_QWORD *)this + 126);
  *((_QWORD *)this + 126) = 0LL;
  if ( v3 )
  {
    FocusHoldingTank::~FocusHoldingTank(v3);
    operator delete(v3, (const struct std::nothrow_t *)0x18);
  }
  WindowsDeleteString(*((HSTRING *)this + 125));
  *((_QWORD *)this + 125) = 0LL;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 120);
  if ( v4 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 119);
  if ( v5 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 118);
  if ( v6 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v6);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 117);
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 116);
  if ( v8 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v8);
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 115);
  if ( v9 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v9);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((XamlLauncherState *)((char *)this + 608));
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((XamlLauncherState *)((char *)this + 296));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
