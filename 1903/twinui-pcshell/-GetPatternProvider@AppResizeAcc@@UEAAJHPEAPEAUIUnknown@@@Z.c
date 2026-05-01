/*
 * XREFs of ?GetPatternProvider@AppResizeAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1803CC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppResizeAcc::GetPatternProvider(AppResizeAcc *this, int a2, struct IUnknown **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 != 10030 )
  {
    v3 = -2147220988;
    v4 = 122LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = (**(__int64 (__fastcall ***)(AppResizeAcc *, GUID *))this)(this, &GUID_00000000_0000_0000_c000_000000000046);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 123LL;
    goto LABEL_5;
  }
  return v3;
}
