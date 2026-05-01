/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x180050350
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180050418 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x18015F9AC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Wind.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdx
  __int64 v2; // rax
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rbx
  volatile int *v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 32);
  v8 = 0LL;
  v10 = v2;
  v3 = v1 + 2;
  v7[0] = &v9;
  v9 = v1;
  v4 = v1 + 3;
  v7[1] = &v10;
  AcquireSRWLockExclusive(v1 + 3);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, v3);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = v8;
  if ( v8 )
  {
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
      v7,
      v8,
      v3);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
