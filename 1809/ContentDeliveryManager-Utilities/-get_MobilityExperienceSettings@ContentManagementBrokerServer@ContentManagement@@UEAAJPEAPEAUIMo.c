/*
 * XREFs of ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x180010F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004824 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18005372C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_MobilityExperienceSettings(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IMobilityExperienceSettings **a2,
        bool *a3)
{
  int v4; // eax
  int v5; // ebx
  _QWORD *v7; // rax
  ContentManagement::MobilityExperienceSettings *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::IMobilityExperienceSettings **); // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v16, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v16 )
    {
      v5 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070005LL);
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v5 < 0 )
    goto LABEL_7;
  v17 = 0LL;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (ContentManagement::MobilityExperienceSettings *)v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_13:
    v11 = (unsigned int)v9;
    v12 = 1087LL;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 1));
  *((_QWORD *)v8 + 8) = 1LL;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::`vftable'{for `IInspectable'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IMobilityExperienceSettings>'};
  *((_QWORD *)v8 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IMobilityExperienceSettings>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v8 = &ContentManagement::MobilityExperienceSettings::`vftable'{for `IInspectable'};
  *v10 = &ContentManagement::MobilityExperienceSettings::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IMobilityExperienceSettings>'};
  *((_QWORD *)v8 + 5) = &ContentManagement::MobilityExperienceSettings::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 6) = &ContentManagement::MobilityExperienceSettings::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IMobilityExperienceSettings>'};
  v9 = ContentManagement::MobilityExperienceSettings::`vftable'{for `IInspectable'}(
         v8,
         &GUID_4875646f_27b2_43cc_a9d2_ec8250523360,
         (void **)&v17);
  (*(void (__fastcall **)(ContentManagement::MobilityExperienceSettings *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 < 0 )
    goto LABEL_13;
  v13 = (**v17)(v17, &GUID_4875646f_27b2_43cc_a9d2_ec8250523360, a2);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v9 = 0;
    goto LABEL_18;
  }
  v11 = (unsigned int)v13;
  v12 = 1088LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v11);
LABEL_18:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v9;
}
