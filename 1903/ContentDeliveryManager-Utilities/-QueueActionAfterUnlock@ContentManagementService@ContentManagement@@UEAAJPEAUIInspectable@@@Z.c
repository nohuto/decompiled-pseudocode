/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023DB8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002D780 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007CB04 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007E2A0 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // r14
  __int64 v8; // rcx
  int v9; // eax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  int LockAppHost; // eax
  __int64 (__fastcall **v14)(struct ILockAppHost *, GUID *, __int64 *); // rax
  int v15; // eax
  __int64 v16; // rdx
  struct IInspectable *v17; // rcx
  int SharedExtendedExecutionSession; // eax
  struct IInspectable **v20; // [rsp+20h] [rbp-30h]
  _QWORD *v21; // [rsp+28h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  struct ILockAppHost *v24; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v21 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_23:
    v12 = 911LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_47;
  }
  v3[3] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  v6 = v3 + 1;
  v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v21;
  }
  *v4 = &UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v4[4] = 0LL;
  v4[5] = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  v8 = v4[4];
  v4[4] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, _QWORD *))QueryInterface)(
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
    {
      v10 = v4[3];
      while ( v10 >= 0 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64(v4 + 3, v10 + 1, v10);
        if ( v11 == v10 )
          goto LABEL_19;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
    }
LABEL_19:
    v20 = (struct IInspectable **)v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
    v5 = 0;
  }
  else if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_23;
  v24 = 0LL;
  LockAppHost = GetLockAppHost(&v24);
  v5 = LockAppHost;
  if ( LockAppHost < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
LABEL_26:
    if ( v24 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v24 + 16LL))(v24);
    goto LABEL_43;
  }
  v23 = 0LL;
  v14 = *(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v24;
  v23 = 0LL;
  v15 = (*v14)(v24, &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791, &v23);
  v5 = v15;
  if ( v15 < 0 )
  {
    v16 = 48LL;
    goto LABEL_30;
  }
  v17 = v20[5];
  v20[5] = 0LL;
  if ( v17 )
    ((void (__fastcall *)(struct IInspectable *))v17->lpVtbl->Release)(v17);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(v20 + 5);
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v15 = (*(__int64 (__fastcall **)(__int64, struct IInspectable **))(*(_QWORD *)v23 + 32LL))(v23, v20);
  v5 = v15;
  if ( v15 < 0 )
  {
    v16 = 55LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v15);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    goto LABEL_26;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v24 + 16LL))(v24);
  v5 = 0;
LABEL_43:
  if ( v5 < 0 )
  {
    v12 = 912LL;
    goto LABEL_45;
  }
  v5 = 0;
LABEL_47:
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v20);
  return (unsigned int)v5;
}
