/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::Invoke @ 0x180150900
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18012FFAC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::operator() @ 0x18014DA70 (_lambda_9c39f2de9248b3982b3805f9f5b1e7b6_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::operator()((_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
