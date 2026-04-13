/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002B3C8
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18002A9C4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180028B60 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___ @ 0x180035C10 (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *Ptr; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v5; // rdx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v6; // rcx
  int v7; // eax
  int v8; // ebp
  PVOID v9; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v15; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v20; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v21; // [rsp+78h] [rbp+20h]

  Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = Ptr;
  if ( Ptr )
    return 0LL;
  AcquireSRWLockExclusive(this + 15);
  v21 = this + 15;
  v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v6 + 8LL))(v6);
    v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = v6;
  if ( v6 )
  {
LABEL_24:
    if ( this != (RTL_SRWLOCK *)-120LL )
      ReleaseSRWLockExclusive(this + 15);
    return 0LL;
  }
  v18 = 0LL;
  v7 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v18, v5);
  v8 = v7;
  v9 = v18;
  if ( v7 >= 0 )
  {
    v20 = this;
    v12 = *(_QWORD *)anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___(
                       &v19,
                       &v20);
    v8 = (*(__int64 (__fastcall **)(PVOID, __int64, RTL_SRWLOCK *))(*(_QWORD *)v9 + 112LL))(v9, v12, this + 17);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 670LL;
      goto LABEL_13;
    }
    if ( this[16].Ptr != v9 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 8LL))(v9);
      v15 = this[16].Ptr;
      this[16].Ptr = v9;
      if ( v15 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    if ( v16 )
    {
      (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v16 + 8LL))(v16);
      v16 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    }
    *a2 = v16;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_24;
  }
  v10 = (unsigned int)v7;
  v11 = 657LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)v10);
  if ( v9 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
  if ( this != (RTL_SRWLOCK *)-120LL )
    ReleaseSRWLockExclusive(this + 15);
  return (unsigned int)v8;
}
