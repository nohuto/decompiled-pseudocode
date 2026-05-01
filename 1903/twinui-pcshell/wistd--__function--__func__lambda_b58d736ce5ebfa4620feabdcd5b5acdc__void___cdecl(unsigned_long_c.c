/*
 * XREFs of wistd::__function::__func__lambda_b58d736ce5ebfa4620feabdcd5b5acdc__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18030DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180322AEC (-OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_b58d736ce5ebfa4620feabdcd5b5acdc__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int active; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 8) + 728LL);
  if ( v2 )
  {
    active = KeyboardHosting::TabTipAdapter::OnLockScreenActiveChanged(v2, *a2 != 0);
    if ( active < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8BE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)active);
  }
}
