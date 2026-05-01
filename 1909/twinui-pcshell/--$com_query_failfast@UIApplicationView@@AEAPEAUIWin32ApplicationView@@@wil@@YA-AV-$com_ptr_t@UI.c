/*
 * XREFs of ??$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x1800A67C0
 * Callers:
 *     ?StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802324EC (-StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationV.c)
 *     ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802326CC (-StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802328AC (-StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_query_failfast<IApplicationView,IWin32ApplicationView * &>(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x151F,
      (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
  }
  return a1;
}
