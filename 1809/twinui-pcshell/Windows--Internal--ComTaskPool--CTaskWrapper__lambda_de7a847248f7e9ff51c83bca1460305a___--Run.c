/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x18000F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F998 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___ @ 0x180118A10 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Wind.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run(
        __int64 a1)
{
  __int64 v1; // rax
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rbx
  volatile int *v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v9 = v1;
  v8 = *(RTL_SRWLOCK **)(a1 + 16);
  v2 = v8 + 2;
  v6[0] = &v8;
  v3 = v8 + 3;
  v6[1] = &v9;
  AcquireSRWLockExclusive(v8 + 3);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, v2);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = v7;
  if ( v7 )
  {
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___(
      v6,
      v7,
      v2);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v4 + 12), v5) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
