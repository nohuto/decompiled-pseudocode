/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180057AC8
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180055F90 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18001EEBC (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001EFD0 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18001F0B0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180023220.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x1800591B0 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18005A834 (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  volatile signed __int64 *v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  volatile signed __int64 *v34; // rcx
  volatile signed __int64 *v36; // [rsp+20h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING v39; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int64 *v40; // [rsp+40h] [rbp-20h]
  signed __int64 v41; // [rsp+48h] [rbp-18h]
  __int64 v42; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v44; // [rsp+A0h] [rbp+40h] BYREF
  int v45; // [rsp+B0h] [rbp+50h] BYREF
  int v46; // [rsp+B8h] [rbp+58h]

  v44 = a1;
  v42 = -2LL;
  *a3 = 0LL;
  v40 = 0LL;
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
  v46 = 1;
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
    v40 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v8 + 16))(v8);
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v10 = 450LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v9);
    goto LABEL_55;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v44);
  v5 = View;
  if ( View < 0 )
  {
    v10 = 453LL;
LABEL_37:
    v9 = (unsigned int)View;
    goto LABEL_38;
  }
  v12 = 0;
  if ( (_DWORD)v44 )
  {
    while ( 1 )
    {
      v37 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v12, &v37);
      v5 = v13;
      if ( v13 < 0 )
        break;
      v39 = 0LL;
      v14 = v37;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v37 + 48LL);
      WindowsDeleteString(0LL);
      v39 = 0LL;
      v16 = v15(v14, &v39);
      v5 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_50;
      }
      string = 0LL;
      v17 = v37;
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v37 + 96LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v19 = v18(v17, &string);
      v5 = v19;
      if ( v19 < 0 )
      {
        v32 = 463LL;
        goto LABEL_47;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 120LL))(v37, &v45);
      v5 = v19;
      if ( v19 < 0 )
      {
        v32 = 466LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_48;
      }
      v36 = 0LL;
      v20 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                             0x70uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( !v20 )
      {
        v5 = -2147024882;
        v30 = 2147942414LL;
        v31 = 469LL;
        goto LABEL_43;
      }
      v21 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v20);
      v22 = (volatile signed __int64 *)v21;
      if ( v21 )
      {
        v23 = *((_QWORD *)v21 + 8);
        v41 = v23;
        while ( v23 >= 0 )
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange64(v22 + 8, v23 + 1, v23);
          if ( v24 == v23 )
            goto LABEL_25;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v23 + 16));
      }
LABEL_25:
      v36 = v22;
      if ( v22 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v22);
        v22 = v36;
      }
      v25 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v22 + 6),
              v39);
      v5 = v25;
      if ( v25 < 0 )
      {
        v30 = (unsigned int)v25;
        v31 = 470LL;
        goto LABEL_43;
      }
      v26 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v36 + 6),
              string);
      v5 = v26;
      if ( v26 < 0 )
      {
        v30 = (unsigned int)v26;
        v31 = 471LL;
        goto LABEL_43;
      }
      *((_DWORD *)v36 + 26) = v45;
      LOBYTE(v27) = 1;
      v28 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v40,
              0LL,
              (unsigned __int64)(v36 + 6) & -(__int64)(v36 != 0LL),
              v27);
      v5 = v28;
      if ( v28 < 0 )
      {
        v30 = (unsigned int)v28;
        v31 = 474LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v30);
        if ( v36 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v36);
LABEL_48:
        WindowsDeleteString(string);
        string = 0LL;
LABEL_50:
        WindowsDeleteString(v39);
        v39 = 0LL;
        goto LABEL_52;
      }
      if ( v36 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v36);
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v39);
      v39 = 0LL;
      v29 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      if ( ++v12 >= (unsigned int)v44 )
        goto LABEL_35;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_52:
    v33 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  else
  {
LABEL_35:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v40,
             a3);
    v5 = View;
    if ( View < 0 )
    {
      v10 = 477LL;
      goto LABEL_37;
    }
    v5 = 0;
  }
LABEL_55:
  v34 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v34);
  }
  return (unsigned int)v5;
}
