/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180055F3C
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180054960 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  HRESULT ApartmentType; // eax
  APTTYPE v10; // ecx
  signed int v11; // ebx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  HRESULT v22; // eax
  HSTRING v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v38; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v39; // [rsp+38h] [rbp-39h] BYREF
  __int64 v40; // [rsp+40h] [rbp-31h] BYREF
  APTTYPE pAptType; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v43; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v44; // [rsp+58h] [rbp-19h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp-11h] BYREF
  __int64 v46; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v46 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    v6[4] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
      v5 = v44;
    }
    *v6 = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v6[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    v6[5] = 0LL;
    *((_DWORD *)v6 + 12) = 0;
    v6[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v10 = pAptType;
    if ( ApartmentType < 0 )
      v10 = APTTYPE_MTA;
    pAptType = v10;
    if ( v10 == APTTYPE_MAINSTA || v10 == APTTYPE_STA )
    {
      *((_DWORD *)v7 + 18) = 1;
      *((_DWORD *)v7 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v7 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v7 + 10);
    }
    *((_DWORD *)v7 + 22) = 0;
    *((_DWORD *)v7 + 24) = 0;
    v8 = v7;
  }
  v11 = v8 == 0LL ? 0x8007000E : 0;
  v12 = v8;
  if ( v8 )
  {
    v5 = v8;
    v44 = v8;
    v12 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  if ( !v8 )
  {
    v13 = (unsigned int)v11;
    v14 = 419LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v13);
    goto LABEL_58;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v42);
  v11 = v15;
  if ( v15 < 0 )
  {
    v14 = 422LL;
LABEL_42:
    v13 = (unsigned int)v15;
    goto LABEL_43;
  }
  v16 = 0;
  if ( v42 )
  {
    while ( 1 )
    {
      v40 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v16, &v40);
      v11 = v17;
      if ( v17 < 0 )
        break;
      v39 = 0LL;
      v18 = v40;
      WindowsDeleteString(0LL);
      v39 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 48LL))(v18, &v39);
      v11 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_53;
      }
      v38 = 0LL;
      v20 = v40;
      WindowsDeleteString(0LL);
      v38 = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 64LL))(v20, &v38);
      v11 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_51;
      }
      v37 = 0LL;
      string = 0LL;
      v22 = WindowsCreateStringReference(
              L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
              0x4Du,
              &hstringHeader,
              &string);
      if ( v22 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
        JUMPOUT(0x18005642DLL);
      }
      v23 = string;
      v24 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v37 = 0LL;
      v11 = RoActivateInstance(v23, &v43);
      if ( v11 < 0
        || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v43)(
                     v43,
                     &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                     &v37),
             (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43),
             v25 = v37)
          : (v25 = v43, v37 = v43),
            v11 < 0) )
      {
        v32 = (unsigned int)v11;
        v33 = 433LL;
        goto LABEL_48;
      }
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v25 + 56LL))(v25, v39);
      v11 = v26;
      if ( v26 < 0 )
      {
        v32 = (unsigned int)v26;
        v33 = 434LL;
        goto LABEL_48;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v37 + 104LL))(v37, v38);
      v11 = v27;
      if ( v27 < 0 )
      {
        v32 = (unsigned int)v27;
        v33 = 435LL;
        goto LABEL_48;
      }
      v28 = v37;
      v37 = 0LL;
      v29 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 104LL))(v5, v28);
      v11 = v29;
      if ( v29 < 0 )
      {
        v32 = (unsigned int)v29;
        v33 = 437LL;
LABEL_48:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v32);
        v34 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
LABEL_51:
        WindowsDeleteString(v38);
        v38 = 0LL;
LABEL_53:
        WindowsDeleteString(v39);
        v39 = 0LL;
        goto LABEL_55;
      }
      v30 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      WindowsDeleteString(v38);
      v38 = 0LL;
      WindowsDeleteString(v39);
      v39 = 0LL;
      v31 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      if ( ++v16 >= v42 )
        goto LABEL_40;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_55:
    v35 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  else
  {
LABEL_40:
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v5 + 64LL))(v5, a3);
    v11 = v15;
    if ( v15 < 0 )
    {
      v14 = 440LL;
      goto LABEL_42;
    }
    v11 = 0;
  }
LABEL_58:
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return (unsigned int)v11;
}
