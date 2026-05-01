/*
 * XREFs of ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011D814
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003ED48 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180081058 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008C5D4 (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008D364 (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18010D5E8 (--0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z.c)
 *     ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x18012087C (-value@-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_HandleUniversalFrameChangeRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rcx
  int First; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *); // rsi
  const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *v16; // rax
  APPLICATION_FRAME_CHROME_CHANGE_DATA *v17; // rax
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h] BYREF
  int v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  PSRWLOCK v23; // [rsp+40h] [rbp-68h]
  _BYTE v24[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v25[4]; // [rsp+50h] [rbp-58h] BYREF
  char v26; // [rsp+70h] [rbp-38h]
  _BYTE v27[40]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v29; // [rsp+C0h] [rbp+18h] BYREF
  __int64 *v30; // [rsp+C8h] [rbp+20h] BYREF

  v22 = -2LL;
  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v19,
         (__int64)a2);
  try
  {
    v5 = (_QWORD *)wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                     v4,
                     (__int64)&v30);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v5 + 48LL))(*v5, &v29);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1712LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    v30 = 0LL;
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v23 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = (__int64)v30;
    v30 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v20 = v29;
    v21 = 4;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v20, &v30, 0LL);
    if ( First == -2147319765 )
    {
      if ( !v7 )
      {
LABEL_9:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v30);
        return 0LL;
      }
    }
    else
    {
      if ( First < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1728LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First);
      v19 = 0LL;
      v12 = *v30;
      v19 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 504))(v30, &v19);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1733LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v13);
      GetAppChromeData((APPLICATION_FRAME_CHROME_CHANGE_DATA *)v24, (__int64)a2);
      if ( !v26 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1738LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x8000FFFFLL);
      v14 = v19;
      v15 = *(__int64 (__fastcall **)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *))(*(_QWORD *)v19 + 160LL);
      v16 = (const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *)std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(v24);
      v17 = APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
              (APPLICATION_FRAME_CHROME_CHANGE_DATA *)v27,
              v16);
      v18 = v15(v14, v17);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1740LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v18);
      if ( v26 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
      if ( !v7 )
        goto LABEL_9;
    }
    ReleaseSRWLockExclusive(v7);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6D0,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v10);
  }
  return result;
}
