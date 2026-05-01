/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::Invoke @ 0x1800548E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator() @ 0x18005492C (_lambda_083b65f0a0bd48e59928c88ac5c6c8ab_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18012FFAC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_6a3f3a3b5daae62068289b6d6a8748e7___1_long_::Invoke(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD *)(a1 + 24);
  v4[1] = a1 + 16;
  v4[0] = a1 + 24;
  v4[2] = a1 + 32;
  v2 = lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
