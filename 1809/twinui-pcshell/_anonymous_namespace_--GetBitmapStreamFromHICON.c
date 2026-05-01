/*
 * XREFs of _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1802DCEF4
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1802DD868 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWICBitmapSource@@@?$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@1@XZ @ 0x180094FF0 (--$query@UIWICBitmapSource@@@-$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180197470 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall anonymous_namespace_::GetBitmapStreamFromHICON(__int64 *a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // eax
  struct IWICBitmapSource **v6; // rax
  int StreamOfWICBitmapSourceWithOptions; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v14; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  LPVOID ppv; // [rsp+80h] [rbp+20h] BYREF
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v13[1] = -2LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      26LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 176LL))(ppv, a2, &v12);
  if ( v5 >= 0 )
  {
    v6 = (struct IWICBitmapSource **)wil::com_ptr_t<IWICBitmap,wil::err_exception_policy>::query<IWICBitmapSource>(
                                       &v12,
                                       (__int64)v13);
    v11 = 0LL;
    v14 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           *v6,
                                           (__int64)&GUID_ContainerFormatPng,
                                           &v14,
                                           0,
                                           &v11);
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        33LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v13);
    v17 = 0LL;
    v8 = CreateRandomAccessStreamOverStream(v11, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v17);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        36LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = v17;
    v17 = 0LL;
    *a1 = v9;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      30LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v5);
    *a1 = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
