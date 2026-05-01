/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775___ @ 0x1802DD4AC
 * Callers:
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1802E7CF0 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802D3970 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x1802E0988 (_lambda_7d544a6ebe9fabad27cf83ed972508d6_--_lambda_7d544a6ebe9fabad27cf83ed972508d6_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_ @ 0x1802E1620 (Platform--Details--__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_--__abi_F.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(v9, a2);
    v5 = Platform::Details::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_::__abi_FunctorCapture__lambda_0b0ea29adb38baec39914485464e8775__void_(
           a1 + 5,
           v4);
  }
  a1[37] = v5;
  v6 = a2[1];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
