/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::_scalar_deleting_destructor_ @ 0x18014DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e0406ff635fb08f1c21915f069992ce2_::__lambda_e0406ff635fb08f1c21915f069992ce2_ @ 0x18014CEEC (_lambda_e0406ff635fb08f1c21915f069992ce2_--__lambda_e0406ff635fb08f1c21915f069992ce2_.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_e0406ff635fb08f1c21915f069992ce2_::__lambda_e0406ff635fb08f1c21915f069992ce2_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
