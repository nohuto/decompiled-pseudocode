/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x18004DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____ @ 0x180140390 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Wind.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdx
  __int64 v2; // rax
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v9 = v2;
  v3 = v1 + 2;
  v6[0] = &v8;
  v8 = v1;
  v4 = v1 + 3;
  v6[1] = &v9;
  AcquireSRWLockExclusive(v1 + 3);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, v3);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = v7;
  if ( v7 )
  {
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6467f9191169c2bc35f91af727f9d16b__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs_____(
      v6,
      v7,
      v3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
