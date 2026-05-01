/*
 * XREFs of _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x1802E0988
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775___ @ 0x1802DD4AC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x1802DD93C (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_ @ 0x1802E1620 (Platform--Details--__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_--__abi_F.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_::__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_ @ 0x1802E1694 (Platform--Details--__abi_FunctorCapture__lambda_7d544a6ebe9fabad27cf83ed972508d6__void_--__abi_F.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1802E7CF0 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  return a1;
}
