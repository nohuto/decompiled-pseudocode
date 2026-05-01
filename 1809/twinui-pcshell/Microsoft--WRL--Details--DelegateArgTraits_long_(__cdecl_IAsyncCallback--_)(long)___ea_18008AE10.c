/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::Invoke @ 0x18008AE10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a6a1a1620cd1726c3c4e0031d0123816_::operator() @ 0x18008ABD8 (_lambda_a6a1a1620cd1726c3c4e0031d0123816_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = lambda_a6a1a1620cd1726c3c4e0031d0123816_::operator()((_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
