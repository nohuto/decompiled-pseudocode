/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180057D28
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x1800561F0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800118B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18001F3FC (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001F510 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001F5F0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180023690.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x180059400 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18005AAE4 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile signed __int64 *v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int View; // eax
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rdi
  int v19; // eax
  ContentManagement::AppInstallInfoRecordImpl *v20; // rax
  ContentManagement::AppInstallInfoRecordImpl *v21; // rax
  ContentManagement::AppInstallInfoRecordImpl *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  volatile signed __int64 *v32; // rcx
  volatile signed __int64 *v34; // [rsp+20h] [rbp-30h]
  __int64 v35; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v37; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int64 *v38; // [rsp+40h] [rbp-10h]
  __int64 v39; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v41; // [rsp+90h] [rbp+40h] BYREF
  int v42; // [rsp+A0h] [rbp+50h] BYREF
  int v43; // [rsp+A8h] [rbp+58h]

  v41 = a1;
  v39 = -2LL;
  *a3 = 0LL;
  v38 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( !v6 )
    goto LABEL_5;
  *v6 = &Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>::`vftable';
  v6[2] = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 3));
  v7[8] = 1LL;
  *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
  v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
  v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
  v7[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *v7 = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
  v7[1] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
  v7[2] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
  v7[3] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7[9] = 0LL;
  *((_DWORD *)v7 + 20) = 0;
  v7[11] = 0LL;
  v43 = 1;
  *((_DWORD *)v7 + 26) = 0;
  InitializeSRWLock((PSRWLOCK)v7 + 14);
  *((_DWORD *)v7 + 30) = 0;
  *((_DWORD *)v7 + 32) = 0;
  v8 = v7;
  if ( !v7 )
LABEL_5:
    v5 = -2147024882;
  if ( v5 >= 0 )
  {
    v38 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v8 + 16))(v8);
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v10 = 450LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v9);
    goto LABEL_52;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v41);
  v5 = View;
  if ( View < 0 )
  {
    v10 = 453LL;
LABEL_34:
    v9 = (unsigned int)View;
    goto LABEL_35;
  }
  v12 = 0;
  if ( (_DWORD)v41 )
  {
    while ( 1 )
    {
      v35 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v12, &v35);
      v5 = v13;
      if ( v13 < 0 )
        break;
      v37 = 0LL;
      v14 = v35;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 48LL);
      WindowsDeleteString(0LL);
      v37 = 0LL;
      v16 = v15(v14, &v37);
      v5 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_47;
      }
      string = 0LL;
      v17 = v35;
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 96LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v19 = v18(v17, &string);
      v5 = v19;
      if ( v19 < 0 )
      {
        v30 = 463LL;
        goto LABEL_44;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 120LL))(v35, &v42);
      v5 = v19;
      if ( v19 < 0 )
      {
        v30 = 466LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_45;
      }
      v34 = 0LL;
      v20 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                             0x70uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( !v20 )
      {
        v5 = -2147024882;
        v28 = 2147942414LL;
        v29 = 469LL;
        goto LABEL_40;
      }
      v21 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v20);
      v22 = v21;
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v21);
      v34 = (volatile signed __int64 *)v22;
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v22);
      v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)((char *)v22 + 48),
              v37);
      v5 = v23;
      if ( v23 < 0 )
      {
        v28 = (unsigned int)v23;
        v29 = 470LL;
        goto LABEL_40;
      }
      v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)((char *)v22 + 48),
              string);
      v5 = v24;
      if ( v24 < 0 )
      {
        v28 = (unsigned int)v24;
        v29 = 471LL;
        goto LABEL_40;
      }
      *((_DWORD *)v22 + 26) = v42;
      LOBYTE(v25) = 1;
      v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v38,
              0LL,
              ((unsigned __int64)v22 + 48) & -(__int64)(v22 != 0LL),
              v25);
      v5 = v26;
      if ( v26 < 0 )
      {
        v28 = (unsigned int)v26;
        v29 = 474LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v28);
        if ( v34 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v34);
LABEL_45:
        WindowsDeleteString(string);
        string = 0LL;
LABEL_47:
        WindowsDeleteString(v37);
        v37 = 0LL;
        goto LABEL_49;
      }
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v22);
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v37);
      v37 = 0LL;
      v27 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( ++v12 >= (unsigned int)v41 )
        goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_49:
    v31 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  else
  {
LABEL_32:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v38,
             a3);
    v5 = View;
    if ( View < 0 )
    {
      v10 = 477LL;
      goto LABEL_34;
    }
    v5 = 0;
  }
LABEL_52:
  v32 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v32);
  }
  return (unsigned int)v5;
}
