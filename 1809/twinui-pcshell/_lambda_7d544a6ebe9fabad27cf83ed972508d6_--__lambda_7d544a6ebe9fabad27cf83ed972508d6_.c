/*
 * XREFs of _lambda_7d544a6ebe9fabad27cf83ed972508d6_::__lambda_7d544a6ebe9fabad27cf83ed972508d6_ @ 0x18026ABC4
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0b0ea29adb38baec39914485464e8775____::_1_::dtor$0 @ 0x18026514D (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_0b0ea29adb38baec39914485464e877.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_7d544a6ebe9fabad27cf83ed972508d6____::_1_::dtor$0 @ 0x1802655DD (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animat.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$7 @ 0x18026F7C3 (_MonitorFrame--DismissAnimated_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7d544a6ebe9fabad27cf83ed972508d6_::__lambda_7d544a6ebe9fabad27cf83ed972508d6_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
