/*
 * XREFs of _lambda_5e3471c756f87189046196c55c94088a_::operator() @ 0x1802C4AE8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_5e3471c756f87189046196c55c94088a__void_::Invoke @ 0x1802CB220 (Platform--Details--__abi_FunctorCapture__lambda_5e3471c756f87189046196c55c94088a__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802B3A08 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x1802B6320 (-get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Com.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1802B6408 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802BB6C8 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x1802C74A0 (-Cloak@MonitorFrame@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_5e3471c756f87189046196c55c94088a_::operator()(MonitorFrame **a1, bool a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, __int64, __int64 *); // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64 *); // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 result; // rax
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+10h]

  MonitorFrame::Cloak(*a1, a2);
  v6 = Windows::UI::Xaml::Window::Current::get(v3, v2, v4, v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Xaml::IWindow::Content::get(v7);
  v9 = __abi_winrt_cast_to(
         0,
         v8,
         (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v10 = __abi_winrt_ptr_ctor(v9);
  v11 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v10;
  v17 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v10;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v8)[2])(v8);
  try
  {
    v12 = __abi_winrt_cast_to(
            0,
            v11,
            (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v13 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get(v12);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 56LL))(v13, 0LL);
    if ( (int)result < 0 )
      __abi_WinRTraiseException(result);
    if ( v13 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  catch ( ... )
  {
    result = wil::details::in1diag3::Log_CaughtException(
               retaddr,
               (void *)0x35,
               (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
               v15);
    v11 = v17;
  }
  if ( v11 )
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v11)[2])(v11);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return result;
}
