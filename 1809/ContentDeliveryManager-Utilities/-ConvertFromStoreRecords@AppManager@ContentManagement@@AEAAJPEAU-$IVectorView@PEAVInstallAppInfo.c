/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180056434
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180054960 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004824 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800112D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18001EDDC (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001EEF0 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001EFD0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180022FF0.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x180057B50 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x180059220 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int View; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  ContentManagement::AppInstallInfoRecordImpl *v20; // rax
  ContentManagement::AppInstallInfoRecordImpl *v21; // rax
  volatile signed __int64 *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  volatile signed __int64 *v33; // [rsp+20h] [rbp-30h]
  __int64 v34; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v36; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int64 *v37; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v40; // [rsp+90h] [rbp+40h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h]

  v40 = a1;
  v38 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    *v6 = &Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>::`vftable';
    v6[2] = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 3));
    v7[8] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v5 = v37;
    }
    *v7 = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v7[3] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v7[9] = 0LL;
    *((_DWORD *)v7 + 20) = 0;
    v7[11] = 0LL;
    v42 = 1;
    *((_DWORD *)v7 + 26) = 0;
    InitializeSRWLock((PSRWLOCK)v7 + 14);
    *((_DWORD *)v7 + 30) = 0;
    *((_DWORD *)v7 + 32) = 0;
    v8 = v7;
  }
  v9 = v8 == 0LL ? 0x8007000E : 0;
  v10 = v8;
  if ( v8 )
  {
    v5 = v8;
    v37 = v8;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v10 + 16))(v10);
  if ( !v8 )
  {
    v11 = v9;
    v12 = 450LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v11);
    goto LABEL_51;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v40);
  v9 = View;
  if ( View < 0 )
  {
    v12 = 453LL;
LABEL_33:
    v11 = (unsigned int)View;
    goto LABEL_34;
  }
  v14 = 0;
  if ( (_DWORD)v40 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v14, &v34);
      v9 = v15;
      if ( v15 < 0 )
        break;
      v36 = 0LL;
      v16 = v34;
      WindowsDeleteString(0LL);
      v36 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, &v36);
      v9 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_46;
      }
      string = 0LL;
      v18 = v34;
      WindowsDeleteString(0LL);
      string = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 96LL))(v18, &string);
      v9 = v19;
      if ( v19 < 0 )
      {
        v30 = 463LL;
        goto LABEL_43;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 120LL))(v34, &v41);
      v9 = v19;
      if ( v19 < 0 )
      {
        v30 = 466LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_44;
      }
      v33 = 0LL;
      v20 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                             0x70uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( !v20 )
      {
        v9 = -2147024882;
        v28 = 2147942414LL;
        v29 = 469LL;
        goto LABEL_39;
      }
      v21 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v20);
      v22 = (volatile signed __int64 *)v21;
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v21);
      v33 = v22;
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v22);
      v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v22 + 6),
              v36);
      v9 = v23;
      if ( v23 < 0 )
      {
        v28 = (unsigned int)v23;
        v29 = 470LL;
        goto LABEL_39;
      }
      v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v33 + 6),
              string);
      v9 = v24;
      if ( v24 < 0 )
      {
        v28 = (unsigned int)v24;
        v29 = 471LL;
        goto LABEL_39;
      }
      *((_DWORD *)v33 + 26) = v41;
      LOBYTE(v25) = 1;
      v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v5,
              0LL,
              (unsigned __int64)(v33 + 6) & -(__int64)(v33 != 0LL),
              v25);
      v9 = v26;
      if ( v26 < 0 )
      {
        v28 = (unsigned int)v26;
        v29 = 474LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v28);
        if ( v33 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v33);
LABEL_44:
        WindowsDeleteString(string);
        string = 0LL;
LABEL_46:
        WindowsDeleteString(v36);
        v36 = 0LL;
        goto LABEL_48;
      }
      if ( v33 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v33);
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v36);
      v36 = 0LL;
      v27 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( ++v14 >= (unsigned int)v40 )
        goto LABEL_31;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_48:
    v31 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  else
  {
LABEL_31:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v5,
             a3);
    v9 = View;
    if ( View < 0 )
    {
      v12 = 477LL;
      goto LABEL_33;
    }
    v9 = 0;
  }
LABEL_51:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v5);
  return v9;
}
