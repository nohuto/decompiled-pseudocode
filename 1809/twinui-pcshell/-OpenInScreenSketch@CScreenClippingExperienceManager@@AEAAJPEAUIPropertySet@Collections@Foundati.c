/*
 * XREFs of ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180CC8
 * Callers:
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180040 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x18017DFA0 (_anonymous_namespace_--GetScreenSketchWindowIfValid.c)
 *     _anonymous_namespace_::HStringToHWND @ 0x18017E0D4 (_anonymous_namespace_--HStringToHWND.c)
 *     ?SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z @ 0x1801825A8 (-SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CScreenClippingExperienceManager::OpenInScreenSketch(
        HWND *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // esi
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int PropVal; // ebx
  int v9; // eax
  __int64 v10; // rcx
  HWND v11; // rdx
  const unsigned __int16 *v12; // r8
  struct IUnknown *v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  CallerIdentity *v15; // rbx
  const struct _TlgProvider_t *v16; // rcx
  LPVOID Context; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  HWND hwnd; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21[2]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER pData; // [rsp+68h] [rbp-9h] BYREF
  HSTRING v23; // [rsp+80h] [rbp+Fh]
  HWND *p_hwnd; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21[1] = -2LL;
  v4 = -2147024809;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
    TlgWrite(v5, &unk_1804531D7, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  if ( !a2 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_18050F938;
      qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
      TlgWrite(v6, &unk_18045321B, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
    return 2147942487LL;
  }
  v21[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
  string = 0LL;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"viewId", 7u, 6u);
  WindowsDeleteString(string);
  string = 0LL;
  *(_QWORD *)fPending = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v21,
              v23,
              (struct Windows::Foundation::IPropertyValue **)fPending);
  if ( PropVal >= 0 )
  {
    v9 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)fPending);
    PropVal = v9;
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      PropVal = 0;
      goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)fPending);
LABEL_20:
  if ( PropVal >= 0 )
  {
    hwnd = 0LL;
    if ( anonymous_namespace_::HStringToHWND((__int64)&string, &hwnd) )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
        && fPending[0] )
      {
        Context = qword_18050F938;
        qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
      }
      v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      v15 = (CallerIdentity *)hwnd;
      if ( *(_DWORD *)v14 > 5u )
      {
        p_hwnd = &hwnd;
        v25 = 8LL;
        TlgWrite(v14, &unk_18045327C, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
      }
      if ( anonymous_namespace_::GetScreenSketchWindowIfValid(v15, v11, v12, v13) )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
          && fPending[0] )
        {
          Context = qword_18050F938;
          qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
          qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
        }
        v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v16 > 5u )
          TlgWrite(v16, &unk_180453030, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
        CScreenClippingExperienceManager::SetWindowVisibility((CScreenClippingExperienceManager *)this, 1, this[49]);
        *((_BYTE *)this + 384) = 0;
        this[49] = 0LL;
        v4 = 0;
      }
    }
    PropVal = v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)PropVal);
  }
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  return (unsigned int)PropVal;
}
