/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448fc___::Invoke @ 0x180053A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180053C80 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448fc___::Invoke(
        __int64 a1,
        __int64 a2)
{
  int Window; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v10; // [rsp+50h] [rbp+8h] BYREF

  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)(a1 + 48) + 152LL), &v10);
  v5 = Window;
  if ( Window < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window,
      v8);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           v10,
           a1 + 56,
           *(_QWORD *)(a1 + 72));
    v5 = 0;
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  return v5;
}
