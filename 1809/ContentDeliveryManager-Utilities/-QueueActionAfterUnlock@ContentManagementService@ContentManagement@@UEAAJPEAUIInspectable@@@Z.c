/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016E40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023C88 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CDC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007B0A8 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007C79C (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  _QWORD *v3; // rax
  struct IInspectable **v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  struct IInspectable *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int LockAppHost; // eax
  int v11; // eax
  __int64 v12; // rdx
  struct IInspectable *v13; // rcx
  int SharedExtendedExecutionSession; // eax
  struct IInspectable **v16; // [rsp+20h] [rbp-20h]
  struct IInspectable **v17; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct ILockAppHost *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (struct IInspectable **)v3;
  v17 = (struct IInspectable **)v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_20:
    v9 = 911LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_44;
  }
  v3[3] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  v6 = v3 + 1;
  v4[1] = (struct IInspectable *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v17;
  }
  *v4 = (struct IInspectable *)&UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v4[4] = 0LL;
  v4[5] = 0LL;
  v7 = v4[4];
  v4[4] = 0LL;
  if ( v7 )
    ((void (__fastcall *)(struct IInspectable *))v7->lpVtbl->Release)(v7);
  v8 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IInspectable **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6,
         v4 + 4);
  v5 = v8;
  if ( v8 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v8);
  if ( v5 >= 0 )
  {
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AddRef((__int64)v4);
    v16 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
    v5 = 0;
  }
  else if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_20;
  v19 = 0LL;
  LockAppHost = GetLockAppHost(&v19);
  v5 = LockAppHost;
  if ( LockAppHost < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
LABEL_23:
    if ( v19 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_40;
  }
  v20 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v19)(
          v19,
          &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791,
          &v20);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 48LL;
    goto LABEL_27;
  }
  v13 = v16[5];
  v16[5] = 0LL;
  if ( v13 )
    ((void (__fastcall *)(struct IInspectable *))v13->lpVtbl->Release)(v13);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(v16 + 5);
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v11 = (*(__int64 (__fastcall **)(__int64, struct IInspectable **))(*(_QWORD *)v20 + 32LL))(v20, v16);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 55LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v11);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_23;
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v19 + 16LL))(v19);
  v5 = 0;
LABEL_40:
  if ( v5 < 0 )
  {
    v9 = 912LL;
    goto LABEL_42;
  }
  v5 = 0;
LABEL_44:
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v16);
  return (unsigned int)v5;
}
