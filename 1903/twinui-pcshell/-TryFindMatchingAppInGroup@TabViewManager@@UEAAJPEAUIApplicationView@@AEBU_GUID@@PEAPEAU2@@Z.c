/*
 * XREFs of ?TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z @ 0x18023FB70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A7B74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022F4A0 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabViewManager::TryFindMatchingAppInGroup(
        TabViewManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        struct IApplicationView **a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
  int (__fastcall *v12)(struct IApplicationView *, PCWSTR, int *); // rsi
  PCWSTR StringRawBuffer; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string; // [rsp+28h] [rbp-38h] BYREF
  int v18; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v19[1] = -2LL;
  *a4 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 145);
  v8 = *v7;
  for ( v19[0] = *v7; ; v8 = v19[0] )
  {
    if ( (__int64 *)v8 == v7 )
      return 0LL;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v8 + 32) + 168LL))(*(_QWORD *)(v8 + 32), &v16);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( v16 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 48LL))(v16, v20);
      v10 = v9;
      if ( v9 < 0 )
      {
        v15 = 3260LL;
        goto LABEL_18;
      }
      v11 = v20[0] - *(_QWORD *)&a3->Data1;
      if ( v20[0] == *(_QWORD *)&a3->Data1 )
        v11 = v20[1] - *(_QWORD *)a3->Data4;
      if ( !v11 )
      {
        GetAumid(&string, *(_QWORD *)(v8 + 40));
        v12 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, int *))(*(_QWORD *)a2 + 152LL);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( v12(a2, StringRawBuffer, &v18) >= 0 && v18 )
        {
          *a4 = *(struct IApplicationView **)(v8 + 40);
          WindowsDeleteString(string);
          string = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
          return 0LL;
        }
        WindowsDeleteString(string);
        string = 0LL;
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(v19);
  }
  v15 = 3254LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  return v10;
}
