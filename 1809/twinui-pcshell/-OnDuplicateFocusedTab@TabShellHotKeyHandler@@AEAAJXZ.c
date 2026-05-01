/*
 * XREFs of ?OnDuplicateFocusedTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x180202740
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x1802028A0 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::OnDuplicateFocusedTab(TabShellHotKeyHandler *this)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  v2 = *((_QWORD *)this + 4);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v9);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, v9);
  if ( v3 >= 0 )
  {
    if ( v9[0] )
    {
      v4 = *((_QWORD *)this + 5);
      v8 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 56LL))(
             v4,
             v9[0],
             &GUID_f264283f_b510_4555_80ed_4c7216018854,
             &v8);
      v3 = v5;
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
        v3 = v5;
        if ( v5 < 0 )
        {
          v6 = 291LL;
          goto LABEL_5;
        }
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**((_QWORD **)this + 5) + 136LL))(
               *((_QWORD *)this + 5),
               v9[0],
               v10);
        v3 = v5;
        if ( v5 < 0 )
        {
          v6 = 292LL;
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    }
    v3 = 0;
  }
LABEL_13:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9);
  return (unsigned int)v3;
}
