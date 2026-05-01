/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_::Invoke @ 0x18004CB70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2fe11ff52c60a5c37e661e91cf439f22_::operator() @ 0x18004CBB4 (_lambda_2fe11ff52c60a5c37e661e91cf439f22_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_484ba01e18106f192c1b4b1dec846479___1_long_::Invoke(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = a1 + 16;
  v1 = (_QWORD *)(a1 + 24);
  v4[0] = a1 + 24;
  v2 = lambda_2fe11ff52c60a5c37e661e91cf439f22_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
