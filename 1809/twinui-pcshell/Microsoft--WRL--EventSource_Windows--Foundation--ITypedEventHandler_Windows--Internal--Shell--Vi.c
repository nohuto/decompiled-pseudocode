/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_bcd0843cf4c9ec95ad35c936b1c550b0___ @ 0x18003B13C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f048fba51bc173615ba07557fcfffbba___::Run @ 0x18003B070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f048fba51bc173615ba07557fcfffbba___--Run.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bcd0843cf4c9ec95ad35c936b1c550b0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18003B340 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bcd0843cf4c9ec95ad35c936b1c550b0__Wind.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_bcd0843cf4c9ec95ad35c936b1c550b0___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // esi
  char *Ptr; // rbx
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v5 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (char *)a1->Ptr;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( Ptr )
  {
    v9 = *a2;
    v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bcd0843cf4c9ec95ad35c936b1c550b0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
           &v9,
           Ptr,
           a1);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(Ptr + 12), v7) )
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v5;
}
