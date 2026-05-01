/*
 * XREFs of _lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator() @ 0x1802CACC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___::Run @ 0x1802CBDF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1802CC3F8 (-clear@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int i; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int j; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h]

  v20[1] = -2LL;
  v25 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
  v25 = 0LL;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        258LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 56LL))(v25, &v22);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        261LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v4);
    v19 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 192LL);
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v19);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        264LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v6);
    for ( i = 0; i < v22; ++i )
    {
      v24 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, i, &v24);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          269LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v8);
      v18 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v18);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          272LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 56LL))(v18, &v23);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          275LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      for ( j = 0; j < v23; ++j )
      {
        v20[0] = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, j, v20);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            280LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v12);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, v20[0]);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            281LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v20);
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 88LL))(
              *(_QWORD *)(*(_QWORD *)a1 + 184LL),
              v24);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          284LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        287LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v15);
    std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::clear(*(_QWORD *)a1 + 168LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v16);
  }
  return result;
}
