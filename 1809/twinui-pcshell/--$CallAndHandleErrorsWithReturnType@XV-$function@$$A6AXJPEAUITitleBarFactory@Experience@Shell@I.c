/*
 * XREFs of ??$CallAndHandleErrorsWithReturnType@XV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@AEAJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@$0A@@details@wil@@YAJAEBV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@AEAJ$$QEAPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801F4A28
 * Callers:
 *     _lambda_2f60772956e8f6cf6289871d839050b1_::operator() @ 0x1801F644C (_lambda_2f60772956e8f6cf6289871d839050b1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType<void,wistd::function<void (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>,long &,Windows::Internal::Shell::Experience::ITitleBarFactory *,0>(
        __int64 a1)
{
  __int64 v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 104);
  if ( !v1 )
    __fastfail(7u);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F7,
                           (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
                           v2);
  }
  return result;
}
