/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002BC38
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18002AEF4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180028EA4 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___ @ 0x18003670C (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  PVOID v11; // rbx
  __int64 (__fastcall *v12)(PVOID, _QWORD, RTL_SRWLOCK *); // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  PVOID v15; // rcx
  PVOID v17; // rdx
  PVOID v18; // rcx
  void *v19; // rbx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  PVOID v22; // [rsp+70h] [rbp+38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+40h] BYREF
  RTL_SRWLOCK *v24; // [rsp+80h] [rbp+48h] BYREF
  RTL_SRWLOCK *v25; // [rsp+88h] [rbp+50h]

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
  v25 = this + 15;
  v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v6 + 8LL))(v6);
    v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = v6;
  if ( v6 )
  {
LABEL_27:
    if ( this != (RTL_SRWLOCK *)-120LL )
      ReleaseSRWLockExclusive(this + 15);
    return 0LL;
  }
  v22 = 0LL;
  v7 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v22, v5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = v22;
    v12 = *(__int64 (__fastcall **)(PVOID, _QWORD, RTL_SRWLOCK *))(*(_QWORD *)v22 + 112LL);
    v24 = this;
    v13 = (_QWORD *)anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___(
                      &v23,
                      &v24);
    v8 = v12(v11, *v13, this + 17);
    v14 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 670LL;
      goto LABEL_13;
    }
    v17 = this[16].Ptr;
    v18 = v22;
    if ( v17 != v22 )
    {
      v19 = v22;
      if ( v22 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v22 + 8LL))(v22);
        v17 = this[16].Ptr;
        v18 = v22;
      }
      this[16].Ptr = v19;
      if ( v17 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = v22;
      }
    }
    v20 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    if ( v20 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v20 + 8LL))(this[16].Ptr);
      v20 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
      v18 = v22;
    }
    *a2 = v20;
    if ( v18 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_27;
  }
  v9 = (unsigned int)v7;
  v10 = 657LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)v9);
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( this != (RTL_SRWLOCK *)-120LL )
    ReleaseSRWLockExclusive(this + 15);
  return (unsigned int)v8;
}
