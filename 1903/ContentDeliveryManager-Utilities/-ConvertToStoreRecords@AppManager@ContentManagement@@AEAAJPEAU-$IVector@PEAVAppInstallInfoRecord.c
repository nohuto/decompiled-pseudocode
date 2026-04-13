/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x1800575D4
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180055F90 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  HRESULT ApartmentType; // eax
  APTTYPE v10; // ecx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rdi
  int v21; // eax
  HRESULT v22; // eax
  HSTRING v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v39; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v40; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v41; // [rsp+38h] [rbp-39h] BYREF
  __int64 v42; // [rsp+40h] [rbp-31h] BYREF
  APTTYPE pAptType; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v44; // [rsp+4Ch] [rbp-25h] BYREF
  _QWORD *v45; // [rsp+50h] [rbp-21h]
  __int64 v46; // [rsp+58h] [rbp-19h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp-11h] BYREF
  __int64 v48; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v48 = -2LL;
  *a3 = 0LL;
  v45 = 0LL;
  v5 = 0;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( !v6 )
    goto LABEL_11;
  v6[4] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
  v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
  v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
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
  if ( !v7 )
LABEL_11:
    v5 = -2147024882;
  if ( v5 >= 0 )
  {
    v45 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v5 < 0 )
  {
    v11 = (unsigned int)v5;
    v12 = 419LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v11);
    goto LABEL_59;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v44);
  v5 = v13;
  if ( v13 < 0 )
  {
    v12 = 422LL;
LABEL_43:
    v11 = (unsigned int)v13;
    goto LABEL_44;
  }
  v14 = 0;
  if ( v44 )
  {
    while ( 1 )
    {
      v42 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v14, &v42);
      v5 = v15;
      if ( v15 < 0 )
        break;
      v41 = 0LL;
      v16 = v42;
      v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 48LL);
      WindowsDeleteString(0LL);
      v41 = 0LL;
      v18 = v17(v16, &v41);
      v5 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_54;
      }
      v40 = 0LL;
      v19 = v42;
      v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 64LL);
      WindowsDeleteString(0LL);
      v40 = 0LL;
      v21 = v20(v19, &v40);
      v5 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_52;
      }
      v39 = 0LL;
      string = 0LL;
      v22 = WindowsCreateStringReference(
              L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
              0x4Du,
              &hstringHeader,
              &string);
      if ( v22 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
        JUMPOUT(0x180057AC0LL);
      }
      v23 = string;
      v24 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v39 = 0LL;
      v5 = RoActivateInstance(v23, &v46);
      if ( v5 < 0
        || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v46)(
                    v46,
                    &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                    &v39),
             (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46),
             v25 = v39)
          : (v25 = v46, v39 = v46),
            v5 < 0) )
      {
        v33 = (unsigned int)v5;
        v34 = 433LL;
        goto LABEL_49;
      }
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v25 + 56LL))(v25, v41);
      v5 = v26;
      if ( v26 < 0 )
      {
        v33 = (unsigned int)v26;
        v34 = 434LL;
        goto LABEL_49;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v39 + 104LL))(v39, v40);
      v5 = v27;
      if ( v27 < 0 )
      {
        v33 = (unsigned int)v27;
        v34 = 435LL;
        goto LABEL_49;
      }
      v28 = *v45;
      v29 = v39;
      v39 = 0LL;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v28 + 104))(v45, v29);
      v5 = v30;
      if ( v30 < 0 )
      {
        v33 = (unsigned int)v30;
        v34 = 437LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v33);
        v35 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
LABEL_52:
        WindowsDeleteString(v40);
        v40 = 0LL;
LABEL_54:
        WindowsDeleteString(v41);
        v41 = 0LL;
        goto LABEL_56;
      }
      v31 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      WindowsDeleteString(v40);
      v40 = 0LL;
      WindowsDeleteString(v41);
      v41 = 0LL;
      v32 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( ++v14 >= v44 )
        goto LABEL_41;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_56:
    v36 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  else
  {
LABEL_41:
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v45 + 64LL))(v45, a3);
    v5 = v13;
    if ( v13 < 0 )
    {
      v12 = 440LL;
      goto LABEL_43;
    }
    v5 = 0;
  }
LABEL_59:
  v37 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v37 + 16LL))(v37, *v37);
  }
  return (unsigned int)v5;
}
