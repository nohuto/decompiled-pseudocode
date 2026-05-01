/*
 * XREFs of ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD3A4
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803BDB28 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180043688 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800ACF30 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800AD258 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18012DBB4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801E3D00 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801FF1E4 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1803BADA8 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x180433CAC (GetAssignedAccessTypeForUser.c)
 */

// Hidden C++ exception states: #wind=63
Win32PrimaryAppProxy **__fastcall KioskPositioner::LoadAssignedAccessConfiguration(
        __int64 a1,
        Win32PrimaryAppProxy **a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, __int64 *); // r14
  HSTRING_HEADER *v9; // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rdi
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64); // rdi
  __int64 v23; // rax
  int v24; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  Win32PrimaryAppProxy *v26; // rax
  _BYTE v28[4]; // [rsp+28h] [rbp-69h] BYREF
  int v29; // [rsp+2Ch] [rbp-65h]
  __int64 v30; // [rsp+30h] [rbp-61h] BYREF
  __int64 v31; // [rsp+38h] [rbp-59h] BYREF
  __int64 v32; // [rsp+40h] [rbp-51h] BYREF
  const WCHAR *v33; // [rsp+48h] [rbp-49h] BYREF
  __int64 v34; // [rsp+50h] [rbp-41h] BYREF
  __int64 v35; // [rsp+58h] [rbp-39h] BYREF
  int v36; // [rsp+60h] [rbp-31h] BYREF
  HSTRING string; // [rsp+68h] [rbp-29h] BYREF
  WCHAR *v38; // [rsp+70h] [rbp-21h] BYREF
  __int64 v39; // [rsp+78h] [rbp-19h]
  char v40; // [rsp+80h] [rbp-11h]
  __int64 v41; // [rsp+88h] [rbp-9h]
  Win32PrimaryAppProxy **v42; // [rsp+90h] [rbp-1h]
  HSTRING_HEADER v43; // [rsp+98h] [rbp+7h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v41 = -2LL;
  v42 = a2;
  v29 = 0;
  KioskPositioner::GetUserSidString(a1, (LPWSTR *)&v33, -4LL);
  LOBYTE(v3) = 1;
  if ( (unsigned int)GetAssignedAccessTypeForUser(v33, v3) == 3 )
  {
    v39 = 0LL;
    v40 = 0;
    wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>((__int64)&v35);
    v31 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 56LL);
    v31 = 0LL;
    v5 = v4(v35, &v31);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v30 = 0LL;
      v7 = v31;
      v8 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v31 + 72LL);
      v38 = (WCHAR *)v33;
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&v38);
      v30 = 0LL;
      v10 = v8(v7, v9[1].Reserved.Reserved1, &v30);
      v11 = retaddr;
      if ( v10 < 0 )
      {
LABEL_20:
        wil::details::in1diag3::Throw_Hr(
          v11,
          1113LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v10);
LABEL_21:
        wil::details::in1diag3::Throw_Hr(
          v13,
          1119LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12);
LABEL_22:
        wil::details::in1diag3::Throw_Hr(
          v16,
          1125LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v15);
LABEL_23:
        wil::details::in1diag3::Throw_Hr(
          v19,
          1127LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v44 = 0LL;
      if ( !v30 )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        a2[2] = 0LL;
        *(_BYTE *)a2 = 0;
        *((_BYTE *)a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
        goto LABEL_17;
      }
      v28[0] = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 88LL))(v30, v28);
      v13 = retaddr;
      if ( v12 < 0 )
        goto LABEL_21;
      if ( !v28[0] )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        a2[2] = 0LL;
        *(_BYTE *)a2 = 0;
        *((_BYTE *)a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
        goto LABEL_17;
      }
      v34 = 0LL;
      v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 120LL);
      v34 = 0LL;
      v15 = v14(v30, &v34);
      v16 = retaddr;
      if ( v15 < 0 )
        goto LABEL_22;
      v32 = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL);
      v32 = 0LL;
      v18 = v17(v34, 0LL, &v32);
      v19 = retaddr;
      if ( v18 < 0 )
        goto LABEL_23;
      v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 64LL))(v32, &v36);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1129LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      if ( v36 != 3 )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        a2[2] = 0LL;
        *(_BYTE *)a2 = 0;
        *((_BYTE *)a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v32);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v34);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
        goto LABEL_17;
      }
      string = 0LL;
      v21 = v32;
      v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 48LL);
      v23 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&string);
      v24 = v22(v21, v23);
      if ( v24 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v38 = (WCHAR *)operator new(0x28uLL);
        v26 = Win32PrimaryAppProxy::Win32PrimaryAppProxy((Win32PrimaryAppProxy *)v38, StringRawBuffer);
        v40 = 1;
        v39 = 0LL;
        *a2 = v26;
        *((_BYTE *)a2 + 8) = 1;
        *((_BYTE *)a2 + 16) = 1;
        v29 = 1;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v32);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v34);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v35);
        goto LABEL_17;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1135LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v24);
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      1111LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  *((_BYTE *)a2 + 16) = 0;
  v29 = 1;
LABEL_17:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v33);
  return a2;
}
