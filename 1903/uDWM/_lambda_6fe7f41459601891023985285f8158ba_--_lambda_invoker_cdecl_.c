/*
 * XREFs of _lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_ @ 0x18004DB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800769D4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a6 != 4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x376,
        (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)a4);
      __debugbreak();
    }
    v6 = *(_QWORD *)(a4 + 128);
    if ( !v6 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a5);
  }
  return 0LL;
}
