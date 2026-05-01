/*
 * XREFs of ?OpenWindowsSearch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0CE0
 * Callers:
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801AFB90 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800B3F20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801AB54C (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CScreenClippingExperienceManager::OpenWindowsSearch(
        CScreenClippingExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  int PropVal; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING, __int64 *); // rdi
  int v10; // eax
  HSTRING v11; // rbx
  int ActivationFactory; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64 *); // rdi
  int v15; // eax
  WINBOOL fPending[2]; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  HSTRING string; // [rsp+48h] [rbp-9h]
  __int64 v19; // [rsp+50h] [rbp-1h] BYREF
  __int64 v20; // [rsp+58h] [rbp+7h] BYREF
  __int64 v21; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v22[2]; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER pData; // [rsp+78h] [rbp+27h] BYREF
  HSTRING v24; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v22[1] = -2LL;
  if ( !a2 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180599CD0;
      qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
    }
    v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v2 > 5u )
      TlgWrite(v2, &unk_1804C40F3, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
    return 2147942487LL;
  }
  Context = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Context);
  string = 0LL;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"callbackformat", 0xFu, 0xEu);
  WindowsDeleteString(string);
  string = 0LL;
  *(_QWORD *)fPending = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&Context,
              v24,
              (struct Windows::Foundation::IPropertyValue **)fPending);
  if ( PropVal >= 0 )
  {
    v5 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)fPending);
    PropVal = v5;
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      PropVal = 0;
      goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)fPending);
LABEL_15:
  if ( PropVal >= 0 )
  {
    v22[0] = 0LL;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"Windows.Foundation.Uri", 0x17u, 0x16u);
    v7 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
           (__int64)v24,
           v22);
    PropVal = v7;
    if ( v7 >= 0 )
    {
      v20 = 0LL;
      v8 = v22[0];
      v9 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v22[0] + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v10 = v9(v8, string, &v20);
      PropVal = v10;
      if ( v10 >= 0 )
      {
        v19 = 0LL;
        v24 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"Windows.System.Launcher", 0x18u, 0x17u);
        v11 = v24;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        ActivationFactory = RoGetActivationFactory(v11, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v19);
        PropVal = ActivationFactory;
        if ( ActivationFactory >= 0 )
        {
          v21 = 0LL;
          v13 = v19;
          v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 64LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          v15 = v14(v13, v20, &v21);
          PropVal = v15;
          if ( v15 >= 0 )
            PropVal = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F2,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
              (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F0,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)ActivationFactory);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2ED,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EB,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)PropVal);
  }
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Context);
  return (unsigned int)PropVal;
}
