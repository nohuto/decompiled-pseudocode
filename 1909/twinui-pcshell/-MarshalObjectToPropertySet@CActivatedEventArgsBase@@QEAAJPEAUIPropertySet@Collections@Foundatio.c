/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061BF0
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618E4 (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062354 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

__int64 __fastcall CActivatedEventArgsBase::MarshalObjectToPropertySet(
        CActivatedEventArgsBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rbx
  int v47; // [rsp+20h] [rbp-49h]
  _BYTE v48[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v49; // [rsp+38h] [rbp-31h] BYREF
  __int64 v50; // [rsp+40h] [rbp-29h] BYREF
  __int64 v51; // [rsp+48h] [rbp-21h] BYREF
  __int64 v52; // [rsp+50h] [rbp-19h] BYREF
  __int64 v53; // [rsp+58h] [rbp-11h] BYREF
  __int64 v54; // [rsp+60h] [rbp-9h] BYREF
  __int64 v55; // [rsp+68h] [rbp-1h] BYREF
  __int64 v56; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v57[8]; // [rsp+78h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+17h] BYREF
  __int64 v59; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v49 = 0LL;
  v50 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v49);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v59,
           &v50);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 54LL;
      goto LABEL_5;
    }
    Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 120, v57);
    v7 = *((_DWORD *)this + 18);
    v8 = v50;
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, v7, &v56);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 60LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v9,
        v47);
LABEL_48:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v56);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v57);
      goto LABEL_49;
    }
    v11 = v49;
    v12 = v56;
    v48[0] = 0;
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ActivationKind", 0xFu, 0xEu);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v11 + 80LL))(v11, v59, v12, v48);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 62LL;
      goto LABEL_10;
    }
    v13 = *((_DWORD *)this + 19);
    v14 = v50;
    v55 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 88LL))(v14, v13, &v55);
    v5 = v15;
    if ( v15 < 0 )
    {
      v16 = 66LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v15,
        v47);
LABEL_47:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v55);
      goto LABEL_48;
    }
    v17 = v49;
    v18 = v55;
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PreviousExecutionState", 0x17u, 0x16u);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v17 + 80LL))(v17, v59, v18, v48);
    v5 = v15;
    if ( v15 < 0 )
    {
      v16 = 67LL;
      goto LABEL_15;
    }
    v19 = v50;
    v54 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 104LL))(
            v19,
            *((_QWORD *)this + 13),
            &v54);
    v5 = v20;
    if ( v20 < 0 )
    {
      v21 = 70LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v20,
        v47);
LABEL_46:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v54);
      goto LABEL_47;
    }
    v22 = v49;
    v23 = v54;
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UserContext", 0xCu, 0xBu);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v22 + 80LL))(v22, v59, v23, v48);
    v5 = v20;
    if ( v20 < 0 )
    {
      v21 = 71LL;
      goto LABEL_26;
    }
    v24 = *((_QWORD *)this + 11);
    if ( v24 )
    {
      v25 = v49;
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SplashScreen", 0xDu, 0xCu);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v25 + 80LL))(v25, v59, v24, v48);
      v5 = v20;
      if ( v20 < 0 )
      {
        v21 = 75LL;
        goto LABEL_26;
      }
    }
    v26 = *((_QWORD *)this + 10);
    if ( v26 )
    {
      v27 = v49;
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ActivationValueSetReference",
        0x1Cu,
        0x1Bu);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v27 + 80LL))(v27, v59, v26, v48);
      v5 = v20;
      if ( v20 < 0 )
      {
        v21 = 80LL;
        goto LABEL_26;
      }
    }
    v28 = v50;
    v53 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
    LOBYTE(v29) = *((_BYTE *)this + 102);
    v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v28 + 136LL))(v28, v29, &v53);
    v5 = v30;
    if ( v30 < 0 )
    {
      v31 = 84LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v30,
        v47);
LABEL_45:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v53);
      goto LABEL_46;
    }
    v32 = v49;
    v33 = v53;
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsForeground", 0xDu, 0xCu);
    v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v32 + 80LL))(v32, v59, v33, v48);
    v5 = v30;
    if ( v30 < 0 )
    {
      v31 = 85LL;
      goto LABEL_31;
    }
    v34 = v50;
    v52 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
    LOBYTE(v35) = *((_BYTE *)this + 112);
    v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 136LL))(v34, v35, &v52);
    v5 = v36;
    if ( v36 < 0 )
    {
      v37 = 88LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
        (const char *)(unsigned int)v36,
        v47);
LABEL_44:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v52);
      goto LABEL_45;
    }
    v38 = v49;
    v39 = v52;
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsHolographic", 0xEu, 0xDu);
    v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v38 + 80LL))(v38, v59, v39, v48);
    v5 = v36;
    if ( v36 < 0 )
    {
      v37 = 89LL;
      goto LABEL_36;
    }
    v40 = v50;
    v51 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
    LOBYTE(v41) = *((_BYTE *)this + 101);
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 136LL))(v40, v41, &v51);
    v5 = v42;
    if ( v42 >= 0 )
    {
      v44 = v49;
      v45 = v51;
      v59 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsInitialized", 0xEu, 0xDu);
      v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v44 + 80LL))(v44, v59, v45, v48);
      v5 = v42;
      if ( v42 >= 0 )
      {
        v5 = 0;
        goto LABEL_43;
      }
      v43 = 93LL;
    }
    else
    {
      v43 = 92LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v42,
      v47);
LABEL_43:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v51);
    goto LABEL_44;
  }
  v6 = 53LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)v4,
    v47);
LABEL_49:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v50);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v49);
  return v5;
}
