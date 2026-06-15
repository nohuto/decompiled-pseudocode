/*
 * XREFs of ??0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800D5894
 * Callers:
 *     _lambda_286f8a29dcaaae6c32055cc3f87b7092_::_lambda_286f8a29dcaaae6c32055cc3f87b7092_ @ 0x180069E00 (_lambda_286f8a29dcaaae6c32055cc3f87b7092_--_lambda_286f8a29dcaaae6c32055cc3f87b7092_.c)
 *     wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_::__clone @ 0x18006B690 (wistd--__function--__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_--__clone.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

Microsoft::WRL::WeakRef *__fastcall Microsoft::WRL::WeakRef::WeakRef(
        Microsoft::WRL::WeakRef *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
