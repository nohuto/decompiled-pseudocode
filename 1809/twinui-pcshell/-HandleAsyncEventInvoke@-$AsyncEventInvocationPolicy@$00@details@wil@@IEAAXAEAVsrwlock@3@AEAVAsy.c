/*
 * XREFs of ?HandleAsyncEventInvoke@?$AsyncEventInvocationPolicy@$00@details@wil@@IEAAXAEAVsrwlock@3@AEAVAsyncEventWorkQueue@23@@Z @ 0x1801B3AAC
 * Callers:
 *     _lambda_86410cc5803533906887bb4a9328b548_::_lambda_invoker_cdecl_ @ 0x1801AEA00 (_lambda_86410cc5803533906887bb4a9328b548_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800E7DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B1708 (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 */

void __fastcall wil::details::AsyncEventInvocationPolicy<1>::HandleAsyncEventInvoke(
        _BYTE *a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  char v4; // si
  bool v7; // zf
  RTL_SRWLOCK *v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-8h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  v4 = 0;
  do
  {
    AcquireSRWLockExclusive(a2);
    v7 = *a3 == 0LL;
    v8 = a2;
    v11 = a2;
    if ( v7 )
    {
      *a1 = 0;
      v4 = 1;
    }
    else
    {
      v12 = 0LL;
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        &v12,
        a3);
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        (void (__fastcall ****)(_QWORD, __int64))a3,
        v12 + 1);
      if ( !*a3 )
        a3[1] = a3;
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        &v10,
        &v12);
      if ( v12 )
        (**v12)(v12, 1LL);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v11,
        0LL);
      v9 = v10;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v10)[1])(v10);
      (**v9)(v9, 1LL);
      v8 = v11;
      v10 = 0LL;
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
  while ( !v4 );
}
