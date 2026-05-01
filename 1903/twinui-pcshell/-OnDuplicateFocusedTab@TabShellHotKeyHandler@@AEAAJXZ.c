/*
 * XREFs of ?OnDuplicateFocusedTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x18025B010
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x18025B170 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::OnDuplicateFocusedTab(TabShellHotKeyHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v9);
  v4 = v3(v2, v9);
  if ( v4 >= 0 )
  {
    if ( v9[0] )
    {
      v8 = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 5) + 64LL))(
             *((_QWORD *)this + 5),
             v9[0],
             &GUID_f264283f_b510_4555_80ed_4c7216018854,
             &v8);
      v4 = v5;
      if ( v5 < 0 )
      {
        v6 = 285LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v5);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
        goto LABEL_13;
      }
      v10[0] = 0LL;
      v10[1] = 0LL;
      if ( v8 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, v10);
        v4 = v5;
        if ( v5 < 0 )
        {
          v6 = 291LL;
          goto LABEL_5;
        }
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**((_QWORD **)this + 5) + 152LL))(
               *((_QWORD *)this + 5),
               v9[0],
               v10);
        v4 = v5;
        if ( v5 < 0 )
        {
          v6 = 292LL;
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    }
    v4 = 0;
  }
LABEL_13:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9);
  return (unsigned int)v4;
}
