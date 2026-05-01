/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_9e0ae8d731b4f3e7b636b1866b829d88___ @ 0x18024A9D8
 * Callers:
 *     ?RaiseTabTransferCanceled@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x18024BF80 (-RaiseTabTransferCanceled@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUSh.c)
 *     ?RaiseTabTransferCompleted@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x18024BFF0 (-RaiseTabTransferCompleted@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUS.c)
 *     ?RaiseTabTransferReceiving@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x18024C060 (-RaiseTabTransferReceiving@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUS.c)
 *     ?RaiseTabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x18024C0D0 (-RaiseTabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUSh.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9e0ae8d731b4f3e7b636b1866b829d88__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId___ @ 0x18024AA90 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9e0ae8d731b4f3e7b636b1866b829d88__Wind.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_9e0ae8d731b4f3e7b636b1866b829d88___(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, (__int64 *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  v5 = v9;
  if ( v9 )
  {
    v7 = *a2;
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9e0ae8d731b4f3e7b636b1866b829d88__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId___(
           &v7,
           v9,
           a1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
