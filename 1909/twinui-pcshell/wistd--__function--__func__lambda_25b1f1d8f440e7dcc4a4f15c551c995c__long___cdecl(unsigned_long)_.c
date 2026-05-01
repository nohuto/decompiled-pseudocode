/*
 * XREFs of wistd::__function::__func__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__long___cdecl(unsigned_long)_::operator() @ 0x180126F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__long___cdecl_unsigned_long__::operator()(
        __int64 a1,
        unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8), *a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v2);
  return v3;
}
