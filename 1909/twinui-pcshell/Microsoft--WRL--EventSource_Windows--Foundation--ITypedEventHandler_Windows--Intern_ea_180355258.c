/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fac0f6d681df41980e3f062c9a85ea0a___ @ 0x180355258
 * Callers:
 *     ??$InvokeAll@PEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18035530C (--$InvokeAll@PEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multita.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180050418 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fac0f6d681df41980e3f062c9a85ea0a__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ @ 0x18035534C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_fac0f6d681df41980e3f062c9a85ea0a__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fac0f6d681df41980e3f062c9a85ea0a___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  volatile int *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  v5 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fac0f6d681df41980e3f062c9a85ea0a__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____(
           &v8,
           v9,
           a1);
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
