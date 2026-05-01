/*
 * XREFs of ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180069A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180069AFC (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_41ea728de8cee2282d4ec3314b3d541b___ @ 0x18024D170 (Windows--Internal--ComTaskPool--QueueTask__lambda_41ea728de8cee2282d4ec3314b3d541b___.c)
 */

__int64 __fastcall WindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  PCWSTR StringRawBuffer; // rbx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 200LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 620) = a2;
  v4 = *(int *)(a1 + 296);
  if ( a2 || (int)CoreIsWindowServiceSupported(*(int *)(a1 + 296), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
    return WindowWrapperBase::NavigateInternal(a1, a2);
  WindowWrapperBase::NavigateInternal(a1, 3LL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v11,
    a1);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 304), 0LL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v9,
    v11);
  v9[1] = a1 - 8;
  v9[2] = v4;
  v9[3] = (__int64)StringRawBuffer;
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_41ea728de8cee2282d4ec3314b3d541b___(
         a1 - 8,
         v7,
         *(unsigned int *)(a1 + 548),
         v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v8,
      -2);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
}
