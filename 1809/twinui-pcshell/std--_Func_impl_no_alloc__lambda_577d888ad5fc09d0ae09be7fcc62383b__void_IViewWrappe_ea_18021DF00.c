/*
 * XREFs of std::_Func_impl_no_alloc__lambda_577d888ad5fc09d0ae09be7fcc62383b__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x18021DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021FA4C (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_577d888ad5fc09d0ae09be7fcc62383b__void_IViewWrapperInternal_____ptr64_::_Do_call(
        __int64 a1,
        struct IViewWrapperInternal **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViewEventDispatcher::_HostChanged(*(ViewEventDispatcher **)(a1 + 8), *a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2711LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v2);
}
