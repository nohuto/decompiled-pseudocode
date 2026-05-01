/*
 * XREFs of ?GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1802AC4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x18009920C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ??$query@UIWindowingEnvironmentConfig@@@?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowingEnvironmentConfig@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009B7B4 (--$query@UIWindowingEnvironmentConfig@@@-$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_e.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigById(
        RTL_SRWLOCK *this,
        int a2,
        struct IWindowingEnvironmentConfig **a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  struct IWindowingEnvironmentConfig *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF
  struct IWindowingEnvironmentConfig *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  v8 = *(_QWORD **)this[4].Ptr;
  try
  {
    while ( v8 != this[4].Ptr )
    {
      v9 = v8[5];
      v18 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>::query<IWindowingEnvironmentConfig>(
        &v18,
        (__int64)&v17);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      v16 = 0;
      v10 = (*(__int64 (__fastcall **)(struct IWindowingEnvironmentConfig *, int *))(*(_QWORD *)v17 + 32LL))(v17, &v16);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          149LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      if ( v16 == a2 )
      {
        v11 = v17;
        if ( v17 )
        {
          *a3 = v17;
          (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        else
        {
          *a3 = 0LL;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
        break;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
      v13 = v8[2];
      if ( *(_BYTE *)(v13 + 25) )
      {
        for ( i = (_QWORD *)v8[1]; !*((_BYTE *)i + 25) && v8 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v8 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v13);
      }
      v8 = i;
    }
    if ( *a3 )
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 0LL;
    }
    else
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA0,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v7);
  }
  return result;
}
