/*
 * XREFs of ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A86E4
 * Callers:
 *     _lambda_a024861b188cf4ada81763f84c86531a_::operator() @ 0x1802FFAC0 (_lambda_a024861b188cf4ada81763f84c86531a_--operator().c)
 *     _lambda_b62b7423e3f7d115cab3cf876a54b413_::operator() @ 0x1802FFC00 (_lambda_b62b7423e3f7d115cab3cf876a54b413_--operator().c)
 *     _lambda_b6c581e8b051b8d7b55a0d96c6d35adf_::operator() @ 0x1802FFCF0 (_lambda_b6c581e8b051b8d7b55a0d96c6d35adf_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
