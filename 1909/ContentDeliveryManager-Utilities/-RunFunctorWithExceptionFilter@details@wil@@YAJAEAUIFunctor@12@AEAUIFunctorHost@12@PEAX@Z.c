/*
 * XREFs of ?RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z @ 0x180002B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunFunctorWithExceptionFilter(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3,
        void *a4)
{
  __int64 result; // rax
  const struct DiagnosticsInfo *v5; // r9
  wil *v6; // rcx
  wil::details::in1diag3 *v7; // rcx
  void *v8; // [rsp+20h] [rbp-18h]

  try
  {
    result = (**(__int64 (__fastcall ***)(wil::details *))this)(this);
  }
  catch ( ... )
  {
    wil::details::ReportFeatureCaughtException(
      (struct wil::details::IFunctor *)((char *)a2 + 8),
      (struct wil::ThreadErrorContext *)*((unsigned int *)a2 + 8),
      *((struct DiagnosticsInfo **)a2 + 3),
      v5,
      v8);
    wil::RethrowCaughtException(v6);
    wil::details::in1diag3::FailFastImmediate_Unexpected(v7);
  }
  return result;
}
