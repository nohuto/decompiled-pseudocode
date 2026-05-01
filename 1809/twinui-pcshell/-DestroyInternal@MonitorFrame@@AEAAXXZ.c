/*
 * XREFs of ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18026F394
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x1802682F0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1802682F0.c)
 *     wil::details::ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___::_ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___ @ 0x18026AFC0 (wil--details--ScopeExitFn__lambda_8f7c4272537cd39965ba6040b29ee2e3___--_ScopeExitFn__lambda_8f7c.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef___ @ 0x1802653FC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1802684A4 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18027C860 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MonitorFrame::DestroyInternal(MonitorFrame *this)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9[6]; // [rsp+38h] [rbp-30h] BYREF
  MonitorFrame *v10; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+80h] [rbp+18h]
  __int64 v13; // [rsp+88h] [rbp+20h]

  v10 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v8[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64)this;
  if ( *((_QWORD *)this + 11) )
  {
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v11 = v2;
    v3 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(v9, v8);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef___(v2, v3);
    v11 = v4;
    v5 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 11));
    v12 = v5;
    v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(v5, 0LL, (__int64)v4);
    v7 = v6;
    v13 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v7);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 16LL))(v4, v7);
  }
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
}
