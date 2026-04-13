/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017520 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007CCA4 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007E440 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
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
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // r14
  struct IInspectable *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int LockAppHost; // eax
  __int64 (__fastcall **v12)(struct ILockAppHost *, GUID *, __int64 *); // rax
  int v13; // eax
  __int64 v14; // rdx
  struct IInspectable *v15; // rcx
  int SharedExtendedExecutionSession; // eax
  struct IInspectable **v18; // [rsp+20h] [rbp-20h]
  struct IInspectable **v19; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  struct ILockAppHost *v22; // [rsp+78h] [rbp+38h] BYREF

  v18 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (struct IInspectable **)v3;
  v19 = (struct IInspectable **)v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_20:
    v10 = 911LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
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
    v4 = v19;
  }
  *v4 = (struct IInspectable *)&UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v4[4] = 0LL;
  v4[5] = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  v8 = v4[4];
  v4[4] = 0LL;
  if ( v8 )
    ((void (__fastcall *)(struct IInspectable *))v8->lpVtbl->Release)(v8);
  v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IInspectable **))QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6,
         v4 + 4);
  v5 = v9;
  if ( v9 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v9);
  if ( v5 >= 0 )
  {
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AddRef((__int64)v4);
    v18 = v4;
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
  v22 = 0LL;
  LockAppHost = GetLockAppHost(&v22);
  v5 = LockAppHost;
  if ( LockAppHost < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
LABEL_23:
    if ( v22 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_40;
  }
  v21 = 0LL;
  v12 = *(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v22;
  v21 = 0LL;
  v13 = (*v12)(v22, &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791, &v21);
  v5 = v13;
  if ( v13 < 0 )
  {
    v14 = 48LL;
    goto LABEL_27;
  }
  v15 = v18[5];
  v18[5] = 0LL;
  if ( v15 )
    ((void (__fastcall *)(struct IInspectable *))v15->lpVtbl->Release)(v15);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(v18 + 5);
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v13 = (*(__int64 (__fastcall **)(__int64, struct IInspectable **))(*(_QWORD *)v21 + 32LL))(v21, v18);
  v5 = v13;
  if ( v13 < 0 )
  {
    v14 = 55LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v13);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_23;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v22 + 16LL))(v22);
  v5 = 0;
LABEL_40:
  if ( v5 < 0 )
  {
    v10 = 912LL;
    goto LABEL_42;
  }
  v5 = 0;
LABEL_44:
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v18);
  return (unsigned int)v5;
}
