/*
 * XREFs of ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A8734
 * Callers:
 *     _lambda_22e0521af8107b5e6397e610f3471390_::operator() @ 0x1802FF9F0 (_lambda_22e0521af8107b5e6397e610f3471390_--operator().c)
 *     _lambda_a024861b188cf4ada81763f84c86531a_::operator() @ 0x1802FFAC0 (_lambda_a024861b188cf4ada81763f84c86531a_--operator().c)
 *     _lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator() @ 0x1802FFE0C (_lambda_e0b48c6444b1fd29cc3c2664eb3161bf_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839, a2);
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
