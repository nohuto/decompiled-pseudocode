/*
 * XREFs of ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x1802C6B4C
 * Callers:
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802D02E0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802BBDC8 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a___ @ 0x1802BE0E4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x1802D6110 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MonitorFrame::BeginInvokeAnimation(MonitorFrame *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  MonitorFrame *v7; // [rsp+60h] [rbp+8h] BYREF
  MonitorFrame *v8; // [rsp+68h] [rbp+10h] BYREF
  MonitorFrame *v9; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp+20h]

  if ( *((_QWORD *)this + 11) )
  {
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v9 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = v2;
    v7 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v3 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a___(
           v2,
           (__int64 *)&v7);
    v10 = v3;
    v4 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 11));
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(v4, 1LL, (__int64)v3);
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 16LL))(v3, v6);
    (*(void (__fastcall **)(MonitorFrame *, __int64))(*(_QWORD *)this + 16LL))(this, v6);
    (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  }
}
