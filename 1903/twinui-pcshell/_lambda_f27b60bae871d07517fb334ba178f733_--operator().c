/*
 * XREFs of _lambda_f27b60bae871d07517fb334ba178f733_::operator() @ 0x1802ABD58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___::Run @ 0x1802AC970 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___--.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1802AD0C0 (-erase@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowing_ea_1802AD0C0.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBW4WindowingEnvironmentType@@@Z @ 0x1802AD148 (-find@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCon.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f27b60bae871d07517fb334ba178f733_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int i; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v19[1] = -2LL;
  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::find(
    *a1 + 168LL,
    &v21,
    a1[1]);
  v2 = v21;
  v3 = *(_QWORD *)(v21 + 40);
  v19[0] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::erase(
      *a1 + 168LL,
      &v21,
      v2);
    try
    {
      v23 = 0LL;
      v4 = *(_QWORD *)(*a1 + 192LL);
      v23 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, &v23);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          182LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v5);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v18,
        v6);
      v7 = v18;
      if ( !v18 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          185LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v8);
      v22 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v22);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          190LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          193LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      for ( i = 0; i < (unsigned int)v21; ++i )
      {
        v24 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, i, &v24);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            198LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v12);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v24);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            199LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v7);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          202LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          204LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v15);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    }
    catch ( ... )
    {
      LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0xCE,
                       (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                       v16);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
      return (unsigned int)v21;
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
  return 0LL;
}
