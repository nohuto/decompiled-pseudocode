/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_e6e0eff2c801ccf50926d67388532b90___ @ 0x18002783C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___::Run @ 0x180027770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___--Run.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ @ 0x180029640 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_e6e0eff2c801ccf50926d67388532b90___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // esi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *Ptr; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 1;
  v5 = 0;
  v6 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  Ptr = (volatile signed __int32 *)a1->Ptr;
  if ( a1->Ptr )
  {
    _InterlockedIncrement(Ptr + 3);
    v6 = Ptr;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v6 )
  {
    v9 = *a2;
    v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_e6e0eff2c801ccf50926d67388532b90__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____(
           &v9,
           v6,
           a1);
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v5;
}
