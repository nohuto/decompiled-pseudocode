/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ff74802286da7733b76df6a3bea32e5e___::Invoke @ 0x180052000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180052080 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ff74802286da7733b76df6a3bea32e5e___::Invoke(
        __int64 a1,
        __int64 a2)
{
  int Window; // eax
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v9; // [rsp+50h] [rbp+8h] BYREF

  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)(a1 + 48) + 152LL), &v9);
  v5 = Window;
  if ( Window < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           v9,
           a1 + 56,
           *(_QWORD *)(a1 + 72));
    v5 = 0;
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  return v5;
}
