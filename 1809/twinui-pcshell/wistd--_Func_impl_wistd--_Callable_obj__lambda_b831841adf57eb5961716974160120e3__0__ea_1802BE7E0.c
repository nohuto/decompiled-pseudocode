/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_b831841adf57eb5961716974160120e3__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1802BE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802C35D4 (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_b831841adf57eb5961716974160120e3__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  KeyboardHosting::TabTipAdapter *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 8) + 696LL);
  if ( v1 )
  {
    v2 = KeyboardHosting::TabTipAdapter::OnDpiChanged(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
}
