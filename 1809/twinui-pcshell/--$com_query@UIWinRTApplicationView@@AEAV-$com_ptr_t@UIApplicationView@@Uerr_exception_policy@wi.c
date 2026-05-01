/*
 * XREFs of ??$com_query@UIWinRTApplicationView@@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@@Z @ 0x180090008
 * Callers:
 *     _lambda_662c9e03a7f7cb620b2a10f3e52d88d6_::operator() @ 0x1801F692C (_lambda_662c9e03a7f7cb620b2a10f3e52d88d6_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<IWinRTApplicationView,wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
