/*
 * XREFs of ??0TabTransferManager@@QEAA@XZ @ 0x1802751A4
 * Callers:
 *     ??$MakeAndInitialize@VTabTransferManager@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferManager@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@789Windows@@AEAPEAUITabTransferEventBroker@789Windows@@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x1802749F4 (--$MakeAndInitialize@VTabTransferManager@@V1@V-$com_ptr_t@UIWeakReference@@Uerr_exception_policy.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

TabTransferManager *__fastcall TabTransferManager::TabTransferManager(TabTransferManager *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((TabTransferManager *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabTransferManager,Microsoft::WRL::FtmBase>::`vftable'{for `ITabTransferManager'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabTransferManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TabTransferManager::`vftable'{for `ITabTransferManager'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabTransferManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = SHTaskPoolGetUniqueContext(v3);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  memset_0((char *)this + 192, 0, 0x30uLL);
  *((_DWORD *)this + 60) = -1;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_WORD *)this + 126) = 0;
  *((_BYTE *)this + 254) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
