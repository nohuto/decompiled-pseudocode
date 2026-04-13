/*
 * XREFs of ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x18002B594
 * Callers:
 *     ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x18001F270 (--_GContentManagementService@ContentManagement@@UEAAPEAXI@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64___::_)(Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_d4e16ff8e34da2edeeacc718f45dd8b6__&___ptr64__1_Windows::ApplicationModel::AppService::IAppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____ptr64_::Invoke @ 0x1800386B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023C88 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContentManagement::ContentManagementService::CloseConnection(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rcx
  int v4; // eax
  PVOID v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = this + 15;
  AcquireSRWLockExclusive(this + 15);
  Ptr = this[16].Ptr;
  if ( Ptr )
  {
    if ( this[17].Ptr )
    {
      v4 = (*(__int64 (__fastcall **)(PVOID, PVOID))(*(_QWORD *)Ptr + 120LL))(Ptr, this[17].Ptr);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2AE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v4);
      this[17].Ptr = 0LL;
    }
    v5 = this[16].Ptr;
    if ( v5 )
    {
      this[16].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
