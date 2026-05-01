/*
 * XREFs of wistd::__function::__func__lambda_b831841adf57eb5961716974160120e3__void___cdecl(void)_::operator() @ 0x18030DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180321144 (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_b831841adf57eb5961716974160120e3__void___cdecl_void__::operator()(
        __int64 a1)
{
  KeyboardHosting::TabTipAdapter *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 8) + 728LL);
  if ( v1 )
  {
    v2 = KeyboardHosting::TabTipAdapter::OnDpiChanged(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
}
