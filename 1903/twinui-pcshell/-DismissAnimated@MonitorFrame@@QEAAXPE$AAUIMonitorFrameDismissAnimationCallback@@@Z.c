/*
 * XREFs of ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1802C8810
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x1802C11E4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802BBDC8 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775___ @ 0x1802BDF7C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802BE40C (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x1802C145C (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x1802D6110 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall MonitorFrame::DismissAnimated(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rbx
  __int64 *v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16[3]; // [rsp+60h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+50h]
  RTL_SRWLOCK *v19; // [rsp+D0h] [rbp+58h]
  _QWORD *v20; // [rsp+D8h] [rbp+60h]

  v18 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v18 = v3;
  AcquireSRWLockExclusive(a1 + 23);
  v19 = a1 + 23;
  if ( a1[11].Ptr )
  {
    v17 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v20 = v4;
    v14[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    v14[1] = __abi_winrt_ptr_ctor(v3);
    v5 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_7d544a6ebe9fabad27cf83ed972508d6___(
           v4,
           v14);
    v20 = v5;
    v6 = __abi_winrt_ptr_ctor((__int64)v5);
    v20 = (_QWORD *)v6;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v15[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v7 = __abi_winrt_ptr_ctor(v6);
    v15[1] = v7;
    v8 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v9 = lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(v16, v15);
    v10 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775___(v8, v9);
    v11 = Windows::UI::Xaml::IWindow::Dispatcher::get(a1[11].Ptr);
    v12 = Windows::UI::Core::ICoreDispatcher::RunAsync(v11, 0LL, (__int64)v10);
    v13 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v13);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 16LL))(v10, v13);
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v13);
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))a1->Ptr + 2))(a1, v13);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  }
  if ( a1 != (RTL_SRWLOCK *)-184LL )
    ReleaseSRWLockExclusive(a1 + 23);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
